#ifndef N_DOMINIOS_H
#define N_DOMINIOS_H
#include <iostream>
#include <stdexcept>

using namespace std;

/// A classe "Codigo" representa um c�digo associado ao usu�rio.
/// "Codigo" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(string)": com passagem de par�metro que define a string padr�o;
///     "getValor()": sem passagem de par�metro que obt�m a string armazenada;
///     "validar(string)": com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

// class "Codigo" implementada por 190089911
class Codigo {
    private:
        // Vari�vel padr�o caso n�o receba nada.
        static const string DEFAULT;
        // Definindo a vari�vel que ser� usada para atribui��o de valor.
        string valor;
    public:
        // Primeiro m�todo construtor no caso de n�o haver nenhuma passagem de parametro.
        Codigo();
        // Segundo m�todo construtor no caso de haver passagem de parametro.
        Codigo(string);
        // M�todo que define os valores.
        void setValor(string);
        // M�todo que obt�m os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o par�metro passado seja v�lido.
        bool validar (string);
};

// M�todo que retona o valor obtido.
inline string Codigo::getValor(){
    return valor;
};

/// A classe "Classe" recebe um n�mero inteiro referente as categorias de im�veis.
/// "Classe" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)": com passagem de par�metro que define o int padr�o;
///     "getValor()": sem passagem de par�metro que obt�m o int armazenado;
///     "validar(int)": com passagem de par�metro que retorna se o n�mero passado � v�lido ou n�o.

// class "Classe" implementada por 190089911
class Classe {
    private:
        // Vari�vel padr�o caso n�o receba nada.
        static const int DEFAULT = 1;
        // Definindo a vari�vel que ser� usada para atribui��o de valor.
        int valor;
    public:
        // Primeiro m�todo construtor no caso de n�o haver nenhuma passagem de parametro.
        Classe();
        // Segundo m�todo construtor no caso de haver passagem de parametro.
        Classe(int);
        // M�todo que define os valores.
        void setValor(int);
        // M�todo que obt�m os valores.
        int getValor();
        // Retorna verdadeiro ou falso caso o par�metro passado seja v�lido.
        bool validar (int);
};

// M�todo que retona o valor obtido.
inline int Classe::getValor(){
    return valor;
};

/// A classe "Descricao" recebe uma string referente as caracter�sticas dos im�veis.
/// "Descricao" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(string)": com passagem de par�metro que define a string padr�o;
///     "getValor()": sem passagem de par�metro que obt�m a string armazenada;
///     "validar(string)": com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

// class "Descricao" implementada por 190090600
class Descricao {
    private:
        // Vari�vel padr�o caso n�o receba nada.
        static const string DEFAULT;
        // Definindo a vari�vel que ser� usada para atribui��o de valor.
        string valor;
    public:
        // Primeiro m�todo construtor no caso de n�o haver nenhuma passagem de parametro.
        Descricao();
        // Segundo m�todo construtor no caso de haver passagem de parametro.
        Descricao(string);
        // M�todo que define os valores.
        void setValor(string);
        // M�todo que obt�m os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o par�metro passado seja v�lido.
        bool validar (string);
};

// M�todo que retona o valor obtido.
inline string Descricao::getValor(){
    return valor;
};

/// A classe "Endereco" recebe uma string referente endere�o do im�vel.
/// "Endereco" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(string)": com passagem de par�metro que define a string padr�o;
///     "getValor()": sem passagem de par�metro que obt�m a string armazenada;
///     "validar(string)": com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

// class "Endereco" implementada por 190115777
class Endereco {
    private:
        // Vari�vel padr�o caso n�o receba nada.
        static const string DEFAULT;
        // Definindo a vari�vel que ser� usada para atribui��o de valor.
        string valor;
    public:
        // Primeiro m�todo construtor no caso de n�o haver nenhuma passagem de parametro.
        Endereco();
        // Segundo m�todo construtor no caso de haver passagem de parametro.
        Endereco(string);
        // M�todo que define os valores.
        void setValor(string);
        // M�todo que obt�m os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o par�metro passado seja v�lido.
        bool validar (string);
};

