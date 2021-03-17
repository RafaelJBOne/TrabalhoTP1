//Testes.h
/*TESTES.H: CLASSES*/
#ifndef N_TESTES_H
#define N_TESTES_H
#include "n_dominios.h"

class TUCodigo{
private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "XXXXX";
    const string VALOR_INVALIDO = "XXXXx";

    // Referência para o objeto a ser testado.
    Codigo *codigo;


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

class TUClasse{
private:

    // Definições de constantes para evitar números mágicos.

    const static int VALOR_VALIDO   = 1;
    const static int VALOR_INVALIDO = 0;

    // Referência para o objeto a ser testado.
    Classe *classe;


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

class TUEndereco{
private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "Conj 08 lote 14.5";
    const string VALOR_INVALIDO = "*****";

    // Referência para o objeto a ser testado.
    Endereco *endereco;


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

class TUNome{
private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "Johnatan";
    const string VALOR_INVALIDO = "  . hona. sousa";

    // Referência para o objeto a ser testado.
    Nome *nome;


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

class TUMoeda {
private:

    // Definições de constantes para evitar números mágicos.

    double VALOR_VALIDO   = 100;
    double VALOR_INVALIDO = -0.99;

    // Referência para o objeto a ser testado.
    Moeda *moeda;


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

class TUTelefone{
private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "(123)-123456789";
    const string VALOR_INVALIDO = "(061924)-567865";

    // Referência para o objeto a ser testado.
    Telefone *telefone;


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

class TUDescricao{
private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "12345.";
    const string VALOR_INVALIDO = "123451234512345123451234512345";

    // Referência para o objeto a ser testado.
    Descricao *descricao;


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

class TUData{
private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "16-03-21";
    const string VALOR_INVALIDO = "0123456789";

    // Referência para o objeto a ser testado.
    Data *data;


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

class TUSenha{
private:

    // Definições de constantes para evitar números mágicos.

    const string VALOR_VALIDO   = "AB1sCD";
    const string VALOR_INVALIDO = "AAvv123";

    // Referência para o objeto a ser testado.
    Senha *senha;


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


#endif
