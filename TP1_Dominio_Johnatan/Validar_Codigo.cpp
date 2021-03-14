#include <iostream>
using namespace std;


int main()
{
   //validacao de parametros de codigo
   string nome_codigo = "AAAAA", variavel_letra = "a";
   int i = 0;
   //laco para percorer o nome
   while(nome_codigo[i] != '\0'){
        //conferindo se na posicao do iesimo eh letra maiuscula
       if (nome_codigo[i] >= 65 && nome_codigo[i] <= 90){
            cout << "letra com sucesso" << endl;
            i++;
            continue;
        }
        //conferindo se na posicao do iesimo eh algum numero
        if (nome_codigo[i] >= 48 && nome_codigo[i] <= 57){
            cout << "numero com sucesso" << endl;
            i++;
            continue;
        }
        //conferindo se ah um numero zero
        if(nome_codigo[i] == 48){
            //conferindo se no proximo caractere ah um numero zero
            if(nome_codigo[i+1] == 48){
                //conferindo se no proximo caractere ah um numero zero
                if(nome_codigo[i+1] == 48){
                    //conferindo se no proximo caractere ah um numero zero
                    if(nome_codigo[i+1] == 48){
                        //conferindo se no proximo caractere ah um numero zero
                        if(nome_codigo[i+1] == 48){
                            //ouver 5 numeros zeros seguidos ele informa o formato n permitido
                            cout << "numero 00000 nao permitido" << endl;
                            i++;
                            continue;

                        }
                        i++;
                        continue;
                    }
                    i++;
                    continue;
                }
                i++;
                continue;
            }
            i++;
            continue;
        //caso nao seja nenhuma caractere valido eh emitido que ah um valor incorreto
        }else{
            cout << "valor incorreto" <<endl;
            i++;
            continue;
        }
   }
   //pega o valor de i e verifica se ele eh menor que 1 e maior que 5
   if(i <= 0 || i >= 5){
    cout << "nao exedeu o numero de caracteres" <<endl;
   }else{
       cout << "exedeu o numero de caracteres" <<endl;
   }
    return 0;
}
