// Classe de domínio "Senha"
/*
Formato:
Formato XXXXXX
Cada X é letra (A-Z ou a-z) ou dígito (0 – 9).
Não existe caracter repetido.
Existe pelo menos uma letra maiúscula, uma letra minúscula e um dígito.
*/

#include <iostream>

using namespace std;

int main()
{
    string valor = "ABabCD";
    int contador = 0;
    // Se tem mais de 6 caracteres.
    if (valor[6]){
        cout << "Formato inválido. a" << endl;
    }else{
        // Enquanto existir caractere.
        while (valor[contador] != '\0'){
            contador ++;
        }
        // Subtrai o último contador somado.
        contador--;
        // Se existir menos de 6 caracteres.
        if (contador < 5){
            cout << "Formato inválido. b" << endl;
        }else{
            int posicao = 0;
            int valor_do_caractere = 0;
            int posicao_2 = 0;
            // Cria vetor para guardar valores de caracteres já usados.
            int usados[5];
            // Enquanto existir caractere.
            while (valor[posicao] != '\0'){
                // O valor do caractere é atribuído.
                valor_do_caractere = valor[posicao];
                // Se o valor do caractere está entre 'A' a 'Z'.
                if (valor_do_caractere >= 65 && valor_do_caractere <= 90){
                    // Para cada posição do vetor "usados".
                    for (posicao_2 = 0; posicao_2 < 6; posicao_2++){
                        // Se existir valor de caractere.
                        if (usados[posicao_2] != '\0'){
                            // Se o valor do caractere lido já foi usado.
                            if (valor_do_caractere == usados[posicao_2]){
                                cout << "Formato inválido. c" << endl;
                            }
                        }
                    }
                    // Vetor "usados" recebe o valor do caractere.
                    usados[posicao] = valor_do_caractere;
                    posicao++;
                    // Interrompe a execução e passa para a próxima iteração do laço.
                    continue;
                }
                // Se o valor do caractere esta entre 'a' a 'z'.
                if (valor_do_caractere >= 97 && valor_do_caractere <= 122){
                    // Para cada posição do vetor "usados".
                    for (posicao_2 = 0; posicao_2 < 6; posicao_2++){
                        // Se existir valor de caractere.
                        if (usados[posicao_2] != '\0'){
                            // Se o valor do caractere lido já foi usado.
                            if (valor_do_caractere == usados[posicao_2]){
                                cout << "Formato inválido. d" << endl;
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
                    // Para cada posição do vetor "usados".
                    for (posicao_2 = 0; posicao_2 < 6; posicao_2++){
                        // Se existir valor de caractere.
                        if (usados[posicao_2] != '\0'){
                            // Se o valor do caractere lido já foi usado.
                            if (valor_do_caractere == usados[posicao_2]){
                                cout << "Formato inválido. e" << endl;
                            }
                        }
                    }
                    // Vetor "usados" recebe o valor do caractere.
                    usados[posicao] = valor_do_caractere;
                    posicao++;
                    continue;
                }
                posicao++;
                cout << "Formato inválido. f" << endl;
            }

            bool bandeira_1 = false;
            bool bandeira_2 = false;
            bool bandeira_3 = false;

            for (posicao = 0; posicao <= 5; posicao++){
                valor_do_caractere = valor[posicao];
                // Se o valor do caractere está entre 'A' a 'Z'.
                if (valor_do_caractere >= 65 && valor_do_caractere <= 90){
                    bandeira_1 = true;
                }
                // Se o valor do caractere está entre 'a' a 'z'.
                if (valor_do_caractere >= 97 && valor_do_caractere <= 122){
                    bandeira_2 = true;
                }
                // Se o valor do caractere está entre '0' a '9'.
                if (valor_do_caractere >= 48 && valor_do_caractere <= 57){
                    bandeira_3 = true;
                }
            }
            // Se algum dos formatos não foi usado.
            if (bandeira_1 == false || bandeira_2 == false || bandeira_3 == false){
                cout << "Formato inválido. g" << endl;
            }
        }
    }

    cout << "Formato válido." << endl;

    return 0;
}
