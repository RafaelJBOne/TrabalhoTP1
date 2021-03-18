//Testes.cpp
/*TESTES.CPP: METODOS DAS CLASSES*/
#include "n_testes.h"

// TESTES UNITÁRIOS DE DOMÍNIOS.

const string TUCodigo::VALOR_VALIDO   = "XXXXX";
const string TUCodigo::VALOR_INVALIDO = "XXXXx";
const string TUDescricao::VALOR_VALIDO   = "12345.";
const string TUDescricao::VALOR_INVALIDO = "123451234512345123451234512345";
const string TUEndereco::VALOR_VALIDO   = "Conj 08 lote 14.5";
const string TUEndereco::VALOR_INVALIDO = "*****";
const string TUData::VALOR_VALIDO   = "16-03-21";
const string TUData::VALOR_INVALIDO = "0123456789";

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

const string TUImovel::VALOR_VALIDO_DE_CODIGO   = "XXXXX";
const string TUImovel::VALOR_VALIDO_DE_DESCRICAO = "123456.";
const string TUImovel::VALOR_VALIDO_DE_ENDERECO = "Conj 08 lote 14.5";
const string TUImovel::VALOR_VALIDO_DE_DATA_INICIAL = "16-03-21";
const string TUImovel::VALOR_VALIDO_DE_DATA_FINAL = "18-04-21";
const double TUImovel::VALOR_VALIDO_DE_VALOR = 10;

void TUImovel::setUp(){
    imovel = new Imovel();
    estado = SUCESSO;
}

void TUImovel::tearDown(){
    delete imovel;
}

void TUImovel::testarCenario(){
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_DE_CODIGO);
    imovel->setcodigo(codigo);
    if(imovel->getcodigo().getValor() != VALOR_VALIDO_DE_CODIGO)
        estado = FALHA;

    Classe classe;
    classe.setValor(VALOR_VALIDO_DE_CLASSE);
    imovel->setclasse(classe);
    if(imovel->getclasse().getValor() != VALOR_VALIDO_DE_CLASSE)
        estado = FALHA;

    Descricao descricao;
    descricao.setValor(VALOR_VALIDO_DE_DESCRICAO);
    imovel->setdescricao(descricao);
    if(imovel->getdescricao().getValor() != VALOR_VALIDO_DE_DESCRICAO)
        estado = FALHA;

    Endereco endereco;
    endereco.setValor(VALOR_VALIDO_DE_ENDERECO);
    imovel->setendereco(endereco);
    if(imovel->getendereco().getValor() != VALOR_VALIDO_DE_ENDERECO)
        estado = FALHA;

    Data data_inicial;
    data_inicial.setValor(VALOR_VALIDO_DE_DATA_INICIAL);
    imovel->setdata_inicial(data_inicial);
    if(imovel->getdata_inicial().getValor() != VALOR_VALIDO_DE_DATA_INICIAL)
        estado = FALHA;

    Data data_final;
    data_final.setValor(VALOR_VALIDO_DE_DATA_FINAL);
    imovel->setdata_final(data_final);
    if(imovel->getdata_final().getValor() != VALOR_VALIDO_DE_DATA_FINAL)
        estado = FALHA;

    Numero hospedes;
    hospedes.setValor(VALOR_VALIDO_DE_HOSPEDES);
    imovel->sethospedes(hospedes);
    if(imovel->gethospedes().getValor() != VALOR_VALIDO_DE_HOSPEDES)
        estado = FALHA;

    Moeda valor;
    valor.setValor(VALOR_VALIDO_DE_VALOR);
    imovel->setvalor(valor);
    if(imovel->getvalor().getValor() != VALOR_VALIDO_DE_VALOR)
        estado = FALHA;
}

int TUImovel::executar(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}

const string TUProposta::VALOR_VALIDO_DE_CODIGO   = "XXXXX";
const string TUProposta::VALOR_VALIDO_DE_DATA_INICIAL = "16-03-21";
const string TUProposta::VALOR_VALIDO_DE_DATA_FINAL = "18-04-21";
const double TUProposta::VALOR_VALIDO_DE_VALOR = 10;

void TUProposta::setUp(){
    proposta = new Proposta();
    estado = SUCESSO;
}

void TUProposta::tearDown(){
    delete proposta;
}

void TUProposta::testarCenario(){
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_DE_CODIGO);
    proposta->setcodigo(codigo);
    if(proposta->getcodigo().getValor() != VALOR_VALIDO_DE_CODIGO)
        estado = FALHA;

    Data data_inicial;
    data_inicial.setValor(VALOR_VALIDO_DE_DATA_INICIAL);
    proposta->setdata_inicial(data_inicial);
    if(proposta->getdata_inicial().getValor() != VALOR_VALIDO_DE_DATA_INICIAL)
        estado = FALHA;

    Data data_final;
    data_final.setValor(VALOR_VALIDO_DE_DATA_FINAL);
    proposta->setdata_final(data_final);
    if(proposta->getdata_final().getValor() != VALOR_VALIDO_DE_DATA_FINAL)
        estado = FALHA;

    Numero hospedes;
    hospedes.setValor(VALOR_VALIDO_DE_HOSPEDES);
    proposta->sethospedes(hospedes);
    if(proposta->gethospedes().getValor() != VALOR_VALIDO_DE_HOSPEDES)
        estado = FALHA;

    Moeda valor;
    valor.setValor(VALOR_VALIDO_DE_VALOR);
    proposta->setvalor(valor);
    if(proposta->getvalor().getValor() != VALOR_VALIDO_DE_VALOR)
        estado = FALHA;
}

int TUProposta::executar(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}

const string TUUsuario::VALOR_VALIDO_DE_NOME = "Johnatan. Sousa";
const string TUUsuario::VALOR_VALIDO_DE_EMAIL = "nome@domínio";
const string TUUsuario::VALOR_VALIDO_DE_SENHA = "Ab0cde";
const string TUUsuario::VALOR_VALIDO_DE_TELEFONE = "(123)-123456789";

void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenario(){
    Nome nome;
    nome.setValor(VALOR_VALIDO_DE_NOME);
    usuario->setnome(nome);
    if(usuario->getnome().getValor() != VALOR_VALIDO_DE_NOME)
        estado = FALHA;

    Email email;
    email.setValor(VALOR_VALIDO_DE_EMAIL);
    usuario->setemail(email);
    if(usuario->getemail().getValor() != VALOR_VALIDO_DE_EMAIL)
        estado = FALHA;

    Senha senha;
    senha.setValor(VALOR_VALIDO_DE_SENHA);
    usuario->setsenha(senha);
    if(usuario->getsenha().getValor() != VALOR_VALIDO_DE_SENHA)
        estado = FALHA;

    Telefone telefone;
    telefone.setValor(VALOR_VALIDO_DE_TELEFONE);
    usuario->settelefone(telefone);
    if(usuario->gettelefone().getValor() != VALOR_VALIDO_DE_TELEFONE)
        estado = FALHA;
}

int TUUsuario::executar(){
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
