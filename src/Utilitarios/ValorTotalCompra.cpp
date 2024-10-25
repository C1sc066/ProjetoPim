#include "geral.h"

float ValorTotalCompra (string ArquivoTemp){
    string  Nome, linha;
    int ID;
    float Quantidade, Valor, total = 0;

    fstream Arq (ArquivoTemp);

    while (getline(Arq, linha)){
        stringstream ss (linha);
        ss >> ID;
        ss.ignore();
        getline(ss, Nome, ',');
        ss >> Quantidade;
        ss.ignore();
        ss >> Valor;

        total = total + Valor;
    }
    return total;

}