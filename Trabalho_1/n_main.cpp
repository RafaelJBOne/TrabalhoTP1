// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.
#include <iostream>
#include "n_dominios.h"
//#include "entidades.h"
#include "n_testes.h"

using namespace std;

int main(){

    TUCodigo testeA;

    switch(testeA.executar()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

    TUClasse testeB;

    switch(testeB.executar()){
        case TUClasse::SUCESSO: cout << "SUCESSO - CLASSE" << endl;
                                break;
        case TUClasse::FALHA  : cout << "FALHA   - CLASSE" << endl;
                                break;
    }

    TUDescricao testeC;

    switch(testeC.executar()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA   - DESCRICAO" << endl;
                                break;
    }

    TUEndereco testeD;

    switch(testeD.executar()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO" << endl;
                                break;
        case TUEndereco::FALHA  : cout << "FALHA   - ENDERECO" << endl;
                                break;
    }

    TUData testeE;

    switch(testeE.executar()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - DATA" << endl;
                                break;
    }

    TUNumero testeF;

    switch(testeF.executar()){
        case TUNumero::SUCESSO: cout << "SUCESSO - NUMERO" << endl;
                                break;
        case TUNumero::FALHA  : cout << "FALHA   - NUMERO" << endl;
                                break;
    }

    TUMoeda testeG;

    switch(testeG.executar()){
        case TUMoeda::SUCESSO: cout << "SUCESSO - MOEDA" << endl;
                                break;
        case TUMoeda::FALHA  : cout << "FALHA   - MOEDA" << endl;
                                break;
    }

    TUNome testeH;

    switch(testeH.executar()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - NOME" << endl;
                                break;
    }

    TUEmail testeI;

    switch(testeI.executar()){
        case TUNumero::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TUNumero::FALHA  : cout << "FALHA   - EMAIL" << endl;
                                break;
    }
    //cout << testeA.FALHA; print do c++

    TUSenha testeJ;

    switch(testeJ.executar()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }

    TUTelefone testeK;

    switch(testeK.executar()){
        case TUTelefone::SUCESSO: cout << "SUCESSO - TELEFONE" << endl;
                                break;
        case TUTelefone::FALHA  : cout << "FALHA   - TELEFONE" << endl;
                                break;
    }

    TuImovel testeL;

    switch(testeL.executar()){
        case TUImovel::SUCESSO: cout << "SUCESSO - IMOVEL" << endl;
                                break;
        case TUImovel::FALHA  : cout << "FALHA   - IMOVEL" << endl;
                                break;
    }

    return 0;
}
