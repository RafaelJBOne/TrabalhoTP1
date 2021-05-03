#include "n_dominios.h"

const string Codigo::DEFAULT = "XXXXX";
const string Descricao::DEFAULT = "12345.";
const string Endereco::DEFAULT = "Conj 08 lote 14.5";
const string Data::DEFAULT = "16-03-21";
const double Moeda::DEFAULT = 100;
const string Nome::DEFAULT = "Johnatan";
const string Email::DEFAULT = "nome@domínio";
const string Senha::DEFAULT = "AB1sCD";
const string Telefone::DEFAULT = "(123)-123456789";

Codigo::Codigo(){
    valor = DEFAULT;
}

Codigo::Codigo(string valor){
    this->valor = valor;
}

void Codigo::setValor(string valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
}

bool Codigo::validar(string valor){
   //validacao de parametros de codigo
   int i = 0;
   //laco para percorer o nome
   if(valor[0] == 48 && valor[1] == 48 && valor[2] == 48 && valor[3]== 48 && valor[4]== 48){
        return false;
   }
   while(valor[i] != '\0'){
        //conferindo se na posicao do iesimo eh letra maiuscula
        if (valor[i] >= 65 && valor[i] <= 90){
            i++;
            continue;
        }
        //conferindo se na posicao do iesimo eh algum numero
        if (valor[i] >= 48 && valor[i] <= 57){
            i++;
            continue;
        }
        //conferindo se na posicao do iesimo eh algum fora dos parametros
        if (valor[i] < 65 || valor[i] > 90 || valor[i] < 48 || valor[i] > 57){
            i++;
            return false;
        }
   }
   //pega o valor de i e verifica se ele eh menor que 1 e maior que 5
    if(i != 5){
        return false;
    }
    return true;
}

Classe::Classe(){
    valor = DEFAULT;
}

Classe::Classe(int valor){
    this->valor = valor;
}

void Classe::setValor(int valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
}

bool Classe::validar(int valor){
    //validacao do numero que o cliente escolheu
    //metodo switch case
    //ele vai guardar o valor que foi repassado
    switch(valor){
        //na case ele vai conferir se o valor bate com os que temos disponiveis
        case 1:
            //se tiver ele vai retornar a opicao celecionada
            //cout << "casa" << endl;
            //e dar um break pra sair do laco
            return true;
        break;
        case 2:
            //cout << "apartamento" << endl;
            return true;
        break;
        case 3:
            //cout << "quarto" << endl;
            return true;
        break;
        // caso n seja nenhuma das opicoes ele avisa
        default:
            //cout << "Escolha uma opcao valida" << endl;
        return false;
        break;
    }
    return true;
}

Descricao::Descricao(){
    valor = DEFAULT;
}

Descricao::Descricao(string valor){
    this->valor = valor;
}

void Descricao::setValor(string valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
}

bool Descricao::validar(string valor){
    /*Formato: 5 a 30 caracteres. Terminado por ponto.*/
    int contador = 0;
    // Enquanto existir caractere e o contador for menor do que 30.
    while (valor[contador] != '\0' && contador <= 30){
        contador ++;
    }
    // Se existir menos de 5 ou mais de 30 caracteres ou o último caractere não for um ponto.
    if (contador < 5 or contador > 30 or valor[contador - 1] != '.'){
        return false;
    }
    return true;
}

Endereco::Endereco(){
    valor = DEFAULT;
}

Endereco::Endereco(string valor){
    this->valor = valor;
}

void Endereco::setValor(string valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
}

bool Endereco::validar(string valor){
    int tamanho = valor.length();
    //restricao do requisito (quantidade de caracterres)
    if(tamanho >= 5 && tamanho <= 20){
        int i = 0;
        //verificacao de caracteres
        while(valor[i] != '\0'){
            // verifica se a posicao eh igual a letras maiusculas
            if (valor[i] >= 65 && valor[i] <= 90){
                i++;
                continue;
            }
            // verifica se a posicao eh igual a letras minusculas
            if (valor[i] >= 97 && valor[i] <= 122){
                i++;
                continue;
            }
            // verifica se a posicao eh igual a numeros
            if (valor[i] >= 48 && valor[i] <= 57){
                i++;
                continue;
            }
            // verifica se a posicao eh igual a ponto '.'
            if (valor[i] == 46){
                i++;
                continue;
            }
            // verifica se a posicao eh igual a espaco ' '
            if (valor[i] == 32){
                i++;
                continue;
            }
            return false;
        }
    }else{
        return false;
    }
    return true;
}

Data::Data(){
    valor = DEFAULT;
}

Data::Data(string valor){
    this->valor = valor;
}

void Data::setValor(string valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
}

