#include "geral.h"

void MenuLogins(){
    string Op;
    limpador();
    while (true){

        cout << "[1]  - Mostrar Logins" << endl;
        cout << "[2]  - Mostrar Login por Cargo" << endl;
        cout << "[3]  - Cadastrar Login" << endl;
        cout << "[4]  - Voltar ao Menu Principal" << endl;
        cout << ": ";
        cin >> Op;
        if (Op == "1"){
            LerLogin();
            limpador();            
        }else if  (Op == "2"){
            LerLoginCargo();
            limpador();
        }else if (Op == "3"){
            AddLogin();
            limpador();
        }else  if (Op == "4"){
            break;
        }else{
            limpador();
            cout << "Opção Invalida" << endl;
        }

    }
}