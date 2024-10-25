#include "geral.h"

void MontarVetor(vector<string>& listaCompras, string ArqTemp){
    string Linha;

    fstream arquivo(ArqTemp);

    while (getline(arquivo, Linha)){
        listaCompras.push_back(Linha);
    }
}