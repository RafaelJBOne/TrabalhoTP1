#ifndef N_STUBS_H_INCLUDED
#define N_STUBS_H_INCLUDED

#include <string>
#include "n_dominios.h"
#include "n_interfaces.h"

using namespace std;

//--------------------------------------------------------------------------------------------
// Classe stub do serviço autenticação.

class StubServicoAutenticacao:public IServicoAutenticacao {
    private:
        static const string INVALIDO;
    public:
        bool autenticar(Email, Senha);
};

//--------------------------------------------------------------------------------------------
// Classe stub do serviço pessoal.

class StubServicoPessoal:public IServicoPessoal {
    private:
        static const string INVALIDO;
    public:
        bool cadastrarUsuario(Usuario);
        bool alterar(Usuario);

};

//--------------------------------------------------------------------------------------------
// Classe stub do serviço produtos financeiros.

class StubServicoImoveis:public IServicoImoveis {
    private:
        static const string INVALIDO;
    public:
        bool cadastrarImovel(Codigo);
        bool descadastrarImovel(Codigo);
        bool editarDadosDeImovel(Codigo);
        bool realizarProposta(Proposta);
        bool recuperarProposta(Proposta*);                        // Adaptar assinatura.
};

#endif // N_STUBS_H_INCLUDED
