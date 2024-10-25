#include "geral.h"

int UltimoID(string arquivo) {
    string ID, Saida;
    int AID;
    //Abre o arquivo
    fstream Arquivo(arquivo);

    //Le linha por linha do arquivo
    while (getline(Arquivo, Saida)) {
        stringstream ss (Saida);
        //Pega o ID de cada linha
        getline(ss, ID, ',');
    }
    return AID = stoi(ID) + 1;
}