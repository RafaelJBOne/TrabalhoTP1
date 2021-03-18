// DOMINIOS.H:
#ifndef N_DOMINIOS_H
#define N_DOMINIOS_H
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

/// A classe "Codigo" representa um código associado ao usuário.
/// "Codigo" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)" com passagem de parâmetro que define a string padrão;
///     "getValor()" sem passagem de parâmetro que obtém a string armazenada;
///     "validar(int)" com passagem de parâmetro que retorna se a string passada é válida ou não.

class Codigo {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribuiçao de valor
        string valor;
    public:
        //primeiro metodo construtor no caso de nao aver nada 'Email()'
        Codigo();
        //segundo caso aja passagem de parametros
        Codigo(string);
        // metodo onde leva os valores(define)
        void setValor(string);
        // metodo onde pega os valores(obiter)
        string getValor();
        // retorna verdadeiro ou falso
        bool validar (string);
};

// metodo onde retona o valor obitido
inline string Codigo::getValor(){
    return valor;
};

/// A classe "Classe" recebe um número inteiro referente as categorias de imóveis.
/// "Classe" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)": com passagem de parâmetro que define a string padrão;
///     "getValor()": sem passagem de parâmetro que obtém a string armazenada;
///     "validar(int)": com passagem de parâmetro que retorna se o número passado é válido ou não.

class Classe {
    private:
        //variavel padrao caso n receba nada
        static const int DEFAULT = 1;
        //definindo a variavel que sera usada para atribuiçao de valor
        int valor;
    public:
        //primeiro metodo construtor no caso de nao aver nada 'Email()'
        Classe();
        //segundo caso aja passagem de parametros
        Classe(int);
        // metodo onde leva os valores(define)
        void setValor(int);
        // metodo onde pega os valores(obiter)
        int getValor();
        // retorna verdadeiro ou falso
        bool validar (int);
};

// metodo onde retona o valor obitido
inline int Classe::getValor(){
    return valor;
};

/// A classe "Descricao" recebe uma string referente as características dos imóveis.
/// "Descricao" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(string)" com passagem de parâmetro que define a string padrão;
///     "getValor()" sem passagem de parâmetro que obtém a string armazenada;
///     "validar(string)" com passagem de parâmetro que retorna se a string passada é válida ou não.

class Descricao {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribuiçao de valor
        string valor;
    public:
        //primeiro metodo construtor no caso de nao aver nada 'Email()'
        Descricao();
        //segundo caso aja passagem de parametros
        Descricao(string);
        // metodo onde leva os valores(define)
        void setValor(string);
        // metodo onde pega os valores(obiter)
        string getValor();
        // retorna verdadeiro ou falso
        bool validar (string);
};

// metodo onde retona o valor obitido
inline string Descricao::getValor(){
    return valor;
};

/// A classe "Endereco" recebe uma string referente endereço do imóvel.
/// "Endereco" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(string)": com passagem de parâmetro que define a string padrão;
///     "getValor()" sem passagem de parâmetro que obtém a string armazenada;
///     "validar(string)" com passagem de parâmetro que retorna se a string passada é válida ou não.

class Endereco {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribuiçao de valor
        string valor;
    public:
        //primeiro metodo construtor no caso de nao aver nada 'Email()'
        Endereco();
        //segundo caso aja passagem de parametros
        Endereco(string);
        // metodo onde leva os valores(define)
        void setValor(string);
        // metodo onde pega os valores(obiter)
        string getValor();
        // retorna verdadeiro ou falso
        bool validar (string);
};

// metodo onde retona o valor obitido
inline string Endereco::getValor(){
    return valor;
};

/// A classe "Data" recebe strings referente as datas de aluguel do imóvel.
/// "Data" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)":com passagem de parâmetro que define a string padrão;
///     "getValor()": sem passagem de parâmetro que obtém a string armazenada;
///     "validar(int)": com passagem de parâmetro que retorna se a string passada é válida ou não.

class Data {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribuiçao de valor
        string valor;
    public:
        //primeiro metodo construtor no caso de nao aver nada 'Email()'
        Data();
        //segundo caso aja passagem de parametros
        Data(string);
        // metodo onde leva os valores(define)
        void setValor(string);
        // metodo onde pega os valores(obiter)
        string getValor();
        // retorna verdadeiro ou falso
        bool validar (string);
};

// metodo onde retona o valor obitido
inline string Data::getValor(){
    return valor;
};

