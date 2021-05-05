#ifndef N_CONTROLADORASAPRESENTACAO_H_INCLUDED
#define N_CONTROLADORASAPRESENTACAO_H_INCLUDED

#include <conio.h>
#include <iostream>
#include <string.h>

#include "n_dominios.h"
#include "n_entidades.h"
#include "n_interfaces.h"

#define CLR_SCR system("cls");

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Adequar as controladoras de apresentação de acordo com as necessidades.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------
// Classes controladoras da camada de apresentação.

//--------------------------------------------------------------------------------------------
// Classe controladora de apresentação controle.

class CntrApresentacaoControle{
    private:
        Email email;
        IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
        IApresentacaoPessoal *cntrApresentacaoPessoal;
        IApresentacaoImoveis *cntrApresentacaoImoveis;
    public:
        void executar();
        void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
        void setCntrApresentacaoPessoal(IApresentacaoPessoal*);
        void setCntrApresentacaoImoveis(IApresentacaoImoveis*);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao *cntr){
    cntrApresentacaoAutenticacao = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoPessoal(IApresentacaoPessoal *cntr){
            cntrApresentacaoPessoal = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoImoveis(IApresentacaoImoveis *cntr){
    cntrApresentacaoImoveis = cntr;
}

//--------------------------------------------------------------------------------------------
// Classe controladora de apresentação autenticação.

class CntrApresentacaoAutenticacao:public IApresentacaoAutenticacao{
    private:
        IServicoAutenticacao *cntr;
    public:
        bool autenticar(Email*);
        void setCntrServicoAutenticacao(IServicoAutenticacao*);
};

inline void CntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao *cntr){
    this->cntr = cntr;
}

//--------------------------------------------------------------------------------------------
// Classe controladora de apresentação pessoal.

class CntrApresentacaoPessoal:public IApresentacaoPessoal{
    private:
        IServicoPessoal *cntrServicoPessoal;
        IServicoImoveis *cntrServicoImoveis;
        void consultarDadosPessoais();
    public:
        void executar(Email);
        void cadastrar();
        void setCntrServicoPessoal(IServicoPessoal*);
        void setCntrServicoImoveis(IServicoImoveis*);
};

inline void CntrApresentacaoPessoal::setCntrServicoPessoal(IServicoPessoal *cntr){
    cntrServicoPessoal = cntr;
}

inline void CntrApresentacaoPessoal::setCntrServicoImoveis(IServicoImoveis *cntr){
    cntrServicoImoveis = cntr;
}

//--------------------------------------------------------------------------------------------
// Classe controladora de apresentação produtos financeiros.

class CntrApresentacaoImoveis:public IApresentacaoImoveis{
    private:
        IServicoImoveis *cntr;
        void consultarConta();
        void cadastrarImovel();
        void descadastrarImovel();
        void consultarImovel();
        void realizarProposta();
        void listarPropostas();
    public:
        void executar();
        void executar(Email);
        void setCntrServicoImoveis(IServicoImoveis*);
};

inline void CntrApresentacaoImoveis::setCntrServicoImoveis(IServicoImoveis *cntr){
    this->cntr = cntr;
}

#endif // N_CONTROLADORASAPRESENTACAO_H_INCLUDED
