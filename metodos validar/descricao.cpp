// Classe de domínio "Descricao"
/*
Formato:
5 a 30 caracteres.
Terminado por ponto.
*/

#include <iostream>

using namespace std;

int main()
{
    string valor = "0123456789012345678901234567890";
    int contador = 0;
    // Enquanto existir caractere e o contador for menor do que 30.
    while (valor[contador] != '\0' && contador <= 30){
        contador ++;
    }
    // Se existir menos de 5 ou mais de 30 caracteres ou o último caractere não for um ponto.
    if (contador < 5 or contador > 30 or valor[contador - 1] != '.'){
        cout << "Formato inválido." << endl;
    }

    cout << "Formato válido." << endl;

    return 0;
}
