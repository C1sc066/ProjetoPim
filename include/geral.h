#ifndef GERAL_H
#define GERAL_H


#include "diretorios.h"
#include "libs.h"
#include "utilitarios.h" 
#include "login.h"
#include "estoque.h"
#include "admin.h"
#include "caixa.h"



struct Produto{
    string Nome, Tipo, ID, Validade;
    float Quantidade, Valorporunidade, Limite;
};

struct Login{
    string Login, Senha, ID, Cargo;
};

struct Fornecedor{
    string ID, Nome, Descricao, Telefone;
};





#endif