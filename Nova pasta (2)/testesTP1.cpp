//Testes.cpp
/*TESTES.CPP: METODOS DAS CLASSES*/
#include "testesTP1.h"

void TUNumero::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TUNumero::tearDown(){
    delete numero;
}

void TUNumero::testarCenarioSucesso(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNumero::testarCenarioFalha(){
    try{
        numero->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (numero->getValor() == VALOR_INVALIDO)
            estado = FALHA;
        return;
    }
}

bool TUNumero::executar(){
    numero = new Numero();
    estado = SUCESSO;
    testarCenario();
    delete numero;
    return estado;
}

void TUNumero::testarCenario(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO) estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}



/*
void TUCodigo::testarCenario(){
    try{
        dominio->setValor(VALOR_VALIDO);
        if (dominio->getValor() != VALOR_VALIDO) estado = false;
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

bool TUCodigo::run(){
    dominio = new Codigo();
    estado = true;
    testarCenario();
    delete dominio;
    return estado;
}

void TUClasse::testarCenario(){
    try{
        dominio->setValor(VALOR_VALIDO);
        if (dominio->getValor() != VALOR_VALIDO) estado = false;
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

bool TUClasse::run(){
    dominio = new Clase();
    estado = true;
    testarCenario();
    delete dominio;
    return estado;
}

void TUDescricao::testarCenario(){
    try{
        dominio->setValor(VALOR_VALIDO);
        if (dominio->getValor() != VALOR_VALIDO) estado = false;
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

bool TUDescricao::run(){
    dominio = new Descricao();
    estado = true;
    testarCenario();
    delete dominio;
    return estado;
}

void TUEndereco::testarCenario(){
    try{
        dominio->setValor(VALOR_VALIDO);
        if (dominio->getValor() != VALOR_VALIDO) estado = false;
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

bool TUEndereco::run(){
    dominio = new Endereco ();
    estado = true;
    testarCenario();
    delete dominio;
    return estado;
}

void TUData::testarCenario(){
    try{
        dominio->setValor(VALOR_VALIDO);
        if (dominio->getValor() != VALOR_VALIDO) estado = false;
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

bool TUData::run(){
    dominio = new Data();
    estado = true;
    testarCenario();
    delete dominio;
    return estado;
}

void TUMoeda::testarCenario(){
    try{
        dominio->setValor(VALOR_VALIDO);
        if (dominio->getValor() != VALOR_VALIDO) estado = false;
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

bool TUMoeda::run(){
    dominio = new Moeda();
    estado = true;
    testarCenario();
    delete dominio;
    return estado;
}

void TUNome::testarCenario(){
    try{
        dominio->setValor(VALOR_VALIDO);
        if (dominio->getValor() != VALOR_VALIDO) estado = false;
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

bool TUNome::run(){
    dominio = new Nome();
    estado = true;
    testarCenario();
    delete dominio;
    return estado;
}

void TUEmail::testarCenario(){
    try{
        dominio->setValor(VALOR_VALIDO);
        if (dominio->getValor() != VALOR_VALIDO) estado = false;
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

bool TUEmail::run(){
    dominio = new Email();
    estado = true;
    testarCenario();
    delete dominio;
    return estado;
}

void TUSenha::testarCenario(){
    try{
        dominio->setValor(VALOR_VALIDO);
        if (dominio->getValor() != VALOR_VALIDO) estado = false;
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

bool TUSenha::run(){
    dominio = new Senha();
    estado = true;
    testarCenario();
    delete dominio;
    return estado;
}

void TUTelefone::testarCenario(){
    try{
        dominio->setValor(VALOR_VALIDO);
        if (dominio->getValor() != VALOR_VALIDO) estado = false;
    }
    catch(invalid_argument &excecao){
        estado = false;
    }
}

bool TUTelefone::run(){
    dominio = new Telefone();
    estado = true;
    testarCenario();
    delete dominio;
    return estado;

}*/
