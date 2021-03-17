// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.
#include <iostream>
#include "n_dominios.h"
//#include "entidades.h"
#include "n_testes.h"

using namespace std;


int main(){

    TUCodigo testeC;

    switch(testeC.executar()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }


     TUClasse testeE;

    switch(testeE.executar()){
        case TUClasse::SUCESSO: cout << "SUCESSO - CLASSE" << endl;
                                break;
        case TUClasse::FALHA  : cout << "FALHA   - CLASSE" << endl;
                                break;
    }

    TUEndereco testeF;

    switch(testeF.executar()){
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO" << endl;
                                break;
        case TUEndereco::FALHA  : cout << "FALHA   - ENDERECO" << endl;
                                break;
    }

    TUNumero testeA;

    switch(testeA.executar()){
        case TUNumero::SUCESSO: cout << "SUCESSO - NUMERO" << endl;
                                break;
        case TUNumero::FALHA  : cout << "FALHA   - NUMERO" << endl;
                                break;
    }

    TUEmail testeB;

    switch(testeB.executar()){
        case TUNumero::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
                                break;
        case TUNumero::FALHA  : cout << "FALHA   - EMAIL" << endl;
                                break;
    }
    //cout << testeA.FALHA; print do c++


    TUNome testeD;

    switch(testeD.executar()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA   - NOME" << endl;
                                break;
    }

    TUMoeda testeG;

    switch(testeG.executar()){
        case TUMoeda::SUCESSO: cout << "SUCESSO - MOEDA" << endl;
                                break;
        case TUMoeda::FALHA  : cout << "FALHA   - MOEDA" << endl;
                                break;
    }

    TUTelefone testeH;

    switch(testeH.executar()){
        case TUTelefone::SUCESSO: cout << "SUCESSO - TELEFONE" << endl;
                                break;
        case TUTelefone::FALHA  : cout << "FALHA   - TELEFONE" << endl;
                                break;
    }

    TUDescricao testeI;

    switch(testeI.executar()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA   - DESCRICAO" << endl;
                                break;
    }

    TUData testeJ;

    switch(testeJ.executar()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - DATA" << endl;
                                break;
    }

    TUSenha testeK;

    switch(testeK.executar()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }

    return 0;
}