bool Data::validar(string valor){
    int valor_do_primeiro_caractere = 0;
    int valor_do_segundo_caractere = 0;
    // DIA
    valor_do_primeiro_caractere = valor[0];
    // Se o valor do primeiro caractere do dia não está entre os valores que representam de "0" a "3", na tabela ascii.
    if (valor_do_primeiro_caractere < 48 or valor_do_primeiro_caractere > 51){
        return false;
    }
    valor_do_segundo_caractere = valor[1];
    // Se o valor do primeiro caractere do dia é valor que representa "0", na tabela ascii.
    if (valor_do_primeiro_caractere == 48){
        // Se o valor do segundo caractere do dia é valor que representa "0", na tabela ascii.
        if (valor_do_segundo_caractere == 48){
            return false;
        }
    }
    // Se o valor do primeiro caractere do dia é valor que representa "3", na tabela ascii.
    if (valor_do_primeiro_caractere == 51){
        // Se o valor do segundo caractere do dia não é valor que representa "0" ou "1", na tabela ascii.
        if (valor_do_segundo_caractere != 48 && valor_do_segundo_caractere != 49){
            return false;
        }
    }
    // Se o valor do segundo caractere do dia não está entre os valores que representam de "0" a "9", na tabela ascii.
    if (valor_do_segundo_caractere < 48 or valor_do_segundo_caractere > 57){
        return false;
    }
    // MÊS
    valor_do_primeiro_caractere = valor[3];
    // Se o valor do primeiro caractere do mês é diferente dos valores que representam "0" e "1", na tabela ascii.
    if (valor_do_primeiro_caractere != 48 && valor_do_primeiro_caractere != 49){
        return false;
    }
    valor_do_segundo_caractere = valor[4];
    // Se o valor do primeiro caractere do mês é valor que representa "0", na tabela ascii.
    if (valor_do_primeiro_caractere == 48){
        // Se o valor do segundo caractere do mês não está entre os valores que representam de "1" a "9", na tabela ascii.
        if (valor_do_segundo_caractere < 49 or valor_do_segundo_caractere > 57){
            return false;
        }
    }
    // Se o valor do primeiro caractere do mês é valor que representa "1", na tabela ascii.
    if (valor_do_primeiro_caractere == 49){
        // Se o valor do segundo caractere do mês não está entre os valores que representam de "0" a "2", na tabela ascii.
        if (valor_do_segundo_caractere < 48 or valor_do_segundo_caractere > 50){
            return false;
        }
    }
    // ANO
    valor_do_primeiro_caractere = valor[6];
    // Se o valor do primeiro caractere do ano não está entre os valores que representam de "2" a "9", na tabela ascii.
    if (valor_do_primeiro_caractere < 50 or valor_do_primeiro_caractere > 57){
        return false;
    }
    valor_do_segundo_caractere = valor[7];
    // Se o valor do primeiro caractere do ano é valor que representa "2", na tabela ascii.
    if (valor_do_primeiro_caractere == 50){
        // Se o valor do segundo caractere do ano não está entre os valores que representam de "1" a "9", na tabela ascii.
        if (valor_do_segundo_caractere < 49 or valor_do_segundo_caractere > 57){
            return false;
        }
    }
    // Se o valor do segundo caractere do ano não está entre os valores que representam de "0" a "9", na tabela ascii ou existe um terceiro número em "ano".
    if (valor_do_segundo_caractere < 48 or valor_do_segundo_caractere > 57 or valor[8] != '\0'){
        return false;
    }
    return true;
}

Numero::Numero(){
    valor = DEFAULT;
}

Numero::Numero(int valor){
    this->valor = valor;
}

void Numero::setValor(int valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
}

bool Numero::validar(int valor){
    //Se o valor e maior que 20 ou menor que 0.
    if (valor > 20 || valor < 0){
        return false;
    }
    return true;
}

Moeda::Moeda(){
    valor = DEFAULT;
}

Moeda::Moeda(double valor){
    this->valor = valor;
}

void Moeda::setValor(double valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
}

bool Moeda::validar(double valor){
    // Se o valor esta entre 0.00 e 1000000.00.
    if(valor >= 0.00 && valor <= 1000000.00){
        return true;
    }else{
        return false;
    }
}

Nome::Nome(){
    valor = DEFAULT;
}

Nome::Nome(string valor){
    this->valor = valor;
}

void Nome::setValor(string valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
}

