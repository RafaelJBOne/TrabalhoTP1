// DOMINIOS.H:
#ifndef N_DOMINIOS_H
#define N_DOMINIOS_H
#include <iostream>
// #ifndef DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;
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

/*
class Codigo {
    private:
        static const int DEFAULT = 0;
        int valor;
    public:
        Codigo();
        Codigo(int);
        void setValor(int);
        int getValor();
        bool validar (int);
};

inline void Codigo::setValor(int valor){
    this->valor = valor;
};

inline int Codigo::getValor(){
    return valor;
};

class Classe {
    private:
        static const int DEFAULT = 0;
        int valor;
    public:
        Classe();
        Classe(int);
        void setValor(int);
        int getValor();
        bool validar (int);
};

inline void Classe::setValor(int valor){
    this->valor = valor;
};

inline int Classe::getValor(){
    return valor;
};

class Descricao {
    private:
        static const int DEFAULT = 0;
        int valor;
    public:
        Descricao();
        Descricao(int);
        void setValor(int);
        int getValor();
        bool validar (int);
};

inline void Descricao::setValor(int valor){
    this->valor = valor;
};

inline int Descricao::getValor(){
    return valor;
};

class Endereco {
    private:
        static const int DEFAULT = 0;
        int valor;
    public:
        Endereco();
        Endereco(int);
        void setValor(int);
        int getValor();
        bool validar (int);
};

inline void Endereco::setValor(int valor){
    this->valor = valor;
};

inline int Endereco::getValor(){
    return valor;
};

class Data {
    private:
        static const int DEFAULT = 0;
        int valor;
    public:
        Data();
        Data(int);
        void setValor(int);
        int getValor();
        bool validar (int);
};

inline void Data::setValor(int valor){
    this->valor = valor;
};

inline int Data::getValor(){
    return valor;
};

class Moeda {
    private:
        static const int DEFAULT = 0;
        int valor;
    public:
        Moeda();
        Moeda(int);
        void setValor(int);
        int getValor();
        bool validar (int);
};

inline void Moeda::setValor(int valor){
    this->valor = valor;
};

inline int Moeda::getValor(){
    return valor;
};

class Nome {
    private:
        static const int DEFAULT = 0;
        int valor;
    public:
        Nome();
        Nome(int);
        void setValor(int);
        int getValor();
        bool validar (int);
};

inline void Nome::setValor(int valor){
    this->valor = valor;
};

inline int Nome::getValor(){
    return valor;
};

class Email {
    private:
        static const int DEFAULT = 0;
        int valor;
    public:
        Email();
        Email(int);
        void setValor(int);
        int getValor();
        bool validar (int);
};

inline void Email::setValor(int valor){
    this->valor = valor;
};

inline int Email::getValor(){
    return valor;
};

class Senha {
    private:
        static const int DEFAULT = 0;
        int valor;
    public:
        Senha();
        Senha(int);
        void setValor(int);
        int getValor();
        bool validar (int);
};

inline void Senha::setValor(int valor){
    this->valor = valor;
};

inline int Senha::getValor(){
    return valor;
};

class Telefone {
    private:
        static const int DEFAULT = 0;
        int valor;
    public:
        Telefone();
        Telefone(int);
        void setValor(int);
        int getValor();
        bool validar (int);
};

inline void Telefone::setValor(int valor){
    this->valor = valor;
};

inline int Telefone::getValor(){
    return valor;
};

*/
#endif // DOMINIOS_H_INCLUDED
