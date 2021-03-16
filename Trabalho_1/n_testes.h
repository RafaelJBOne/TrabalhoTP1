//Testes.h
/*TESTES.H: CLASSES*/
#ifndef N_TESTES_H
#define N_TESTES_H
#include "n_dominios.h"

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

    void setUp();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void tearDown();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int executar();
    // void testarCenario();
};

class TUEmail {
private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const string VALOR_VALIDO   = "nome@dom�nio";
    const string VALOR_INVALIDO = "nomenomenome@dom�nio";

    // Refer�ncia para o objeto a ser testado.
    Email *email;


    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void tearDown();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int executar();
    // void testarCenario();
};

class TUCodigo{
private:

    // Defini��es de constantes para evitar n�meros m�gicos.

    const string VALOR_VALIDO   = "XXXXX";
    const string VALOR_INVALIDO = "XXXXx";

    // Refer�ncia para o objeto a ser testado.
    Codigo *codigo;


    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void setUp();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void tearDown();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int executar();
    // void testarCenario();
};

#endif
