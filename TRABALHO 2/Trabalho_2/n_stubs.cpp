#include "n_stubs.h"

// Adequar os valores.

const string StubServicoAutenticacao::INVALIDO = "12345";
const string StubServicoPessoal::INVALIDO = "12345";
const string StubServicoImoveis::INVALIDO = "12345";

//--------------------------------------------------------------------------------------------
// Implementações dos métodos dos stubs.

bool StubServicoAutenticacao::autenticar(Email email, Senha senha){
    if(email.getValor().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoPessoal::cadastrarUsuario(Usuario usuario){
    if(usuario.getemail().getValor().compare(INVALIDO) == 0)
        return false;
    return true;
}

/*bool StubServico::cadastrarConta(Conta conta){
    if(conta.getNumero().getValor().compare(INVALIDO) == 0)
        return false;
    return true;
}*/

/*bool StubServicoImoveis::consultarConta(Conta *conta){
    if(conta->getNumero().getValor().compare(INVALIDO) == 0)
        return false;

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Implementar código que atribui valores ao objeto identificado por conta.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    return true;
}*/

bool StubServicoImoveis::cadastrarImovel(Imovel imovel){
    if(imovel.getcodigo().getValor().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoImoveis::descadastrarImovel(Codigo codigo){
    if(codigo.getValor().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoImoveis::realizarProposta(Proposta proposta){
    if(proposta.getcodigo().getValor().compare(INVALIDO) == 0)
        return false;
    return true;
}

bool StubServicoImoveis::recuperarProposta(Proposta *proposta){
    if(proposta->getcodigo().getValor().compare(INVALIDO) == 0)
        return false;

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Implementar código que atribui valores ao objeto identificado por aplicacao.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------

    return true;
}
