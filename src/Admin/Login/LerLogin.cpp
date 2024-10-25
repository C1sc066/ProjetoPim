#include "geral.h"

void LerLogin(){
    Login Pessoa;
    string Linha;

    fstream arq(ArquivoLogins);
    limpador();
    if (!arq.is_open()){
        cout << "Erro ao abrir arquivo de logins.";
    }else{
        cout << "-----------------------" << endl; 
        while (getline(arq , Linha)){
            stringstream  ss(Linha);
            getline (ss, Pessoa.ID, ',');
            getline (ss, Pessoa.Login, ',');
            getline (ss, Pessoa.Senha, ',');
            getline (ss, Pessoa.Cargo, ',');

            cout << "ID: " << Pessoa.ID << endl;
            cout << "Login: " << Pessoa.Login << endl;
            cout << "Senha: " << Pessoa.Senha << endl;
            cout << "Cargo: " << Pessoa.Cargo << endl;
            cout << "-----------------------" << endl; 
        }
    }
    cout << "Aperte qualquer tecla para volta ao menu principal";
    _getch();    
}