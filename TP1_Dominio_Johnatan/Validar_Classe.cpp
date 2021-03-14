#include <iostream>
using namespace std;

int main(){
//validacao do numero que o cliente escolheu
    int cliente_numero = 3;
//metodo switch case
    //cin >> cliente_numero;
//ele vai guardar o valor que foi repassado
    switch(cliente_numero){
        //na case ele vai conferir se o valor bate com os que temos disponiveis
        case 1:
            //se tiver ele vai retornar a opicao celecionada
            cout << "casa" << endl;
            //e dar um break pra sair do laco
        break;

        case 2:
            cout << "apartamento" << endl;
        break;

        case 3:
            cout << "quarto" << endl;
        break;
        // caso n seja nenhuma das opicoes ele avisa
        default:
            cout << "Escolha uma opcao valida" << endl;
        break;
    }

    return 0;
}
