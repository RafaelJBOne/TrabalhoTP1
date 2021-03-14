/*Esta funcao verifica se a string fornecida atende o
formato especificado nos requisitos*/
#include <iostream>

using namespace std;

bool validarTelefone(string numero){
    bool accept = true;
    int zeros = 0,i = 0;

    //caso o numero de caracteres excedam o requisito
    if(numero.length() != 15){
        return false;
    }

    while(numero[i] != '\0'){
        //regista a ocorrencia de zeros
        if(numero[i] == 48){
            zeros++;
        }
        //caso esta condicional seja ativada significa que o formato "(000)-000000000" foi fornecido
        if(zeros >= 12){
            return false;
        }
        //verifica a ocorrencia dos digitos de 0 a 9
        if (numero[i] >= 48 && numero[i] <= 57){
            i++;
            continue;
        }
        // verifica a ocorrencia dos caracteres "(", ")" e "-"
        if (numero[i] == 40 || numero[i] == 41 || numero[i] == 45){
            i++;
            continue;
        }
        accept = false;
        break;
    }
    if(accept){
        return true;
    }else{
        return false;
    }
}

/*A funcao main eh apenas para testes da funcao
nao devendo por tanto integrar codigo do trabalho*/
int main(){
    string contato = "(061)-923456786";

    if(validarTelefone(contato)){
        cout << "O numero eh valido" << endl;
    }else{
        cout << "ERRO: NUMERO INVALIDO" << endl;
    }

return 0;
}
