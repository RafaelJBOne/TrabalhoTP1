#ifndef N_DOMINIOS_H
#define N_DOMINIOS_H
#include <iostream>
#include <stdexcept>

using namespace std;

/// A classe "Codigo" representa um código associado ao usuário.
/// "Codigo" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(string)": com passagem de parâmetro que define a string padrão;
///     "getValor()": sem passagem de parâmetro que obtém a string armazenada;
///     "validar(string)": com passagem de parâmetro que retorna se a string passada é válida ou não.

// class "Codigo" implementada por 190089911
class Codigo {
    private:
        // Variável padrão caso não receba nada.
        static const string DEFAULT;
        // Definindo a variável que será usada para atribuição de valor.
        string valor;
    public:
        // Primeiro método construtor no caso de não haver nenhuma passagem de parametro.
        Codigo();
        // Segundo método construtor no caso de haver passagem de parametro.
        Codigo(string);
        // Método que define os valores.
        void setValor(string);
        // Método que obtém os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o parâmetro passado seja válido.
        bool validar (string);
};

// Método que retona o valor obtido.
inline string Codigo::getValor(){
    return valor;
};

/// A classe "Classe" recebe um número inteiro referente as categorias de imóveis.
/// "Classe" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)": com passagem de parâmetro que define o int padrão;
///     "getValor()": sem passagem de parâmetro que obtém o int armazenado;
///     "validar(int)": com passagem de parâmetro que retorna se o número passado é válido ou não.

// class "Classe" implementada por 190089911
class Classe {
    private:
        // Variável padrão caso não receba nada.
        static const int DEFAULT = 1;
        // Definindo a variável que será usada para atribuição de valor.
        int valor;
    public:
        // Primeiro método construtor no caso de não haver nenhuma passagem de parametro.
        Classe();
        // Segundo método construtor no caso de haver passagem de parametro.
        Classe(int);
        // Método que define os valores.
        void setValor(int);
        // Método que obtém os valores.
        int getValor();
        // Retorna verdadeiro ou falso caso o parâmetro passado seja válido.
        bool validar (int);
};

// Método que retona o valor obtido.
inline int Classe::getValor(){
    return valor;
};

/// A classe "Descricao" recebe uma string referente as características dos imóveis.
/// "Descricao" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(string)": com passagem de parâmetro que define a string padrão;
///     "getValor()": sem passagem de parâmetro que obtém a string armazenada;
///     "validar(string)": com passagem de parâmetro que retorna se a string passada é válida ou não.

// class "Descricao" implementada por 190090600
class Descricao {
    private:
        // Variável padrão caso não receba nada.
        static const string DEFAULT;
        // Definindo a variável que será usada para atribuição de valor.
        string valor;
    public:
        // Primeiro método construtor no caso de não haver nenhuma passagem de parametro.
        Descricao();
        // Segundo método construtor no caso de haver passagem de parametro.
        Descricao(string);
        // Método que define os valores.
        void setValor(string);
        // Método que obtém os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o parâmetro passado seja válido.
        bool validar (string);
};

// Método que retona o valor obtido.
inline string Descricao::getValor(){
    return valor;
};

/// A classe "Endereco" recebe uma string referente endereço do imóvel.
/// "Endereco" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(string)": com passagem de parâmetro que define a string padrão;
///     "getValor()": sem passagem de parâmetro que obtém a string armazenada;
///     "validar(string)": com passagem de parâmetro que retorna se a string passada é válida ou não.

// class "Endereco" implementada por 190115777
class Endereco {
    private:
        // Variável padrão caso não receba nada.
        static const string DEFAULT;
        // Definindo a variável que será usada para atribuição de valor.
        string valor;
    public:
        // Primeiro método construtor no caso de não haver nenhuma passagem de parametro.
        Endereco();
        // Segundo método construtor no caso de haver passagem de parametro.
        Endereco(string);
        // Método que define os valores.
        void setValor(string);
        // Método que obtém os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o parâmetro passado seja válido.
        bool validar (string);
};

// Método que retona o valor obtido.
inline string Endereco::getValor(){
    return valor;
};

/// A classe "Data" recebe strings referente as datas de aluguel do imóvel.
/// "Data" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(string)":com passagem de parâmetro que define a string padrão;
///     "getValor()": sem passagem de parâmetro que obtém a string armazenada;
///     "validar(string)": com passagem de parâmetro que retorna se a string passada é válida ou não.

// class "Data" implementada por 190090600
class Data {
    private:
        // Variável padrão caso não receba nada.
        static const string DEFAULT;
        // Definindo a variável que será usada para atribuição de valor.
        string valor;
    public:
        // Primeiro método construtor no caso de não haver nenhuma passagem de parametro.
        Data();
        // Segundo método construtor no caso de haver passagem de parametro.
        Data(string);
        // Método que define os valores.
        void setValor(string);
        // Método que obtém os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o parâmetro passado seja válido.
        bool validar (string);
};

// Método que retona o valor obtido.
inline string Data::getValor(){
    return valor;
};

/// Classe de domínio "Numero" representa a quantidade de hóspedes.
/// "Numero" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)": com passagem de parâmetro que define valor padrão;
///     "getValor()": sem passagem de parâmetro que obtém valor armazenado;
///     "validar(int)": com passagem de parâmetro que retorna se o valor passado é válido ou não.

