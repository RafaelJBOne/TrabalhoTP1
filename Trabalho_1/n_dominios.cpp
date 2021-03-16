// DOMINIOS.CPP:
#include "n_dominios.h"

Numero::Numero(){
    valor = DEFAULT;
}

Numero::Numero(int valor){
    this->valor = valor;
}

void Numero::setValor(int valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
}

bool Numero::validar(int valor){
    if (valor > 20 || valor < 0){
        return false;
    }
    return true;
}

Email::Email(){
    valor = DEFAULT;
}

Email::Email(string valor){
    this->valor = valor;
}

void Email::setValor(string valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
};

bool Email::validar(string valor){
    //pegando o email para validacao
    string caractere = "a";
    int posicao = 0;
    int valor_do_caractere;
    int proximo_valor_do_caractere;
    int contador_1 = 0;
    // '\0' = EOF
    // ler tudo ate o @
    while(caractere != "@"){
        caractere = valor[posicao];
        posicao++;
        contador_1 ++;
    }
    //caso o nome ultrapasse 10 caracteres
    if(contador_1 > 10){
        return  false;
    }
    //contador para depois do @
    int contador_2 = 0;
    // '\0' = EOF
    //enquanto houver caractere depois do @
    while(valor[posicao] != '\0'){
        contador_2++;
        posicao++;
    }
    //caso o dominio ultrapasse 20 caracteres
    if(contador_2 > 20){
        return  false;
    }
}

Codigo::Codigo(){
    valor = DEFAULT;
}

Codigo::Codigo(string valor){
    this->valor = valor;
}

void Codigo::setValor(string valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
}

bool Codigo::validar(string valor){

   //validacao de parametros de codigo
   string nome_codigo = "00000", variavel_letra = "a";
   int i = 0;
   //laco para percorer o nome
   if(nome_codigo[0] == 48 && nome_codigo[1] == 48 && nome_codigo[2] == 48 && nome_codigo[3]== 48 && nome_codigo[4]== 48){
       return false;
   }
   while(nome_codigo[i] != '\0'){
        //conferindo se na posicao do iesimo eh letra maiuscula
       if (nome_codigo[i] >= 65 && nome_codigo[i] <= 90){
            i++;
            continue;
        }
        //conferindo se na posicao do iesimo eh algum numero
        if (nome_codigo[i] >= 48 && nome_codigo[i] <= 57){
            i++;
            continue;
        }
        if (nome_codigo[i] < 65 && nome_codigo[i] > 90 && nome_codigo[i] < 48 && nome_codigo[i] > 57){
            i++;
            cout << "x MINUSCULO NAO EH VALIDO" << endl;
            return false;
        }
   }
   //pega o valor de i e verifica se ele eh menor que 1 e maior que 5
    if(i != 5){
        //cout << "IF FORA DO WHILE" << endl;
        return false;
    }
    return true;
}
