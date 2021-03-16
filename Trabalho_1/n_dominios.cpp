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
   int i = 0;
   //laco para percorer o nome
   if(valor[0] == 48 && valor[1] == 48 && valor[2] == 48 && valor[3]== 48 && valor[4]== 48){
        return false;
   }
   while(valor[i] != '\0'){
        //conferindo se na posicao do iesimo eh letra maiuscula
        if (valor[i] >= 65 && valor[i] <= 90){
            i++;
            continue;
        }
        //conferindo se na posicao do iesimo eh algum numero
        if (valor[i] >= 48 && valor[i] <= 57){
            i++;
            continue;
        }
        if (valor[i] < 65 || valor[i] > 90 || valor[i] < 48 || valor[i] > 57){
            i++;
            return false;
        }
   }
   //pega o valor de i e verifica se ele eh menor que 1 e maior que 5
    if(i != 5){
        return false;
    }
    return true;
}
