#include "geral.h"

void MenuFinalizar(string ArqTemp,  string User){
    float total;
    string Op;
    
    total = ValorTotalCompra(ArqTemp);

    cout << "Voce esta logado como: " << User << endl;
    cout << "Total: R$" << fixed << setprecision(2) << total << endl; 

    cout << "[1]  - Pagamento com Cartao de Debito" << endl;
    cout << "[2]  - Pagamento com Cartao de Credito" << endl;
    cout << ": ";
    cin >> Op;

    if (Op == "1"){
        Debito(total, ArqTemp, User);
    } else if (Op == "2"){
        MenuCredito(ArqTemp, User,  total);

    }

}
