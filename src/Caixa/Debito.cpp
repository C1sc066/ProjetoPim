#include "geral.h"

void Debito(float Valor, string ArqTemp, string User){
    string Arquivo = ArquivoFuncionarios + User + ".csv";
    int ID;
    vector<string> Linhas;

    MontarVetor(Linhas, ArqTemp);
    
    for (auto& Linha: Linhas ){
        fstream ArqFun(Arquivo, ios::app);
        ArqFun << "\n" << UltimoID(Arquivo) << "," +Linha +"," + "Debito"+", , ";
        ArqFun.close();
    }
   gravador(ArqTemp);
   remove(ArqTemp.c_str());
   MenuInicialCaixa(User);
}