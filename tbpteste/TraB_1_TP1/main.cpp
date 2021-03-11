// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.
#include <iostream>
#include "dominiosTP1.h"
//#include "entidades.h"
#include "testesTP1.h"

using namespace std;


int main(){
    TUNumero testeA;

    switch(testeA.executar()){
        case TUNumero::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUNumero::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }
    //cout << testeA.FALHA; print do c++

    return 0;
}
