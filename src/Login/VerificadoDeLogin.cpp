#include "geral.h"

void VerificarMenu(string Cargo, string UserLogin){

    if (Cargo == "Admin"){
        MenuAdmin(UserLogin);
    }else if (Cargo == "Caixa"){
        MenuInicialCaixa(UserLogin);
    }else if (Cargo == "Estoque"){
        MenuEstoque(UserLogin);
    }

}