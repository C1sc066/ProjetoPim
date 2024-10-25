#include "geral.h"

void MenuEstoque(string Login){
    string teclado;
    int opcao;

    limpador();
    while  (true) {
        cout << "Voce esta logado como: " << Login  << endl;
        cout << "--------------------------------" << endl;
        cout << "[1]  - Cadastrar produto" << endl;
        cout << "[2]  - Listar produtos" << endl;
        cout << "[3]  - Listar produtos com alerta" << endl;
        cout << "[4]  - Sair" << endl;
        cout << ": ";
        cin >> teclado;
        if (teclado == "1" || teclado == "2" || teclado == "3" ||  teclado == "4") {
            opcao = stoi(teclado);
            if (teclado == "4"){
                break;
            }
            
            switch (opcao) {
                case 1:
                    CadastrarProduto();
                    limpador();
                    break;
                case 2:
                    ListarProdutos();
                    limpador();
                    break;
                case 3:
                    ListarProdutosAlerta();
                    limpador();
                    break;
            }
        }else{
            limpador();
            cout << "Opção invalida, tente novamente!" << endl;
        }
    }
}