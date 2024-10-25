#ifndef UTILITARIOS_H
#define UTILITARIOS_H

#include "geral.h"

string Gerador();
void limpador();
int UltimoID(string arquivo);
stringstream ValorTotal (string ID, float Quantidade);
void MontarVetor(vector<string>& listaCompras, string ArqTemp);
void gravador(string ArquivoVendaTemp);
void AtualizarQuantidade(vector<string>& ItensEstoque, string ArquivoVendasTmp);

#endif