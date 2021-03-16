// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.
#include <iostream>
#include "n_dominios.h"
//#include "entidades.h"
#include "n_testes.h"

using namespace std;


int main(){
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
    TUCodigo testeC;

    switch(testeC.executar()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

    return 0;
}
