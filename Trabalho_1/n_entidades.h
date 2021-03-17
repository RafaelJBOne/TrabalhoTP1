// ENTIDADES.H
#ifndef N_ENTIDADES_H_INCLUDED
#define N_ENTIDADES_H_INCLUDED
#include "n_dominios.h"

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

inline Codigo Imovel Entidade::getcodigo() const{
    return codigo;
}

inline void Imovel::setclasse(const Classe &classe){
    this->classe = classe;
}

inline Classe Imovel::getclasse() const{
    return nomeclasse;
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

inline Endereco Entidade::getendereco() const{
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

inline Codigo Proposta Entidade::getcodigo() const{
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

inline Nome Usuario Entidade::getnome() const{
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