// class "Numero" implementada por 190115777, por 190089911 e por 190090600
class Numero {
    private:
        // Variável padrão caso não receba nada.
        static const int DEFAULT = 0;
        // Definindo a variável que será usada para atribuição de valor.
        int valor;
    public:
        // Primeiro método construtor no caso de não haver nenhuma passagem de parametro.
        Numero();
        // Segundo método construtor no caso de haver passagem de parametro.
        Numero(int);
        // Método que define os valores.
        void setValor(int);
        // Método que obtém os valores.
        int getValor();
        // Retorna verdadeiro ou falso caso o parâmetro passado seja válido.
        bool validar (int);
};

// Método que retona o valor obtido.
inline int Numero::getValor(){
    return valor;
};

/// Classe de domínio "Moeda" representa o valor monetário últilizado pelo usuário.
/// "Moeda" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(double)": com passagem de parâmetro que define valor padrão;
///     "getValor()": sem passagem de parâmetro que obtém valor armazenado;
///     "validar(double)": com passagem de parâmetro que retorna se o valor passado é válido ou não.

// class "Moeda" implementada por 190115777
class Moeda {
    private:
        // Variável padrão caso não receba nada.
        static const double DEFAULT;
        // Definindo a variável que será usada para atribuição de valor.
        double valor;
    public:
        // Primeiro método construtor no caso de não haver nenhuma passagem de parametro.
        Moeda();
        // Segundo método construtor no caso de haver passagem de parametro.
        Moeda(double);
        // Método que define os valores.
        void setValor(double);
        // Método que obtém os valores.
        double getValor();
        // Retorna verdadeiro ou falso caso o parâmetro passado seja válido.
        bool validar (double);
};

// Método que retona o valor obtido.
inline double Moeda::getValor(){
    return valor;
}

/// Classe de domínio "Nome" representa o nome do usuário.
/// "Nome" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)": com passagem de parâmetro que define valor;
///     "getValor()": sem passagem de parâmetro que obtém valor;
///     "validar(int)": com passagem de parâmetro que retorna se a string passada é válida ou não.

// class "Nome" implementada por 190089911
class Nome {
    private:
        // Variável padrão caso não receba nada.
        static const string DEFAULT;
        // Definindo a variável que será usada para atribuição de valor.
        string valor;
    public:
        // Primeiro método construtor no caso de não haver nenhuma passagem de parametro.
        Nome();
        // Segundo método construtor no caso de haver passagem de parametro.
        Nome(string);
        // Método que define os valores.
        void setValor(string);
        // Método que obtém os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o parâmetro passado seja válido.
        bool validar (string);
};

// Método que retona o valor obtido.
inline string Nome::getValor(){
    return valor;
};

/// Classe de domínio "Email" representa o endereço eletrônico últilizado pelo usuário.
/// "Email" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)": com passagem de parâmetro que define a string padrão;
///     "getValor()": sem passagem de parâmetro que obtém a string armazenada;
///     "validar(int)": com passagem de parâmetro que retorna se a string passada é válida ou não.

// class "Email" implementada por 190115777, por 190089911 e por 190090600
class Email {
    private:
        // Variável padrão caso não receba nada.
        static const string DEFAULT;
        // Definindo a variável que será usada para atribuição de valor.
        string valor;
    public:
        // Primeiro método construtor no caso de não haver nenhuma passagem de parametro.
        Email();
        // Segundo método construtor no caso de haver passagem de parametro.
        Email(string);
        // Método que define os valores.
        void setValor(string);
        // Método que obtém os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o parâmetro passado seja válido.
        bool validar (string);
};

// Método que retona o valor obtido.
inline string Email::getValor(){
    return valor;
};

/// Classe de domínio "Senha" representa a senha de acesso últilizada pelo usuário.
/// "Senha" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)": com passagem de parâmetro que define a string padrão;
///     "getValor()": sem passagem de parâmetro que obtém a string armazenada;
///     "validar(int)": com passagem de parâmetro que retorna se a string passada é válida ou não.

// class "Senha" implementada por 190090600
class Senha {
    private:
        // Variável padrão caso não receba nada.
        static const string DEFAULT;
        // Definindo a variável que será usada para atribuição de valor.
        string valor;
    public:
        // Primeiro método construtor no caso de não haver nenhuma passagem de parametro.
        Senha();
        // Segundo método construtor no caso de haver passagem de parametro.
        Senha(string);
        // Método que define os valores.
        void setValor(string);
        // Método que obtém os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o parâmetro passado seja válido.
        bool validar (string);
};

// Método que retona o valor obtido.
inline string Senha::getValor(){
    return valor;
};

/// Classe de domínio "Telefone" representa o número telefônico de contato últilizado pelo usuário.
/// "Telefone" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)": com passagem de parâmetro que define a string padrão;
///     "getValor()": sem passagem de parâmetro que obtém a string armazenada;
///     "validar(int)": com passagem de parâmetro que retorna se a string passada é válida ou não.

// class "Telefone" implementada por 190115777
class Telefone {
    private:
        // Variável padrão caso não receba nada.
        static const string DEFAULT;
        // Definindo a variável que será usada para atribuição de valor.
        string valor;
    public:
        // Primeiro método construtor no caso de não haver nenhuma passagem de parametro.
        Telefone();
        // Segundo método construtor no caso de haver passagem de parametro.
        Telefone(string);
        // Método que define os valores.
        void setValor(string);
        // Método que obtém os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o parâmetro passado seja válido.
        bool validar (string);
};

// Método que retona o valor obtido.
inline string Telefone::getValor(){
    return valor;
};

#endif // DOMINIOS_H_INCLUDED
