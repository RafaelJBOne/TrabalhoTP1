#include <iostream>

using namespace std;

/*
esta eh uma funcao bool que retorna true caso o numero (Double) esteja
entre 0.00 e  1000000.00
*/
bool validarMoeda(double moeda){
    if(moeda >= 0 && moeda <= 1000000){
        return true;
    }else{
        return false;
    }
}

//A funcao main deve ser desconsiderada para integracao ao codigo do trabalho
int main(){

    double money = -0.99;

    if(validarMoeda(money)){
        cout << "Este valor eh valido" << endl;
    }else{
        cout << "Este valor nao eh invalido" << endl;
    }

    return 0;
}
