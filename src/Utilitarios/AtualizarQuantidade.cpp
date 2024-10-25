#include "geral.h"

void AtualizarQuantidade(vector<string>& ItensEstoque, string ArquivoVendasTmp){
    string Linha, ID, Nome;
    float QuantidadeVendida;
    Produto produto;
    ifstream Arquivo(ArquivoVendasTmp);
    
    while (getline(Arquivo, Linha)){
        stringstream ss (Linha);

        getline(ss,  ID, ',');
        getline(ss, Nome, ',');
        ss >> QuantidadeVendida;


        for (auto& item : ItensEstoque){
            stringstream ss2 (item);
            getline (ss2, produto.ID, ',');
            getline (ss2, produto.Nome, ',');
            getline (ss2, produto.Tipo, ',');
            ss2 >> produto.Quantidade;
            ss2.ignore();
            ss2 >> produto.Valorporunidade;
            ss2.ignore();
            getline(ss2, produto.Validade, ',');
            ss2 >> produto.Limite; 

            if (ID == produto.ID){
                
                
                stringstream FixedValor;
                stringstream FixedQuantidade;
                stringstream FixedLimite;

                if (produto.Tipo == "Unidade"){
                    produto.Quantidade -= QuantidadeVendida;

                    FixedQuantidade <<  fixed << setprecision(0) << produto.Quantidade;
                    FixedValor << fixed << setprecision(2)<< produto.Valorporunidade;
                    FixedLimite <<  fixed << setprecision(0)<< produto.Limite;

                    item = produto.ID + "," + produto.Nome + "," + produto.Tipo + "," + FixedQuantidade.str() + "," + FixedValor.str() + "," + produto.Validade + "," + FixedLimite.str(); 
                }else if (produto.Tipo == "KG"){
                    produto.Quantidade -= QuantidadeVendida;

                    FixedQuantidade <<  fixed << setprecision(2) << produto.Quantidade;
                    FixedValor << fixed << setprecision(2)<< produto.Valorporunidade;
                    FixedLimite << fixed << setprecision(0) << produto.Limite;

                    item = produto.ID + "," + produto.Nome + "," + produto.Tipo + "," + FixedQuantidade.str() + "," + FixedValor.str() + "," + produto.Validade + "," + FixedLimite.str(); 
                }
            }            
        }
    }
}