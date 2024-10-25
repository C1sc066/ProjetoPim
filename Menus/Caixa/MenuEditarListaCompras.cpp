#include "geral.h"

void MenuEditarListaCompras(string ArqTemp){
    string Op;

    cout << "[1]  - Editar quantidade" << endl;
    cout << "[2]  - Remover  item" << endl;
    cout << ": ";
    cin >> Op;

    if (Op == "1"){
        EditarQuantidade(ArqTemp);
    }else  if (Op == "2"){
        RemoverItem(ArqTemp);
    }

}