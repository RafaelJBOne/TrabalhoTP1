// DOMINIOS.H:
#ifndef N_DOMINIOS_H
#define N_DOMINIOS_H
#include <iostream>
// #ifndef DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

class Codigo {
    private:

        //variavel padrao caso n receba nada
        const string DEFAULT = "XXXXX";
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

class Classe {
    private:

        //variavel padrao caso n receba nada
        const int DEFAULT = 1;
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
/// Classe de domínio Numero representa a quantidade de hóspedes.
/// Número dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     Método "setValor" com passagem de parâmetro que define valor;
///     Método "getValor" sem passagem de parâmetro que obtém valor;
///     Método "validar" com passagem de parâmetro que retorna se o valor passado é válido ou não.
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

class Email {
    private:

        //variavel padrao caso n receba nada
        const string DEFAULT = "nome@domínio";
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

class Nome {
    private:

        //variavel padrao caso n receba nada
        const string DEFAULT = "Johnatan. Sousa";
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

class Endereco {
    private:

        //variavel padrao caso n receba nada
        const string DEFAULT = "Conj 08 lote 14.5";
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

class Moeda {
    private:
        double DEFAULT = 10;
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

class Telefone {
    private:

        //variavel padrao caso n receba nada
        const string DEFAULT = "(123)-123456789";
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

class Descricao {
    private:

        //variavel padrao caso n receba nada
        const string DEFAULT = "123456";
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

class Data {
    private:

        //variavel padrao caso n receba nada
        const string DEFAULT = "DD-MM-AA";
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


class Senha {
    private:

        //variavel padrao caso n receba nada
        const string DEFAULT = "XXXXXX";
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

#endif // DOMINIOS_H_INCLUDED
