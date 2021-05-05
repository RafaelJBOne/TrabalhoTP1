#ifndef N_INTERFACES_H_INCLUDED
#define N_INTERFACES_H_INCLUDED

#include "n_dominios.h"
#include "n_entidades.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Adequar as declarações das interfaces de acordo com as necessidades.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

// Forward declarations.

class IServicoAutenticacao;
class IServicoPessoal;
class IServicoImoveis;

//--------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de apresentação.

class IApresentacaoAutenticacao {
    public:
        virtual bool autenticar(Email*) = 0;
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};

class IApresentacaoPessoal{
    public:
        virtual void executar(Email) = 0;
        virtual void cadastrar() = 0;
        virtual void setCntrServicoPessoal(IServicoPessoal*) = 0;
        virtual void setCntrServicoImoveis(IServicoImoveis*) = 0;
        virtual ~IApresentacaoPessoal(){}
};

class IApresentacaoImoveis{
    public:
        virtual void executar() = 0;
        virtual void executar(Email) = 0;
        virtual void setCntrServicoImoveis(IServicoImoveis*) = 0;
        virtual ~IApresentacaoImoveis(){}
};

//--------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de serviço.

class IServicoAutenticacao {
    public:
        virtual bool autenticar(Email, Senha) = 0;
        virtual ~IServicoAutenticacao(){}
};

class IServicoPessoal{
public:
        virtual bool cadastrarUsuario(Usuario) = 0;
        virtual bool alterar(Usuario) = 0;
        virtual ~IServicoPessoal(){}
};

class IServicoImoveis{
public:
        virtual bool cadastrarImoveis(Codigo) = 0;
        virtual bool descadastrarImoveis(Codigo) = 0;
        virtual bool editarDadosDeImovel(Codigo) = 0;
        virtual ~IServicoImoveis(){}
};

#endif // N_INTERFACES_H_INCLUDED
