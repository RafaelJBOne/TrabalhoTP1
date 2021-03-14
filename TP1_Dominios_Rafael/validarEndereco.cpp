#include <iostream>

using namespace std;

// funcao que verifica a existencia de carcteres invalidos
bool verificaCaractere(string endereco){
    int i = 0;

    //accept sera falso se existir um caracter invalido
    bool accept = true;

    // verificacao de caracteres
    while(endereco[i] != '\0'){
        /* caso todos os carcteres da string sejam validos a variavel accept nao
        recebera false devido os comandos continue dentro de cada condicional*/

        if (endereco[i] >= 65 && endereco[i] <= 90){
            i++;
            continue;
        }
        if (endereco[i] >= 97 && endereco[i] <= 122){
            i++;
            continue;
        }
        if (endereco[i] >= 48 && endereco[i] <= 57){
            i++;
            continue;

        }
        if (endereco[i] == 46){
            i++;
            continue;
        }
        if (endereco[i] == 32){
            i++;
            continue;
        }
        accept = false;
        break;
    }

    // Sera retornado true caso nao exista um caracter invalido na string
    if(accept){
        return true;
    }else{
        // caso a string seja invalida a funcao retornara FALSE
        return false;
    }
}

bool validarEndereco(string endereco){
    int tamanho = endereco.length();
    //restricao do requisito (quantidade de caracterres)
    if(tamanho >= 5 && tamanho <= 20){
        //vetificacao sobre caracteres invalidos
        if(verificaCaractere(endereco)){
            return true;
        }else{
            return false;
        }

    }else{
        return false;
    }
}

/* A FUNCAO main EH PARA O TESTE DAS FUNCOES POR TANTO
NAO DEVERA SER INTEGRADA AO CODIGO DO TRABALHO APENAS AS
FUNCOES validarEndereco() e verificaCaractere()*/
int main(){
    string cordenada = "Conj 08 lote 14.5";

    if(validarEndereco(cordenada)){
        cout << "O endereco eh valido" << endl;
    }else{
        cout << "Erro: Caracteres ou tamanho de string invalidos" << endl;
    }

    return 0;
}
