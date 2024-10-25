#include "geral.h"

void LerFornecedores(){
    Fornecedor pessoa;
    string Linha;

    fstream arc(ArquivoFornecedores);
    limpador();
    if (arc.is_open()) {
        cout << "-----------------------" << endl; 
        while(getline(arc, Linha)){
            stringstream ss(Linha);

            getline(ss, pessoa.ID, ',');
            getline(ss, pessoa.Nome, ',');
            getline(ss, pessoa.Telefone, ',');
            getline(ss, pessoa.Descricao, ',');

            cout <<  "ID: " << pessoa.ID << endl;
            cout <<  "Nome: " << pessoa.Nome << endl;
            cout <<  "Telefone: " << pessoa.Telefone << endl;
            cout <<  "Descrição: " << pessoa.Descricao << endl;
            cout << "-----------------------" << endl; 
        }
    }
    cout << "Aperte qualquer tecla para volta ao menu principal";
    _getch();    
}