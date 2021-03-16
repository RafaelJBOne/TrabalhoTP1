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

/*
Codigo::Codigo(){
    valor = DEFAULT;
}

Codigo::Codigo(int valor){
    this->valor = valor;
}

bool Codigo::validar(int valor){
    if (){
        return false;
    }
    return true;
}

Classe::Classe(){
    valor = DEFAULT;
}

Classe::Classe(int valor){
    this->valor = valor;
}

bool Classe::validar(int valor){
    if (){
        return false;
    }
    return true;
}

Descricao::Descricao(){
    valor = DEFAULT;
}

Descricao::Descricao(int valor){
    this->valor = valor;
}

bool Descricao::validar(int valor){
    if (){
        return false;
    }
    return true;
}

Endereco::Endereco(){
    valor = DEFAULT;
}

Endereco::Endereco(int valor){
    this->valor = valor;
}

bool Endereco::validar(int valor){
    if (){
        return false;
    }
    return true;
}

Data::Data(){
    valor = DEFAULT;
}

Data::Data(int valor){
    this->valor = valor;
}

bool Data::validar(int valor){
    if (){
        return false;
    }
    return true;
}

Moeda::Moeda(){
    valor = DEFAULT;
}

Moeda::Moeda(int valor){
    this->valor = valor;
}

bool Moeda::validar(int valor){
    if (){
        return false;
    }
    return true;
}

Nome::Nome(){
    valor = DEFAULT;
}

Nome::Nome(int valor){
    this->valor = valor;
}

bool Nome::validar(int valor){
    if (){
        return false;
    }
    return true;
}

Email::Email(){
    valor = DEFAULT;
}

Email::Email(int valor){
    this->valor = valor;
}

bool Email::validar(int valor){
    if (){
        return false;
    }
    return true;
}

Senha::Senha(){
    valor = DEFAULT;
}

Senha::Senha(int valor){
    this->valor = valor;
}

bool Senha::validar(int valor){
    if (){
        return false;
    }
    return true;
}

Telefone::Telefone(){
    valor = DEFAULT;
}

Telefone::Telefone(int valor){
    this->valor = valor;
}

bool Telefone::validar(int valor){
    if (){
        return false;
    }
    return true;
}
*/
