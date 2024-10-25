#include "geral.h"

void MenuCredito(string  ArquivoTemp, string User, float ValorTotal) {

    float ValorParcela;
    int NumParcelas;
    string Op;

    string Arquivo = ArquivoFuncionarios + User + ".csv";
    int ID;
    vector<string> Linhas;

    MontarVetor(Linhas, ArquivoTemp);
    
    
    while (true){
        cout << "Digite o numero de parcelas: ";
        cin >>  NumParcelas;

        ValorParcela =  ValorTotal / NumParcelas;

        cout << "O  valor da parcela e: " << ValorParcela << endl;
        cout << "Deseja continuar? (s/n) ";
        cin >> Op;

        if  (Op == "s" ||  Op == "S"){
            for (auto& Linha: Linhas ){
            fstream ArqFun(Arquivo, ios::app);

            stringstream FixedValorParcela;
            FixedValorParcela << fixed  << setprecision(2) << ValorParcela;

            ArqFun << "\n" << UltimoID(Arquivo) << "," +Linha +"," + "Credito" + "," + to_string(NumParcelas) + "," + FixedValorParcela.str();
            ArqFun.close();
            }
            gravador(ArquivoTemp);
            remove(ArquivoTemp.c_str());
            MenuInicialCaixa(User);
            break;
        }
    }
    






    
}
