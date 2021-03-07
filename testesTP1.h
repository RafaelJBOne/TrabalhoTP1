//Testes.h
/*TESTES.H: CLASSES*/
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

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
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
