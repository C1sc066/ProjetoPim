#include "geral.h"

void MenuFornecedores(){
    string Op;
    limpador();
    while (true){

        cout << "[1]  - Mostrar  Fornecedores" << endl;
        cout << "[2]  - Cadastrar Fornecedor" << endl;
        cout << "[3]  - Volta ao Menu Principal" << endl;
        cout << ": ";
        cin >> Op;
        if (Op == "1"){
            LerFornecedores();
            limpador();
        }else if  (Op == "2"){
            AddFornecedor();
            limpador();
        }else  if (Op == "3"){
            break;
        }else{
            limpador();
            cout << "Opção Invalida" << endl;
        }

    }
}