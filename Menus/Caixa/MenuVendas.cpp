#include "geral.h"

void MenuVendas(string ArqTemp, string User){
    string Op;

    ofstream  ArqTempo(ArqTemp);
    ArqTempo.close();

    limpador();
    while (true){
        cout << "[1]  - Passar produto" << endl;
        cout << "[2]  - Editar lista de compras" << endl;
        cout << "[3]  - Finalizar venda" << endl;
        cout << "[4]  - Sair" << endl;
        cout << ": ";
        cin >> Op;

        if (Op == "1"){
            PassarProduto(ArqTemp);
            limpador();
        }else if( Op == "2"){
            MenuEditarListaCompras(ArqTemp);
            limpador();
        }else if (Op == "3"){
            MenuFinalizar(ArqTemp, User);
        }else if (Op == "4"){
            remove(ArqTemp.c_str());
            break;
        }else{
            limpador();
            cout << "Opção invalida, tente novamente." << endl;
        }
    }
}