// M�todo que retona o valor obtido.
inline string Endereco::getValor(){
    return valor;
};

/// A classe "Data" recebe strings referente as datas de aluguel do im�vel.
/// "Data" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(string)":com passagem de par�metro que define a string padr�o;
///     "getValor()": sem passagem de par�metro que obt�m a string armazenada;
///     "validar(string)": com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

// class "Data" implementada por 190090600
class Data {
    private:
        // Vari�vel padr�o caso n�o receba nada.
        static const string DEFAULT;
        // Definindo a vari�vel que ser� usada para atribui��o de valor.
        string valor;
    public:
        // Primeiro m�todo construtor no caso de n�o haver nenhuma passagem de parametro.
        Data();
        // Segundo m�todo construtor no caso de haver passagem de parametro.
        Data(string);
        // M�todo que define os valores.
        void setValor(string);
        // M�todo que obt�m os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o par�metro passado seja v�lido.
        bool validar (string);
};

// M�todo que retona o valor obtido.
inline string Data::getValor(){
    return valor;
};

/// Classe de dom�nio "Numero" representa a quantidade de h�spedes.
/// "Numero" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)": com passagem de par�metro que define valor padr�o;
///     "getValor()": sem passagem de par�metro que obt�m valor armazenado;
///     "validar(int)": com passagem de par�metro que retorna se o valor passado � v�lido ou n�o.

// class "Numero" implementada por 190115777, por 190089911 e por 190090600
class Numero {
    private:
        // Vari�vel padr�o caso n�o receba nada.
        static const int DEFAULT = 0;
        // Definindo a vari�vel que ser� usada para atribui��o de valor.
        int valor;
    public:
        // Primeiro m�todo construtor no caso de n�o haver nenhuma passagem de parametro.
        Numero();
        // Segundo m�todo construtor no caso de haver passagem de parametro.
        Numero(int);
        // M�todo que define os valores.
        void setValor(int);
        // M�todo que obt�m os valores.
        int getValor();
        // Retorna verdadeiro ou falso caso o par�metro passado seja v�lido.
        bool validar (int);
};

// M�todo que retona o valor obtido.
inline int Numero::getValor(){
    return valor;
};

/// Classe de dom�nio "Moeda" representa o valor monet�rio �ltilizado pelo usu�rio.
/// "Moeda" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(double)": com passagem de par�metro que define valor padr�o;
///     "getValor()": sem passagem de par�metro que obt�m valor armazenado;
///     "validar(double)": com passagem de par�metro que retorna se o valor passado � v�lido ou n�o.

// class "Moeda" implementada por 190115777
class Moeda {
    private:
        // Vari�vel padr�o caso n�o receba nada.
        static const double DEFAULT;
        // Definindo a vari�vel que ser� usada para atribui��o de valor.
        double valor;
    public:
        // Primeiro m�todo construtor no caso de n�o haver nenhuma passagem de parametro.
        Moeda();
        // Segundo m�todo construtor no caso de haver passagem de parametro.
        Moeda(double);
        // M�todo que define os valores.
        void setValor(double);
        // M�todo que obt�m os valores.
        double getValor();
        // Retorna verdadeiro ou falso caso o par�metro passado seja v�lido.
        bool validar (double);
};

// M�todo que retona o valor obtido.
inline double Moeda::getValor(){
    return valor;
}

/// Classe de dom�nio "Nome" representa o nome do usu�rio.
/// "Nome" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)": com passagem de par�metro que define valor;
///     "getValor()": sem passagem de par�metro que obt�m valor;
///     "validar(int)": com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

