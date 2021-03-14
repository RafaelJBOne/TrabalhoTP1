#include <iostream>
using namespace std;

int main(){
   //avaliacao de nomes
   string nomes = "Johnatan Sousa RaM.Os", variavel_letra = "a";
   //variavel contadora
   int i = 0;
   //contador para o segundo while
   int contador_primeira = 0;
   //laco para percorer o nome
   while(nomes[i] != '\0'){
       //laco para ver se a primeira letra eh maisuscula
       while(contador_primeira == 0)
            //if para conferir se a primeira letra eh maiuscula
            if (nomes[0] >= 65 && nomes[0] <= 90){
                cout << "Primeira letra com sucesso" << endl;
                //implementar o contador para que o laco n inicie novamente
                contador_primeira++;
            }else{
                //caso a primrira letra n for maiuscula printar um erro
                cout << "Primeira letra com erro" << endl;
                contador_primeira++;
            }
        // if as letras sao maisuculas
        if (nomes[i] >= 65 && nomes[i] <= 90){
            cout << "letra maiuscula com sucesso" << endl;
            i++;
            continue;
        }
        // if as letras sao minusculas
        if (nomes[i] >= 97 && nomes[i] <= 122){
            cout << "letra minuscula com sucesso" << endl;
            i++;
            continue;
        }
        // if tem ponto
        if (nomes[i] == 46){
            // if tiver ele pega a posicao anterior e confere se eh uma letra
            if(nomes[i-1] >= 65 && nomes[i] <= 90 || nomes[i-1] >= 97 && nomes[i] <= 122){
                i++;
                cout << "ponto sucesso" << endl;
                //if for uma letra ele vai no sucessor e confere se a letra eh maiuscula
                if(nomes[i+1] >= 65 && nomes[i] <= 90){
                    cout << "Primeira letra do termo do ponto sucesso" << endl;
                }
                //confere se depois do ponto tem um bakspace
                if(nomes[i+1] == '\0'){
                    cout << "Ponto final frase" << endl;
                // se n for nada a primrira letra do termo apos o ponto esta com erro
                }else{
                    cout << "Primeira letra do termo do ponto erro" << endl;
                }
                continue;
            //se nao for uma letra contem erro
            }else{
                i++;
                cout << "ponto erro" << endl;
                continue;
            }
        }
        // confere se tem um espaco na string nome
        if (nomes[i] == 32){
            //se encontrar espaco ele for seguido de outro espaco ou um ponto ele printa um erro
            if (nomes[i+1] == 32 || nomes[i+1] == 46 ){
                i++;
                cout << "espaco erro" << endl;
                continue;
            //se nao encontrar um erro ele printa um sucesso
            }else{
                cout << "espaco sucesso" << endl;
                //confere se depois do espaco a proxima letra eh maiuscula
                if (nomes[i+1] >= 65 && nomes[i+1] <= 90){
                    cout << "Primeira letra do termo sucesso" << endl;
                // se nao for informa um erro
                }else{
                    cout << "Primeira letra do termo erro" << endl;
                }
                i++;
                continue;
            }
        //se nao tiver os caracteres validos ele em alguma parte ele avisa
        }else{
            cout << "Nome com parametro errado" << endl;
            i++;
            continue;
        }
    }
    // verifica se o tamanho do nome esta entre 5 e 25 e retorna se estiver dentro do parametro ou nao
    if(i >= 5 && i <=25){
            cout<< "tamanho esta dentro" <<endl;
        }else{
            cout<< "tamanho esta fora" <<endl;
        }

    return 0;
}
