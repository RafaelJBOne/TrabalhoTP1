#include <string.h>
#include <stdexcept>
#include <iostream>

#include "n_dominios.h"
#include "n_interfaces.h"
#include "n_controladorasapresentacao.h"
#include "n_stubs.h"

using namespace std;

int main()
{
    // Instancia as controladoras de apresenta��o.

    CntrApresentacaoControle *cntrApresentacaoControle;
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
    IApresentacaoPessoal *cntrApresentacaoPessoal;
    IApresentacaoImoveis *cntrApresentacaoImoveis;

    cntrApresentacaoControle = new CntrApresentacaoControle();
    cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    cntrApresentacaoPessoal = new CntrApresentacaoPessoal();
    cntrApresentacaoImoveis = new CntrApresentacaoImoveis();

    // Instancia os stubs de servi�o.

    IServicoAutenticacao *stubServicoAutenticacao;
    IServicoPessoal *stubServicoPessoal;
    IServicoImoveis *stubServicoImoveis;

    stubServicoAutenticacao = new StubServicoAutenticacao();
    stubServicoPessoal = new StubServicoPessoal();
    stubServicoImoveis = new StubServicoImoveis();

    // Interliga as controladoras aos stubs.

    cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrApresentacaoAutenticacao);
    cntrApresentacaoControle->setCntrApresentacaoPessoal(cntrApresentacaoPessoal);
    cntrApresentacaoControle->setCntrApresentacaoImoveis(cntrApresentacaoImoveis);

    cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(stubServicoAutenticacao);

    cntrApresentacaoPessoal->setCntrServicoPessoal(stubServicoPessoal);
    cntrApresentacaoPessoal->setCntrServicoImoveis(stubServicoImoveis);

    cntrApresentacaoImoveis->setCntrServicoImoveis(stubServicoImoveis);

    cntrApresentacaoControle->executar();                                           // Solicita servi�o apresentacao.

    return 0;
}
