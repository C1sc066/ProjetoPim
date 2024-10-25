#include "geral.h"

void gravador(string ArquivoVendaTemp){
    vector<string> ItensEstoque;

    MontarVetor(ItensEstoque, ArquivoEstoque);
    AtualizarQuantidade(ItensEstoque, ArquivoVendaTemp);

    ofstream Estoque(ArquivoEstoque);

    for (auto&  item : ItensEstoque){
        Estoque << item << "\n";
    }
    Estoque.close();
}