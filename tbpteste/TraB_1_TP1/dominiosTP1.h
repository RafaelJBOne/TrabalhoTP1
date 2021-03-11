// DOMINIOS.H:
#ifndef DOMINIOSTP1_H
#define DOMINIOSTP1_H
#include <iostream>
// #ifndef DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

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

inline void Numero::setValor(int valor){
    this->valor = valor;
};

inline int Numero::getValor(){
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
