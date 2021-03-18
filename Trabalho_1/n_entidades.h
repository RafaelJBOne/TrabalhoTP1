// ENTIDADES.H
#ifndef N_ENTIDADES_H_INCLUDED
#define N_ENTIDADES_H_INCLUDED
#include "n_dominios.h"

/// Classe de entidade "Imovel" representa o imóvel anunciado.
/// "Imovel" dispõe dos seguintes métodos:
///***********************************************************************************************
///     "setcodigo(const Codigo&)": com passagem de parâmetro que define o código do imóvel;
///     "getcodigo()": sem passagem de parâmetro que apresenta o código armazenado;
///***********************************************************************************************
///     "setclasse(const Classe&)": com passagem de parâmetro que define a categoria do imóvel;
///     "getclasse()": sem passagem de parâmetro que apresenta o valor armazenado;
///***********************************************************************************************
///     "setdescricao(const Descricao&)":com passagem de parâmetro que define define a descricao padrao;
///     "getdescricao()": sem passagem de parâmetro que apresenta a descricao armazenada;
///***********************************************************************************************
///     "setendereco(const Endereco&)": com passagem de parâmetro que define um endereco padrao;
///     "getendereco()": sem passagem de parâmetro que apresenta o endereco armazenado;
///***********************************************************************************************
///     "setedata_inicial(const Data&)": com passagem de parâmetro que define a data inicial do aluguel;
///     "getdata_inicial()": sem passagem de parâmetro que apresenta apresenta a string armazenada;
///***********************************************************************************************
///     "setedata_final(const Data&)": com passagem de parâmetro que define a data final do aluguel;
///     "getdata_final()": sem passagem de parâmetro apresenta apresenta a string armazenada;
///***********************************************************************************************
///     "sethospedes(const Numero&)": com passagem de parâmetro que define a quantidade de hospedes;
///     "gethospedes()": sem passagem de parâmetro apresenta apresenta o valor armazenado;
///***********************************************************************************************
///     "setvalor(const Moeda&)": com passagem de parâmetro que define o valor do imóvel;
///     "getvalor()": sem passagem de parâmetro apresenta o valor armazenado;
///***********************************************************************************************

class Imovel {

    private:
        // Declarar cada atributo da classe.

        /*Dominio nomeAtributo;*/

        Codigo codigo;
        Classe classe;
        Descricao descricao;
        Endereco endereco;
        Data data_inicial;
        Data data_final;
        Numero hospedes;
        Moeda valor;
    public:
        // Declarar métodos set e get para cada atributo.

        /*void setnomeAtributo(const Dominio&);
        Dominio getnomeAtributo() const;*/

        void setcodigo(const Codigo&);
        Codigo getcodigo() const;

        void setclasse(const Classe&);
        Classe getclasse() const;

        void setdescricao(const Descricao&);
        Descricao getdescricao() const;

        void setendereco(const Endereco&);
        Endereco getendereco() const;

        void setdata_inicial(const Data&);
        Data getdata_inicial() const;

        void setdata_final(const Data&);
        Data getdata_final() const;

        void sethospedes(const Numero&);
        Numero gethospedes() const;

        void setvalor(const Moeda&);
        Moeda getvalor() const;
};

// Implementar métodos set e get.

/*inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}*/

inline void Imovel::setcodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline Codigo Imovel::getcodigo() const{
    return codigo;
}

inline void Imovel::setclasse(const Classe &classe){
    this->classe = classe;
}

inline Classe Imovel::getclasse() const{
    return classe;
}

inline void Imovel::setdescricao(const Descricao &descricao){
    this->descricao = descricao;
}

inline Descricao Imovel::getdescricao() const{
    return descricao;
}

inline void Imovel::setendereco(const Endereco &endereco){
    this->endereco = endereco;
}

inline Endereco Imovel::getendereco() const{
    return endereco;
}

inline void Imovel::setdata_inicial(const Data &data_inicial){
    this->data_inicial = data_inicial;
}

inline Data Imovel::getdata_inicial() const{
    return data_inicial;
}

inline void Imovel::setdata_final(const Data &data_final){
    this->data_final = data_final;
}

inline Data Imovel::getdata_final() const{
    return data_final;
}

inline void Imovel::sethospedes(const Numero &hospedes){
    this->hospedes = hospedes;
}

inline Numero Imovel::gethospedes() const{
    return hospedes;
}

inline void Imovel::setvalor(const Moeda &valor){
    this->valor = valor;
}

inline Moeda Imovel::getvalor() const{
    return valor;
}

/// Classe de entidade "Proposta" representa a proposta de aluguel.
/// "Proposta" dispõe dos seguintes métodos:

///     "setcodigo(const Codigo&)": com passagem de parâmetro que define o código do imóvel;
///     "getcodigo()": sem passagem de parâmetro que obtém valor apresenta o código armazenado;
///***********************************************************************************************
///     "setedata_inicial(const Data&)": com passagem de parâmetro que define a data inicial do aluguel;
///     "getdata_inicial()": sem passagem de parâmetro que obtém valor apresenta apresenta a string armazenada;
///***********************************************************************************************
///     "setedata_final(const Data&)": com passagem de parâmetro que define a data final do aluguel;
///     "getdata_final()": sem passagem de parâmetro que obtém valor apresenta apresenta a string armazenada;
///***********************************************************************************************
///     "sethospedes(const Numero&)": com passagem de parâmetro que define a quantidade de hospedes;
///     "gethospedes()": sem passagem de parâmetro que obtém valor apresenta apresenta o valor armazenado;
///***********************************************************************************************
///     "setvalor(const Moeda&)": com passagem de parâmetro que define o valor do imóvel;
///     "getvalor()": sem passagem de parâmetro apresenta o valor armazenado;
///***********************************************************************************************

class Proposta {

    private:
            // Declarar cada atributo da classe.

            /*Dominio nomeAtributo;*/

            Codigo codigo;
            Data data_inicial;
            Data data_final;
            Numero hospedes;
            Moeda valor;
    public:
            // Declarar métodos set e get para cada atributo.

            /*void setnomeAtributo(const Dominio&);
            Dominio getnomeAtributo() const;*/

            void setcodigo(const Codigo&);
            Codigo getcodigo() const;

            void setdata_inicial(const Data&);
            Data getdata_inicial() const;

            void setdata_final(const Data&);
            Data getdata_final() const;

            void sethospedes(const Numero&);
            Numero gethospedes() const;

            void setvalor(const Moeda&);
            Moeda getvalor() const;
};

// Implementar métodos set e get.

/*inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}*/

inline void Proposta::setcodigo(const Codigo &codigo){
    this->codigo = codigo;
}

inline Codigo Proposta::getcodigo() const{
    return codigo;
}

inline void Proposta::setdata_inicial(const Data &data_inicial){
    this->data_inicial = data_inicial;
}

inline Data Proposta::getdata_inicial() const{
    return data_inicial;
}

inline void Proposta::setdata_final(const Data &data_final){
    this->data_final = data_final;
}

inline Data Proposta::getdata_final() const{
    return data_final;
}

inline void Proposta::sethospedes(const Numero &hospedes){
    this->hospedes = hospedes;
}

inline Numero Proposta::gethospedes() const{
    return hospedes;
}

inline void Proposta::setvalor(const Moeda &valor){
    this->valor = valor;
}

inline Moeda Proposta::getvalor() const{
    return valor;
}

/// Classe de entidade "Usuario" representa o cadastro de usuário.
/// "Usuario" dispõe dos seguintes métodos:

///     "setnome(const Nome&)": com passagem de parâmetro que armazena o nome do usuário;
///     "getnome()": sem passagem de parâmetro apresenta a string armazenada;
///***********************************************************************************************
///     "setemail(const Email&)": com passagem de parâmetro que armazena o endereço eletrônico do usuário;
///     "getnome()": sem passagem de parâmetro apresenta a string armazenada;
///***********************************************************************************************
///     "setsenha(const Senha&)": com passagem de parâmetro que armazena o senha de acesso do usuário;
///     "getsenha()": sem passagem de parâmetro apresenta a string armazenada;
///***********************************************************************************************
///     "settelefone(const Telefone&)": com passagem de parâmetro que armazena o telefone de contato do usuário;
///     "getsenha()": sem passagem de parâmetro apresenta a string armazenada;
///***********************************************************************************************

class Usuario {

    private:
            // Declarar cada atributo da classe.

            /*Dominio nomeAtributo;*/

            Nome nome;
            Email email;
            Senha senha;
            Telefone telefone;
    public:
            // Declarar métodos set e get para cada atributo.

            /*void setnomeAtributo(const Dominio&);
            Dominio getnomeAtributo() const;*/

            void setnome(const Nome&);
            Nome getnome() const;

            void setemail(const Email&);
            Email getemail() const;

            void setsenha(const Senha&);
            Senha getsenha() const;

            void settelefone(const Telefone&);
            Telefone gettelefone() const;
};

// Implementar métodos set e get.

/*inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}*/

inline void Usuario::setnome(const Nome &nome){
    this->nome = nome;
}

inline Nome Usuario::getnome() const{
    return nome;
}

inline void Usuario::setemail(const Email &email){
    this->email = email;
}

inline Email Usuario::getemail() const{
    return email;
}

inline void Usuario::setsenha(const Senha &senha){
    this->senha = senha;
}

inline Senha Usuario::getsenha() const{
    return senha;
}

inline void Usuario::settelefone(const Telefone &telefone){
    this->telefone = telefone;
}

inline Telefone Usuario::gettelefone() const{
    return telefone;
}

#endif // ENTIDADES_H_INCLUDED
