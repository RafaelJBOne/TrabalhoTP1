// DOMINIOS.CPP:
#include "dominiosTP1.h"

Numero::Numero(){
    valor = DEFAULT;
}

Numero::Numero(int valor){
    this->valor = valor;
}

bool Numero::validar(int valor){
    if (valor > 20 || valor < 0){
        return false;
    }
    return true;
}

/*
bool Codigo::validar(){
    if (){
        return false;
    }
    return true;
}

bool Clase::validar(){
    if (){
        return false;
    }
    return true;
}

bool Descricao::validar(){
    if (){
        return false;
    }
    return true;
}

bool Endereco::validar(){
    if (){
        return false;
    }
    return true;
}

bool Data::validar(){
    if (){
        return false;
    }
    return true;
}

bool Moeda::validar(){
    if (){
        return false;
    }
    return true;
}

bool Nome::validar(){
    if (){
        return false;
    }
    return true;
}

bool Email::validar(){
    if (){
        return false;
    }
    return true;
}

bool Senha::validar(){
    if (){
        return false;
    }
    return true;
}

bool Telefone::validar(){
    if (){
        return false;
    }
    return true;
}*/
