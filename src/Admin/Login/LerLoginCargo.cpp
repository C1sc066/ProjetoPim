#include "geral.h"

void LerLoginCargo(){
    Login Pessoa;
    string Linha, Op, Cargo;
    limpador();
    while (true){
        
        cout << "Qual Cargo deseja ver?" << endl;
        cout << "[1] Admin" << endl;
        cout << "[2] Estoque" << endl;
        cout << "[3] Caixa" << endl;
        cin >> Op;
        if (Op == "1"){
            Cargo = "Admin";
            break;
        }else if (Op == "2"){
            Cargo = "Estoque";
            break;
        }else if (Op ==  "3"){
            Cargo = "Caixa";
            break;
        }
    }
    



    fstream Arq(ArquivoLogins);
    if (Arq.is_open()){
        cout << "-----------------------" << endl; 
        while(getline(Arq, Linha)){
            stringstream ss (Linha);
            getline(ss , Pessoa.ID, ',');
            getline(ss , Pessoa.Login, ',');
            getline(ss , Pessoa.Senha, ',');
            getline(ss , Pessoa.Cargo, ',');

            if (Pessoa.Cargo == Cargo){
                cout << "ID: " << Pessoa.ID << endl;
                cout << "Login: " << Pessoa.Login << endl;
                cout << "Senha: " << Pessoa.Senha << endl;
                cout << "Cargo: " << Pessoa.Cargo << endl;
                cout << "-----------------------" << endl; 
            }
        }
    }
    cout << "Aperte qualquer tecla para volta ao menu principal";
    _getch();       
}