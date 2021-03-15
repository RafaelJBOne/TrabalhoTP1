// Classe de dom�nio "Senha"
/*
Formato:
Formato XXXXXX
Cada X � letra (A-Z ou a-z) ou d�gito (0 � 9).
N�o existe caracter repetido.
Existe pelo menos uma letra mai�scula, uma letra min�scula e um d�gito.
*/

#include <iostream>

using namespace std;

int main()
{
    string valor = "ABabCD";
    int contador = 0;
    // Se tem mais de 6 caracteres.
    if (valor[6]){
        cout << "Formato inv�lido. a" << endl;
    }else{
        // Enquanto existir caractere.
        while (valor[contador] != '\0'){
            contador ++;
        }
        // Subtrai o �ltimo contador somado.
        contador--;
        // Se existir menos de 6 caracteres.
        if (contador < 5){
            cout << "Formato inv�lido. b" << endl;
        }else{
            int posicao = 0;
            int valor_do_caractere = 0;
            int posicao_2 = 0;
            // Cria vetor para guardar valores de caracteres j� usados.
            int usados[5];
            // Enquanto existir caractere.
            while (valor[posicao] != '\0'){
                // O valor do caractere � atribu�do.
                valor_do_caractere = valor[posicao];
                // Se o valor do caractere est� entre 'A' a 'Z'.
                if (valor_do_caractere >= 65 && valor_do_caractere <= 90){
                    // Para cada posi��o do vetor "usados".
                    for (posicao_2 = 0; posicao_2 < 6; posicao_2++){
                        // Se existir valor de caractere.
                        if (usados[posicao_2] != '\0'){
                            // Se o valor do caractere lido j� foi usado.
                            if (valor_do_caractere == usados[posicao_2]){
                                cout << "Formato inv�lido. c" << endl;
                            }
                        }
                    }
                    // Vetor "usados" recebe o valor do caractere.
                    usados[posicao] = valor_do_caractere;
                    posicao++;
                    // Interrompe a execu��o e passa para a pr�xima itera��o do la�o.
                    continue;
                }
                // Se o valor do caractere esta entre 'a' a 'z'.
                if (valor_do_caractere >= 97 && valor_do_caractere <= 122){
                    // Para cada posi��o do vetor "usados".
                    for (posicao_2 = 0; posicao_2 < 6; posicao_2++){
                        // Se existir valor de caractere.
                        if (usados[posicao_2] != '\0'){
                            // Se o valor do caractere lido j� foi usado.
                            if (valor_do_caractere == usados[posicao_2]){
                                cout << "Formato inv�lido. d" << endl;
                            }
                        }
                    }
                    // Vetor "usados" recebe o valor do caractere.
                    usados[posicao] = valor_do_caractere;
                    posicao++;
                    continue;
                }
                // Se o valor do caractere esta entre '0' a '9'.
                if (valor_do_caractere >= 48 && valor_do_caractere <= 57){
                    // Para cada posi��o do vetor "usados".
                    for (posicao_2 = 0; posicao_2 < 6; posicao_2++){
                        // Se existir valor de caractere.
                        if (usados[posicao_2] != '\0'){
                            // Se o valor do caractere lido j� foi usado.
                            if (valor_do_caractere == usados[posicao_2]){
                                cout << "Formato inv�lido. e" << endl;
                            }
                        }
                    }
                    // Vetor "usados" recebe o valor do caractere.
                    usados[posicao] = valor_do_caractere;
                    posicao++;
                    continue;
                }
                posicao++;
                cout << "Formato inv�lido. f" << endl;
            }

            bool bandeira_1 = false;
            bool bandeira_2 = false;
            bool bandeira_3 = false;

            for (posicao = 0; posicao <= 5; posicao++){
                valor_do_caractere = valor[posicao];
                // Se o valor do caractere est� entre 'A' a 'Z'.
                if (valor_do_caractere >= 65 && valor_do_caractere <= 90){
                    bandeira_1 = true;
                }
                // Se o valor do caractere est� entre 'a' a 'z'.
                if (valor_do_caractere >= 97 && valor_do_caractere <= 122){
                    bandeira_2 = true;
                }
                // Se o valor do caractere est� entre '0' a '9'.
                if (valor_do_caractere >= 48 && valor_do_caractere <= 57){
                    bandeira_3 = true;
                }
            }
            // Se algum dos formatos n�o foi usado.
            if (bandeira_1 == false || bandeira_2 == false || bandeira_3 == false){
                cout << "Formato inv�lido. g" << endl;
            }
        }
    }

    cout << "Formato v�lido." << endl;

    return 0;
}
