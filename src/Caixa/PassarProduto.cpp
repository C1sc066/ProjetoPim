#include "geral.h"

void PassarProduto(string ArqTemp){
    string ID, Quant, Linha;
    Produto item;
    float QuantFloat;
    limpador();

    fstream Arq (ArquivoEstoque);

    cout << "Digite o ID do produto: ";
    cin  >> ID;

    while (getline(Arq, Linha)){
        stringstream ss (Linha);
        getline (ss, item.ID, ',');
        getline (ss, item.Nome, ',');
        getline (ss, item.Tipo, ',');
        ss >> item.Quantidade;
        ss.ignore();
        ss >> item.Valorporunidade;
        ss.ignore();
        getline(ss, item.Validade, ',');
        ss >> item.Limite;  
        
        if  (item.ID == ID){
            break;
        }
    }
    Arq.close();

    
    limpador();
    
    while(true){
        cout << "Digite a quantidade do produto: ";
        cin >> Quant;
        QuantFloat = stof(Quant);

        if (QuantFloat > item.Quantidade){
            cout << "Quantidade insuficiente" << endl;
        }else{
            break;
        }
    }
    fstream vendas(ArqTemp, ios::app);

    if (vendas.is_open()){
        vendas << item.ID << "," << item.Nome << "," << QuantFloat << "," << ValorTotal(ID, QuantFloat).str() << endl; 
        vendas.close();
    }else{
        cout << "Não foi aberto" << endl;
    }
}