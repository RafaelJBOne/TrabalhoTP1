//Testes.h
/*TESTES.H: CLASSES*/
#ifndef TESTESTP1_H
#define TESTESTP1_H
#include "dominiosTP1.h"



class TUNumero {
private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;

    // Refer�ncia para o objeto a ser testado.
    Numero *numero;


    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

   // void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.
    void setUp();
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    bool executar();
    void testarCenario();
};
/*
class TUCodigo {
private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

    // Refer�ncia para o objeto a ser testado.
    Numero *numero;


    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

   // void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.
    void setUp();
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    bool executar();
    void testarCenario();
};

class TUClasse {
private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

    // Refer�ncia para o objeto a ser testado.
    Numero *numero;


    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

   // void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.
    void setUp();
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    bool executar();
    void testarCenario();
};

class TUDescricao {
private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

    // Refer�ncia para o objeto a ser testado.
    Numero *numero;


    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

   // void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.
    void setUp();
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    bool executar();
    void testarCenario();
};

class TUEndereco {
private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

    // Refer�ncia para o objeto a ser testado.
    Numero *numero;


    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

   // void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.
    void setUp();
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    bool executar();
    void testarCenario();
};

class TUData {
private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

    // Refer�ncia para o objeto a ser testado.
    Numero *numero;


    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

   // void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.
    void setUp();
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    bool executar();
    void testarCenario();
};

class TUMoeda {
private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

    // Refer�ncia para o objeto a ser testado.
    Numero *numero;


    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

   // void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.
    void setUp();
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    bool executar();
    void testarCenario();
};

class TUNome {
private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

    // Refer�ncia para o objeto a ser testado.
    Numero *numero;


    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

   // void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.
    void setUp();
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    bool executar();
    void testarCenario();
};

class TUEmail {
private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

    // Refer�ncia para o objeto a ser testado.
    Numero *numero;


    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

   // void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.
    void setUp();
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    bool executar();
    void testarCenario();
};

class TUSenha {
private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

    // Refer�ncia para o objeto a ser testado.
    Numero *numero;


    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

   // void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.
    void setUp();
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    bool executar();
    void testarCenario();
};

class TUTelefone {
private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

    // Refer�ncia para o objeto a ser testado.
    Numero *numero;


    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

   // void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.
    void setUp();
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    bool executar();
    void testarCenario();
};
*/
#endif
