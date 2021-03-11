//Testes.h
/*TESTES.H: CLASSES*/
#ifndef TESTESTP1_H
#define TESTESTP1_H
#include "dominiosTP1.h"



class TUNumero {
private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;

    // Referência para o objeto a ser testado.
    Numero *numero;


    // Estado do teste.

    int estado;

    // Declarações de métodos.

   // void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.
    void setUp();
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    bool executar();
    void testarCenario();
};

/*
class TUCodigo(){
private:
    const static int VALOR_VALIDO   = ;
    Numero *dominio;
    bool estado;
    void testarCenario();
public:
    bool run();
};

class TUClasse(){
private:
    const static int VALOR_VALIDO   = ;
    Numero *dominio;
    bool estado;
    void testarCenario();
public:
    bool run();
};

class TUDescricao(){
private:
    const static int VALOR_VALIDO   = ;
    Numero *dominio;
    bool estado;
    void testarCenario();
public:
    bool run();
};

class TUEndereco(){
private:
    const static int VALOR_VALIDO   = ;
    Numero *dominio;
    bool estado;
    void testarCenario();
public:
    bool run();
};

class TUData(){
private:
    const static int VALOR_VALIDO   = ;
    Numero *dominio;
    bool estado;
    void testarCenario();
public:
    bool run();
};

class TUMoeda(){
private:
    const static int VALOR_VALIDO   = ;
    Numero *dominio;
    bool estado;
    void testarCenario();
public:
    bool run();
};

class TUNome(){
private:
    const static int VALOR_VALIDO   = ;
    Numero *dominio;
    bool estado;
    void testarCenario();
public:
    bool run();
};

class TUEmail(){
private:
    const static int VALOR_VALIDO   = ;
    Numero *dominio;
    bool estado;
    void testarCenario();
public:
    bool run();
};

class TUSenha(){
private:
    const static int VALOR_VALIDO   = ;
    Numero *dominio;
    bool estado;
    void testarCenario();
public:
    bool run();
};

class TUTelefone(){
private:
    const static int VALOR_VALIDO   = ;
    Numero *dominio;
    bool estado;
    void testarCenario();
public:
    bool run();
};
*/
#endif
