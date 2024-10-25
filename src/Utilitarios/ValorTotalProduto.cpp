#include "geral.h"

stringstream ValorTotal (string ID, float Quantidade){
    Produto item;
    string linha;
    fstream arc(ArquivoEstoque);
    float total = 0;

    while (getline(arc, linha)){
        stringstream ss(linha);
        getline (ss, item.ID, ',');
        getline (ss, item.Nome, ',');
        getline (ss, item.Tipo, ',');
        ss >> item.Quantidade;
        ss.ignore();
        ss >> item.Valorporunidade;
        ss.ignore();
        getline(ss, item.Validade, ',');
        ss >> item.Limite; 

        if(ID == item.ID){

            total = item.Valorporunidade  * Quantidade;
            break;
        }
    }
    stringstream TotalValor;
    TotalValor << fixed << setprecision(2) << total;

    return TotalValor;
}