/// Classe de domínio "Numero" representa a quantidade de hóspedes.
/// "Numero" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)": com passagem de parâmetro que define valor;
///     "getValor()": sem passagem de parâmetro que obtém valor;
///     "validar(int)": com passagem de parâmetro que retorna se o valor passado é válido ou não.

class Numero {
    private:
        static const int DEFAULT = 0;
        int valor;
    public:
        Numero();
        Numero(int);
        void setValor(int);
        int getValor();
        bool validar (int);
};

inline int Numero::getValor(){
    return valor;
};

/// Classe de domínio "Moeda" representa o valor monetário últilizado pelo usuário.
/// "Moeda" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)": com passagem de parâmetro que define valor;
///     "getValor()": sem passagem de parâmetro que obtém valor;
///     "validar(int)": com passagem de parâmetro que retorna se o valor passado é válido ou não.

class Moeda {
    private:
        static const double DEFAULT;
        double valor;
    public:
        Moeda();
        Moeda(double);
        void setValor(double);
        double getValor();
        bool validar (double);
};

inline double Moeda::getValor(){
    return valor;
}

/// Classe de domínio "Nome" representa o nome do usuário.
/// "Nome" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)": com passagem de parâmetro que define valor;
///     "getValor()": sem passagem de parâmetro que obtém valor;
///     "validar(int)": com passagem de parâmetro que retorna se a string passada é válida ou não.

class Nome {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribuiçao de valor
        string valor;
    public:
        //primeiro metodo construtor no caso de nao aver nada 'Email()'
        Nome();
        //segundo caso aja passagem de parametros
        Nome(string);
        // metodo onde leva os valores(define)
        void setValor(string);
        // metodo onde pega os valores(obiter)
        string getValor();
        // retorna verdadeiro ou falso
        bool validar (string);
};

// metodo onde retona o valor obitido
inline string Nome::getValor(){
    return valor;
};

/// Classe de domínio "Email" representa o endereço eletrônico últilizado pelo usuário.
/// "Email" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)": com passagem de parâmetro que define valor;
///     "getValor()": sem passagem de parâmetro que obtém valor;
///     "validar(int)": com passagem de parâmetro que retorna se a string passada é válida ou não.

class Email {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribuiçao de valor
        string valor;
    public:
        //primeiro metodo construtor no caso de nao aver nada 'Email()'
        Email();
        //segundo caso aja passagem de parametros
        Email(string);
        // metodo onde leva os valores(define)
        void setValor(string);
        // metodo onde pega os valores(obiter)
        string getValor();
        // retorna verdadeiro ou falso
        bool validar (string);
};

// metodo onde retona o valor obitido
inline string Email::getValor(){
    return valor;
};

/// Classe de domínio "Senha" representa a senha de acesso últilizada pelo usuário.
/// "Senha" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)" com passagem de parâmetro que define valor;
///     "getValor()" sem passagem de parâmetro que obtém valor;
///     "validar(int)" com passagem de parâmetro que retorna se a string passada é válida ou não.

class Senha {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribuiçao de valor
        string valor;
    public:
        //primeiro metodo construtor no caso de nao aver nada 'Email()'
        Senha();
        //segundo caso aja passagem de parametros
        Senha(string);
        // metodo onde leva os valores(define)
        void setValor(string);
        // metodo onde pega os valores(obiter)
        string getValor();
        // retorna verdadeiro ou falso
        bool validar (string);
};

// metodo onde retona o valor obitido
inline string Senha::getValor(){
    return valor;
};

/// Classe de domínio "Telefone" representa o número telefônico de contato últilizado pelo usuário.
/// "Telefone" dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     "setValor(int)": com passagem de parâmetro que define valor;
///     "getValor()": sem passagem de parâmetro que obtém valor;
///     "validar(int)": com passagem de parâmetro que retorna se a string passada é válida ou não.

class Telefone {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribuiçao de valor
        string valor;
    public:
        //primeiro metodo construtor no caso de nao aver nada 'Email()'
        Telefone();
        //segundo caso aja passagem de parametros
        Telefone(string);
        // metodo onde leva os valores(define)
        void setValor(string);
        // metodo onde pega os valores(obiter)
        string getValor();
        // retorna verdadeiro ou falso
        bool validar (string);
};

// metodo onde retona o valor obitido
inline string Telefone::getValor(){
    return valor;
};

#endif // DOMINIOS_H_INCLUDED
