#include "geral.h"

void MenuAdmin(string User){
    string Op;
    
    limpador();

    while (true){

        cout << "[1]  - Menu Fornecedores" << endl;
        cout << "[2]  - Menu Logins" << endl;
        cout << "[3]  - Menu Estoque" << endl;
        cout << "[4]  - Menu Caixa" << endl;
        cin >> Op;

        if (Op == "1"){
            MenuFornecedores();
            limpador();
        }else if (Op == "2"){
            MenuLogins();
            limpador();
        }else if (Op == "3"){
            MenuEstoque(User);
            limpador();
        }else  if (Op == "4"){
            MenuInicialCaixa(User);
            limpador();
        }else if  (Op == "5"){
            break;
        }else{
            limpador();
            cout << "Opção Invalida" << endl;
        }


    }
}