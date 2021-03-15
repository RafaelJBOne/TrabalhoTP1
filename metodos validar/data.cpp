// Classe de domínio "Data"
/*
Formato:
Formato DD-MM-AA
01 a 31 em DD.
01 e 12 em MM.
21 a 99 em AA.
Data considera a ocorrência de anos bissextos.
*/

#include <iostream>

using namespace std;

int main()
{
    string valor = "13-03-21";
    int valor_do_primeiro_caractere = 0;
    int valor_do_segundo_caractere = 0;
    // DIA
    valor_do_primeiro_caractere = valor[0];
    // Se o valor do primeiro caractere do dia não está entre os valores que representam de "0" a "3", na tabela ascii.
    if (valor_do_primeiro_caractere < 48 or valor_do_primeiro_caractere > 51){
        cout << "Valor inválido. a" << endl;
    }

    valor_do_segundo_caractere = valor[1];
    // Se o valor do primeiro caractere do dia é valor que representa "0", na tabela ascii.
    if (valor_do_primeiro_caractere == 48){
        // Se o valor do segundo caractere do dia é valor que representa "0", na tabela ascii.
        if (valor_do_segundo_caractere == 48){
            cout << "Valor inválido. b" << endl;
        }
    }
    // Se o valor do primeiro caractere do dia é valor que representa "3", na tabela ascii.
    if (valor_do_primeiro_caractere == 51){
        // Se o valor do segundo caractere do dia não é valor que representa "0" ou "1", na tabela ascii.
        if (valor_do_segundo_caractere != 48 && valor_do_segundo_caractere != 49){
            cout << "Valor inválido. c" << endl;
        }
    }
    // Se o valor do segundo caractere do dia não está entre os valores que representam de "0" a "9", na tabela ascii.
    if (valor_do_segundo_caractere < 48 or valor_do_segundo_caractere > 57){
        cout << "Valor inválido. d" << endl;
    }
    // MÊS
    valor_do_primeiro_caractere = valor[3];
    // Se o valor do primeiro caractere do mês é diferente dos valores que representam "0" e "1", na tabela ascii.
    if (valor_do_primeiro_caractere != 48 && valor_do_primeiro_caractere != 49){
        cout << "Valor inválido. e" << endl;
    }

    valor_do_segundo_caractere = valor[4];
    // Se o valor do primeiro caractere do mês é valor que representa "0", na tabela ascii.
    if (valor_do_primeiro_caractere == 48){
        // Se o valor do segundo caractere do mês não está entre os valores que representam de "1" a "9", na tabela ascii.
        if (valor_do_segundo_caractere < 49 or valor_do_segundo_caractere > 57){
            cout << "Valor inválido. f" << endl;
        }
    }
    // Se o valor do primeiro caractere do mês é valor que representa "1", na tabela ascii.
    if (valor_do_primeiro_caractere == 49){
        // Se o valor do segundo caractere do mês não está entre os valores que representam de "0" a "2", na tabela ascii.
        if (valor_do_segundo_caractere < 48 or valor_do_segundo_caractere > 50){
            cout << "Valor inválido. g" << endl;
        }
    }
    // ANO
    valor_do_primeiro_caractere = valor[6];
    // Se o valor do primeiro caractere do ano não está entre os valores que representam de "2" a "9", na tabela ascii.
    if (valor_do_primeiro_caractere < 50 or valor_do_primeiro_caractere > 57){
        cout << "Valor inválido. h" << endl;
    }
    valor_do_segundo_caractere = valor[7];
    // Se o valor do primeiro caractere do ano é valor que representa "2", na tabela ascii.
    if (valor_do_primeiro_caractere == 50){
        // Se o valor do segundo caractere do ano não está entre os valores que representam de "1" a "9", na tabela ascii.
        if (valor_do_segundo_caractere < 49 or valor_do_segundo_caractere > 57){
            cout << "Valor inválido. i" << endl;
        }
    }
    // Se o valor do segundo caractere do ano não está entre os valores que representam de "0" a "9", na tabela ascii.
    if (valor_do_segundo_caractere < 48 or valor_do_segundo_caractere > 57){
        cout << "Valor inválido. j" << endl;
    }

    cout << "Valor válido." << endl;

    return 0;
}