bool Nome::validar(string valor){
   //avaliacao de nomes
   //variavel contadora
   int i = 0;
   //contador para o segundo while
   int contador_primeira = 0;
   //laco para percorer o nome
   while(valor[i] != '\0'){
       //laco para ver se a primeira letra eh maisuscula
       while(contador_primeira == 0){
            //if para conferir se a primeira letra eh maiuscula
            if (valor[0] >= 65 && valor[0] <= 90){
                //implementar o contador para que o laco n inicie novamente
                contador_primeira++;
            }else{
                //caso a primrira letra n for maiuscula printar um erro
                return false;
                contador_primeira++;
            }
        }
        // if as letras sao maisuculas
        if (valor[i] >= 65 && valor[i] <= 90){
            i++;
            continue;
        }
        // if as letras sao minusculas
        if (valor[i] >= 97 && valor[i] <= 122){
            i++;
            continue;
        }
        // if tem ponto
        if (valor[i] == 46){
            // if tiver ele pega a posicao anterior e confere se eh uma letra
            if(valor[i-1] >= 65 && valor[i-1] <= 90 || valor[i-1] >= 97 && valor[i-1] <= 122){
                i++;
            //se nao for uma letra contem erro
            }else{
                i++;
                return false;
                continue;
            }
        }
        // confere se tem um espaco na string nome
        if (valor[i] == 32){
            //se encontrar espaco ele for seguido de outro espaco printa um erro
            if (valor[i+1] == 32){
                i++;
                return false;
                continue;
            //se nao encontrar um erro ele printa um sucess
            }else{
                if (valor[i+1] == '\0' ){
                // se nao for informa um erro
                }
                //confere se depois do espaco a proxima letra eh maiuscula
                if (valor[i+1] >= 65 && valor[i+1] <= 90){
                }else{
                    return false;
                }
                i++;
                continue;
            }
        //se nao tiver os caracteres validos ele em alguma parte ele avisa
        }else{
            return false;
            i++;
            continue;
        }
    }
    // verifica se o tamanho do nome esta entre 5 e 25 e retorna se estiver dentro do parametro ou nao
    if(i >= 5 && i <=25){
        }else{
            return false;
        }
    return true;
}

Email::Email(){
    valor = DEFAULT;
}

Email::Email(string valor){
    this->valor = valor;
}

void Email::setValor(string valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
};

bool Email::validar(string valor){
    //pegando o email para validacao
    string caractere = "a";
    int posicao = 0;
    int valor_do_caractere;
    int proximo_valor_do_caractere;
    int contador_1 = 0;
    // '\0' = EOF
    // ler tudo ate o @
    while(caractere != "@"){
        caractere = valor[posicao];
        posicao++;
        contador_1 ++;
    }
    //caso o nome ultrapasse 10 caracteres
    if(contador_1 > 10){
        return  false;
    }
    //contador para depois do @
    int contador_2 = 0;
    // '\0' = EOF
    //enquanto houver caractere depois do @
    while(valor[posicao] != '\0'){
        contador_2++;
        posicao++;
    }
    //caso o dominio ultrapasse 20 caracteres
    if(contador_2 > 20){
        return  false;
    }
}

Senha::Senha(){
    valor = DEFAULT;
}

Senha::Senha(string valor){
    this->valor = valor;
}

void Senha::setValor(string valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
}

bool Senha::validar(string valor){
    int contador = 0;
    // Se tem mais de 6 caracteres.
    if (valor[6]){
        return false;
    }else{
        // Enquanto existir caractere.
        while (valor[contador] != '\0'){
            contador ++;
        }
        // Subtrai o último contador somado.
        contador--;
        // Se existir menos de 6 caracteres.
        if (contador < 5){
            return false;
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
                                return false;
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
                                return false;
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
                                return false;
                            }
                        }
                    }
                    // Vetor "usados" recebe o valor do caractere.
                    usados[posicao] = valor_do_caractere;
                    posicao++;
                    continue;
                }
                posicao++;
                return false;
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
                return false;
            }
        }
    }
    return true;
}

Telefone::Telefone(){
    valor = DEFAULT;
}

Telefone::Telefone(string valor){
    this->valor = valor;
}

void Telefone::setValor(string valor){
    if (validar(valor)){
        this->valor = valor;
    }else{
        throw invalid_argument("Argumento invalido.");
    }
}

bool Telefone::validar(string valor){
    int zeros = 0,i = 0,preFixo = 0, j = 0, k = 0, l = 0;
    //retorna false caso o prefixo nao esteja no formato corrreto
    if(valor[0] == '(' && valor[4] == ')' && valor[5] == '-'){
        while(valor[i] != '\0'){
            //regista a ocorrencia de zeros
            if(valor[i] == 48){
                zeros++;
            }
            // registra a ocorrencia de abre parenteses '('
            if(valor[i] == 40){
                j++;
            }
            // verifica se j e maior que 1
            if(j > 1){
                return false;
            }
            // registra a ocorrencia de fecha parenteses ')'
            if(valor[i] == 41){
                k++;
            }
            // verifica se k e maior que 1
            if(k > 1){
                return false;
            }
            // registra a ocorrencia do sinal de menos '-'
            if(valor[i] == 45){
                l++;
            }
            // verifica se l e maior que 1
            if(l > 1){
                return false;
            }
            //caso esta condicional seja ativada significa que o formato "(000)-000000000" foi fornecido
            if(zeros >= 12){
                return false;
            }
            //verifica a ocorrencia dos digitos de 0 a 9
            // verifica a ocorrencia dos caracteres "(", ")" e "-"
            if(valor[i] >= 48 && valor[i] <= 57 || valor[i] == 40 || valor[i] == 41 || valor[i] == 45){
                i++;
            }else{
                return false;
            }
        }
        //caso o numero de caracteres excedam o requisito
        if(i == 15){
        }else{
            return false;
        }
    }else{
        return false;
    }
    return true;
}
