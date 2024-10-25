#include "geral.h"

void MenuInicialCaixa(string UserLogin){
    string Op;
    while (true){
        limpador();

        cout << "Voce esta logado como: " << UserLogin << endl;
        cout << "---------------------------------------" << endl;
        cout << "[1]  - Iniciar Venda" << endl;
        cout << "[2]  - Sair" << endl;
        cin >>  Op;
        if(Op == "1"){
            MenuVendas(Gerador(), UserLogin);

        }else if (Op == "2"){
            break;
        
        }else{
            cout << "Opcao invalida, tente novamente!" << endl;
        }   
    }
}