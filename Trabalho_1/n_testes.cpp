//Testes.cpp
/*TESTES.CPP: METODOS DAS CLASSES*/
#include "n_testes.h"

// TESTES UNITÁRIOS DE DOMÍNIOS.

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUCodigo::executar(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUClasse::setUp(){
    classe = new Classe();
    estado = SUCESSO;
}

void TUClasse::tearDown(){
    delete classe;
}

void TUClasse::testarCenarioSucesso(){
    try{
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUClasse::testarCenarioFalha(){
    try{
        classe->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (classe->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUClasse::executar(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUDescricao::setUp(){
    descricao = new Descricao();
    estado = SUCESSO;
}

void TUDescricao::tearDown(){
    delete descricao;
}

void TUDescricao::testarCenarioSucesso(){
    try{
        descricao->setValor(VALOR_VALIDO);
        if (descricao->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha(){
    try{
        descricao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (descricao->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUDescricao::executar(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEndereco::setUp(){
    endereco = new Endereco();
    estado = SUCESSO;
}

void TUEndereco::tearDown(){
    delete endereco;
}

void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setValor(VALOR_VALIDO);
        if (endereco->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (endereco->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUEndereco::executar(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (data->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUData::executar(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

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

void TUMoeda::setUp(){
    moeda = new Moeda();
    estado = SUCESSO;
}

void TUMoeda::tearDown(){
    delete moeda;
}

void TUMoeda::testarCenarioSucesso(){
    try{
        moeda->setValor(VALOR_VALIDO);
        if (moeda->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUMoeda::testarCenarioFalha(){
    try{
        moeda->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (moeda->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUMoeda::executar(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setValor(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUNome::executar(){
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

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUSenha::executar(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUTelefone::setUp(){
    telefone = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete telefone;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        telefone->setValor(VALOR_VALIDO);
        if (telefone->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        telefone->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (telefone->getValor() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUTelefone::executar(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// TESTES UNITÁRIOS DE ENTIDADES.

void TUImovel::setUp(){
    imovel = new Imovel();
    estado = SUCESSO;
}

void TUImovel::tearDown(){
    delete imovel;
}

void TUImovel::testarCenario(){
    // VERIFICAR O QUE ESTÁ OCASIONANDO ERRO DE COMPILAÇÃO.
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO);
    imovel->setcodigo(codigo);
    if(imovel->getcodigo().getValor() != VALOR_VALIDO)
        estado = FALHA;
}

int TUImovel::run(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
