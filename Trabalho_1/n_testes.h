//Testes.h
/*TESTES.H: CLASSES*/
#ifndef N_TESTES_H
#define N_TESTES_H
#include "n_dominios.h"

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

    void setUp();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void tearDown();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int executar();
    // void testarCenario();
};

class TUEmail {
private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "nome@domínio";
    const string VALOR_INVALIDO = "nomenomenome@domínio";

    // Referência para o objeto a ser testado.
    Email *email;


    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void setUp();
    void testarCenarioSucesso();
    void testarCenarioFalha();
    void tearDown();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int executar();
    // void testarCenario();
};

/*
class TUCodigo {
private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

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

class TUClasse {
private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

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

class TUDescricao {
private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

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

class TUEndereco {
private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

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

class TUData {
private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

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

class TUMoeda {
private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

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

class TUNome {
private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

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

class TUEmail {
private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

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

class TUSenha {
private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

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

class TUTelefone {
private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = ;
    const static int VALOR_INVALIDO = ;

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
*/
#endif
