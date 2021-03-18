///DOCUMENTAÇÃO DAS ENTIDADES TRABALHO TP1



/// Classe de entidade Imovel representa o imóvel anunciado.
/// Imovel dispõe dos seguintes métodos:
///***********************************************************************************************
///     setcodigo(const Codigo&): com passagem de parâmetro que define o código do imóvel;
///     getcodigo(): sem passagem de parâmetro que apresenta o código armazenado;
///***********************************************************************************************
///     setclasse(const Classe&): com passagem de parâmetro que define a categoria do imóvel;
///     getclasse(): sem passagem de parâmetro que apresenta o valor armazenado;
///***********************************************************************************************
///     setdescricao(const Descricao&):com passagem de parâmetro que define define a descricao padrao;
///     getdescricao(): sem passagem de parâmetro que apresenta a descricao armazenada;
///***********************************************************************************************
///     setendereco(const Endereco&): com passagem de parâmetro que define um endereco padrao;
///     getendereco(): sem passagem de parâmetro que apresenta o endereco armazenado;
///***********************************************************************************************
///     setedata_inicial(const Data&): com passagem de parâmetro que define a data inicial do aluguel;
///     getdata_inicial(): sem passagem de parâmetro que apresenta apresenta a string armazenada;
///***********************************************************************************************
///     setedata_final(const Data&): com passagem de parâmetro que define a data final do aluguel;
///     getdata_final(): sem passagem de parâmetro apresenta apresenta a string armazenada;
///***********************************************************************************************
///     sethospedes(const Numero&): com passagem de parâmetro que define a quantidade de hospedes;
///     gethospedes(): sem passagem de parâmetro apresenta apresenta o valor armazenado;
///***********************************************************************************************
///     setvalor(const Moeda&): com passagem de parâmetro que define o valor do imóvel;
///     getvalor(): sem passagem de parâmetro apresenta o valor armazenado;
///***********************************************************************************************


/// Classe de entidade Proposta representa a proposta de aluguel.
/// Proposta dispõe dos seguintes métodos:

///     setcodigo(const Codigo&): com passagem de parâmetro que define o código do imóvel;
///     getcodigo(): sem passagem de parâmetro que obtém valor apresenta o código armazenado;
///***********************************************************************************************
///     setedata_inicial(const Data&): com passagem de parâmetro que define a data inicial do aluguel;
///     getdata_inicial(): sem passagem de parâmetro que obtém valor apresenta apresenta a string armazenada;
///***********************************************************************************************
///     setedata_final(const Data&): com passagem de parâmetro que define a data final do aluguel;
///     getdata_final(): sem passagem de parâmetro que obtém valor apresenta apresenta a string armazenada;
///***********************************************************************************************
///     sethospedes(const Numero&): com passagem de parâmetro que define a quantidade de hospedes;
///     gethospedes(): sem passagem de parâmetro que obtém valor apresenta apresenta o valor armazenado;
///***********************************************************************************************
///     setvalor(const Moeda&): com passagem de parâmetro que define o valor do imóvel;
///     getvalor(): sem passagem de parâmetro apresenta o valor armazenado;
///***********************************************************************************************



/// Classe de entidade Usuario representa o cadastro de usuário.
/// Usuario dispõe dos seguintes métodos:

///     setnome(const Nome&): com passagem de parâmetro que armazena o nome do usuário;
///     getnome(): sem passagem de parâmetro apresenta a string armazenada;
///***********************************************************************************************
///     setemail(const Email&): com passagem de parâmetro que armazena o endereço eletrônico do usuário;
///     getnome(): sem passagem de parâmetro apresenta a string armazenada;
///***********************************************************************************************
///     setsenha(const Senha&): com passagem de parâmetro que armazena o senha de acesso do usuário;
///     getsenha(): sem passagem de parâmetro apresenta a string armazenada;
///***********************************************************************************************
///     settelefone(const Telefone&) com passagem de parâmetro que armazena o telefone de contato do usuário;
///     getsenha(): sem passagem de parâmetro apresenta a string armazenada;
///***********************************************************************************************


///DOCUMENTAÇÃO DOS DOMÍNIOS

/// A classe Codigo representa um codigo associado ao usuário.
/// Codigo dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     setValor(int) com passagem de parâmetro que define a string padrão;
///     getValor()sem passagem de parâmetro que obtém a string armazenada;
///     validar(int) com passagem de parâmetro que retorna se a string passada é válida ou não.


/// A classe Classe recebe um número inteiro referente as categorias de imóveis.
/// Classe dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     setValor(int): com passagem de parâmetro que define a string padrão;
///     getValor(): sem passagem de parâmetro que obtém a string armazenada;
///     validar(int): com passagem de parâmetro que retorna se o número passado é válido ou não.


/// A classe Descricao recebe uma string referente as caracteristicas dos imóveis.
/// Descricao dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     setValor(str) com passagem de parâmetro que define a string padrão;
///     getValor() sem passagem de parâmetro que obtém a string armazenada;
///     validar(str) com passagem de parâmetro que retorna se a string passada é válida ou não.



/// A classe Endereco recebe uma string referente endereço do imóveil.
/// Endereco dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     setValor(str): com passagem de parâmetro que define a string padrão;
///     getValor() sem passagem de parâmetro que obtém a string armazenada;
///     validar(str) com passagem de parâmetro que retorna se a string passada é válida ou não.


/// A classe Data recebe strings referente as datas de aluguel do imóveil.
/// Data dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     setValor(int):com passagem de parâmetro que define a string padrão;
///     getValor(): sem passagem de parâmetro que obtém a string armazenada;
///     validar(int): com passagem de parâmetro que retorna se a string passada é válida ou não.


/// Classe de domínio Numero representa a quantidade de hóspedes.
/// Numero dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     setValor(int): com passagem de parâmetro que define valor;
///     getValor(): sem passagem de parâmetro que obtém valor;
///     validar(int): com passagem de parâmetro que retorna se o valor passado é válido ou não.



/// Classe de domínio Moeda representa o valor monetário últilizado pelo usuário.
/// Moeda dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     setValor(int): com passagem de parâmetro que define valor;
///     getValor(): sem passagem de parâmetro que obtém valor;
///     validar(int): com passagem de parâmetro que retorna se o valor passado é válido ou não.



/// Classe de domínio Nome representa o nome do usuário.
/// Nome dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     setValor(int): com passagem de parâmetro que define valor;
///     getValor(): sem passagem de parâmetro que obtém valor;
///     validar(int): com passagem de parâmetro que retorna se a string passada é válida ou não.



/// Classe de domínio Email representa o endereço eletrônico últilizado pelo usuário.
/// Email dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     setValor(int): com passagem de parâmetro que define valor;
///     getValor(): sem passagem de parâmetro que obtém valor;
///     validar(int): com passagem de parâmetro que retorna se a string passada é válida ou não.



/// Classe de domínio Senha representa a senha de acesso últilizada pelo usuário.
/// Senha dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     setValor(int) com passagem de parâmetro que define valor;
///     getValor() sem passagem de parâmetro que obtém valor;
///     validar(int) com passagem de parâmetro que retorna se a string passada é válida ou não.



/// Classe de domínio Telefone representa o número telefônico de contato últilizado pelo usuário.
/// Telefone dispõe dos seguintes métodos:
///     Métodos construtores sem e com passagem de parâmetro;
///     setValor(int): com passagem de parâmetro que define valor;
///     getValor(): sem passagem de parâmetro que obtém valor;
///     validar(int): com passagem de parâmetro que retorna se a string passada é válida ou não.

