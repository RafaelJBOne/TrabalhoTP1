// DOMINIOS.H:
#ifndef N_DOMINIOS_H
#define N_DOMINIOS_H
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

/// A classe "Codigo" representa um c�digo associado ao usu�rio.
/// "Codigo" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)" com passagem de par�metro que define a string padr�o;
///     "getValor()" sem passagem de par�metro que obt�m a string armazenada;
///     "validar(int)" com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

class Codigo {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribui�ao de valor
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

/// A classe "Classe" recebe um n�mero inteiro referente as categorias de im�veis.
/// "Classe" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)": com passagem de par�metro que define a string padr�o;
///     "getValor()": sem passagem de par�metro que obt�m a string armazenada;
///     "validar(int)": com passagem de par�metro que retorna se o n�mero passado � v�lido ou n�o.

class Classe {
    private:
        //variavel padrao caso n receba nada
        static const int DEFAULT = 1;
        //definindo a variavel que sera usada para atribui�ao de valor
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

/// A classe "Descricao" recebe uma string referente as caracter�sticas dos im�veis.
/// "Descricao" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(string)" com passagem de par�metro que define a string padr�o;
///     "getValor()" sem passagem de par�metro que obt�m a string armazenada;
///     "validar(string)" com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

class Descricao {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribui�ao de valor
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

/// A classe "Endereco" recebe uma string referente endere�o do im�vel.
/// "Endereco" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(string)": com passagem de par�metro que define a string padr�o;
///     "getValor()" sem passagem de par�metro que obt�m a string armazenada;
///     "validar(string)" com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

class Endereco {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribui�ao de valor
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

/// A classe "Data" recebe strings referente as datas de aluguel do im�vel.
/// "Data" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)":com passagem de par�metro que define a string padr�o;
///     "getValor()": sem passagem de par�metro que obt�m a string armazenada;
///     "validar(int)": com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

class Data {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribui�ao de valor
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

/// Classe de dom�nio "Numero" representa a quantidade de h�spedes.
/// "Numero" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)": com passagem de par�metro que define valor;
///     "getValor()": sem passagem de par�metro que obt�m valor;
///     "validar(int)": com passagem de par�metro que retorna se o valor passado � v�lido ou n�o.

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

/// Classe de dom�nio "Moeda" representa o valor monet�rio �ltilizado pelo usu�rio.
/// "Moeda" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)": com passagem de par�metro que define valor;
///     "getValor()": sem passagem de par�metro que obt�m valor;
///     "validar(int)": com passagem de par�metro que retorna se o valor passado � v�lido ou n�o.

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

/// Classe de dom�nio "Nome" representa o nome do usu�rio.
/// "Nome" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)": com passagem de par�metro que define valor;
///     "getValor()": sem passagem de par�metro que obt�m valor;
///     "validar(int)": com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

class Nome {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribui�ao de valor
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

/// Classe de dom�nio "Email" representa o endere�o eletr�nico �ltilizado pelo usu�rio.
/// "Email" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)": com passagem de par�metro que define valor;
///     "getValor()": sem passagem de par�metro que obt�m valor;
///     "validar(int)": com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

class Email {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribui�ao de valor
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

/// Classe de dom�nio "Senha" representa a senha de acesso �ltilizada pelo usu�rio.
/// "Senha" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)" com passagem de par�metro que define valor;
///     "getValor()" sem passagem de par�metro que obt�m valor;
///     "validar(int)" com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

class Senha {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribui�ao de valor
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

/// Classe de dom�nio "Telefone" representa o n�mero telef�nico de contato �ltilizado pelo usu�rio.
/// "Telefone" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)": com passagem de par�metro que define valor;
///     "getValor()": sem passagem de par�metro que obt�m valor;
///     "validar(int)": com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

class Telefone {
    private:
        //variavel padrao caso n receba nada
        static const string DEFAULT;
        //definindo a variavel que sera usada para atribui�ao de valor
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
