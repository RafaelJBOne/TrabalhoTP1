//Testes.cpp
/*TESTES.CPP: METODOS DAS CLASSES*/
#include "n_testes.h"

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
        if (numero->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
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
        if (numero->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUNumero::executar(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setValor(VALOR_VALIDO);
        if (email->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUEmail::executar(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/*void TUNumero::testarCenario(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO) estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}*/

/*
void TUCodigo::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete numero;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
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

bool TUCodigo::executar(){
    numero = new Numero();
    estado = SUCESSO;
    testarCenario();
    delete numero;
    return estado;
}

void TUCodigo::testarCenario(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO) estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUClasse::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TUClasse::tearDown(){
    delete numero;
}

void TUClasse::testarCenarioSucesso(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUClasse::testarCenarioFalha(){
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

bool TUClasse::executar(){
    numero = new Numero();
    estado = SUCESSO;
    testarCenario();
    delete numero;
    return estado;
}

void TUClasse::testarCenario(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO) estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDescricao::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TUDescricao::tearDown(){
    delete numero;
}

void TUDescricao::testarCenarioSucesso(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha(){
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

bool TUDescricao::executar(){
    numero = new Numero();
    estado = SUCESSO;
    testarCenario();
    delete numero;
    return estado;
}

void TUDescricao::testarCenario(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO) estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEndereco::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TUEndereco::tearDown(){
    delete numero;
}

void TUEndereco::testarCenarioSucesso(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEndereco::testarCenarioFalha(){
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

bool TUEndereco::executar(){
    numero = new Numero();
    estado = SUCESSO;
    testarCenario();
    delete numero;
    return estado;
}

void TUEndereco::testarCenario(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO) estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete numero;
}

void TUData::testarCenarioSucesso(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
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

bool TUData::executar(){
    numero = new Numero();
    estado = SUCESSO;
    testarCenario();
    delete numero;
    return estado;
}

void TUData::testarCenario(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO) estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUMoeda::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TUMoeda::tearDown(){
    delete numero;
}

void TUMoeda::testarCenarioSucesso(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUMoeda::testarCenarioFalha(){
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

bool TUMoeda::executar(){
    numero = new Numero();
    estado = SUCESSO;
    testarCenario();
    delete numero;
    return estado;
}

void TUMoeda::testarCenario(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO) estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete numero;
}

void TUNome::testarCenarioSucesso(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
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

bool TUNome::executar(){
    numero = new Numero();
    estado = SUCESSO;
    testarCenario();
    delete numero;
    return estado;
}

void TUNome::testarCenario(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO) estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete numero;
}

void TUEmail::testarCenarioSucesso(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
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

bool TUEmail::executar(){
    numero = new Numero();
    estado = SUCESSO;
    testarCenario();
    delete numero;
    return estado;
}

void TUEmail::testarCenario(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO) estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete numero;
}

void TUSenha::testarCenarioSucesso(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
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

bool TUSenha::executar(){
    numero = new Numero();
    estado = SUCESSO;
    testarCenario();
    delete numero;
    return estado;
}

void TUSenha::testarCenario(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO) estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTelefone::setUp(){
    numero = new Numero();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete numero;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
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

bool TUTelefone::executar(){
    numero = new Numero();
    estado = SUCESSO;
    testarCenario();
    delete numero;
    return estado;
}

void TUTelefone::testarCenario(){
    try{
        numero->setValor(VALOR_VALIDO);
        if (numero->getValor() != VALOR_VALIDO) estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}
*/