// class "Nome" implementada por 190089911
class Nome {
    private:
        // Vari�vel padr�o caso n�o receba nada.
        static const string DEFAULT;
        // Definindo a vari�vel que ser� usada para atribui��o de valor.
        string valor;
    public:
        // Primeiro m�todo construtor no caso de n�o haver nenhuma passagem de parametro.
        Nome();
        // Segundo m�todo construtor no caso de haver passagem de parametro.
        Nome(string);
        // M�todo que define os valores.
        void setValor(string);
        // M�todo que obt�m os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o par�metro passado seja v�lido.
        bool validar (string);
};

// M�todo que retona o valor obtido.
inline string Nome::getValor(){
    return valor;
};

/// Classe de dom�nio "Email" representa o endere�o eletr�nico �ltilizado pelo usu�rio.
/// "Email" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)": com passagem de par�metro que define a string padr�o;
///     "getValor()": sem passagem de par�metro que obt�m a string armazenada;
///     "validar(int)": com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

// class "Email" implementada por 190115777, por 190089911 e por 190090600
class Email {
    private:
        // Vari�vel padr�o caso n�o receba nada.
        static const string DEFAULT;
        // Definindo a vari�vel que ser� usada para atribui��o de valor.
        string valor;
    public:
        // Primeiro m�todo construtor no caso de n�o haver nenhuma passagem de parametro.
        Email();
        // Segundo m�todo construtor no caso de haver passagem de parametro.
        Email(string);
        // M�todo que define os valores.
        void setValor(string);
        // M�todo que obt�m os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o par�metro passado seja v�lido.
        bool validar (string);
};

// M�todo que retona o valor obtido.
inline string Email::getValor(){
    return valor;
};

/// Classe de dom�nio "Senha" representa a senha de acesso �ltilizada pelo usu�rio.
/// "Senha" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)": com passagem de par�metro que define a string padr�o;
///     "getValor()": sem passagem de par�metro que obt�m a string armazenada;
///     "validar(int)": com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

// class "Senha" implementada por 190090600
class Senha {
    private:
        // Vari�vel padr�o caso n�o receba nada.
        static const string DEFAULT;
        // Definindo a vari�vel que ser� usada para atribui��o de valor.
        string valor;
    public:
        // Primeiro m�todo construtor no caso de n�o haver nenhuma passagem de parametro.
        Senha();
        // Segundo m�todo construtor no caso de haver passagem de parametro.
        Senha(string);
        // M�todo que define os valores.
        void setValor(string);
        // M�todo que obt�m os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o par�metro passado seja v�lido.
        bool validar (string);
};

// M�todo que retona o valor obtido.
inline string Senha::getValor(){
    return valor;
};

/// Classe de dom�nio "Telefone" representa o n�mero telef�nico de contato �ltilizado pelo usu�rio.
/// "Telefone" disp�e dos seguintes m�todos:
///     M�todos construtores sem e com passagem de par�metro;
///     "setValor(int)": com passagem de par�metro que define a string padr�o;
///     "getValor()": sem passagem de par�metro que obt�m a string armazenada;
///     "validar(int)": com passagem de par�metro que retorna se a string passada � v�lida ou n�o.

// class "Telefone" implementada por 190115777
class Telefone {
    private:
        // Vari�vel padr�o caso n�o receba nada.
        static const string DEFAULT;
        // Definindo a vari�vel que ser� usada para atribui��o de valor.
        string valor;
    public:
        // Primeiro m�todo construtor no caso de n�o haver nenhuma passagem de parametro.
        Telefone();
        // Segundo m�todo construtor no caso de haver passagem de parametro.
        Telefone(string);
        // M�todo que define os valores.
        void setValor(string);
        // M�todo que obt�m os valores.
        string getValor();
        // Retorna verdadeiro ou falso caso o par�metro passado seja v�lido.
        bool validar (string);
};

// M�todo que retona o valor obtido.
inline string Telefone::getValor(){
    return valor;
};

#endif // DOMINIOS_H_INCLUDED
