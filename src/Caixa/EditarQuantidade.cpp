#include "geral.h"

void EditarQuantidade(string ArqTemp){

    vector<string>  listaCompras;
    string ID, Nome, UserID;
    float Quantidade, valor;
    MontarVetor(listaCompras, ArqTemp);
    stringstream Quant;
    
    cout  <<  "----------------------------------------" << endl;
    for (auto&  item : listaCompras){
        stringstream ss (item);

        getline(ss, ID, ',');
        getline(ss, Nome, ',');
        ss >> Quantidade;
        ss.ignore();
        ss >> valor;

        cout <<  "ID: " << ID << endl;
        cout <<  "Nome: " << Nome << endl;
        cout <<  "Quantidade: " << fixed  << setprecision(0) << Quantidade << endl;
        cout <<  "Valor: R$:" << fixed << setprecision(2) << valor << endl;
        cout  <<  "----------------------------------------" << endl;
    }

    cout << "Digite o ID do produto que deseja editar: " << endl;
    cin >> UserID;

    for (auto&  item : listaCompras){
        stringstream ss (item);

        getline(ss, ID, ',');
        getline(ss, Nome, ',');
        ss >> Quantidade;
        ss.ignore();
        ss >> valor; 
        if  (ID == UserID){
            cout << "Digite a nova quantidade: " << endl;
            cin  >> Quantidade;
            if   (Quantidade < 1){

                Quant << fixed << setprecision(2) << Quantidade;
            }else{
                
                Quant << fixed << setprecision(0) << Quantidade;
            }

            
            item = ID + "," +  Nome + "," + Quant.str() + "," + ValorTotal(ID, Quantidade).str();
        }
    }
    ofstream arq(ArqTemp);
    for  (auto&  item : listaCompras){
        
        arq  << item << "\n";
    }
}