#ifndef CAIXA_H
#define CAIXA_H

#include "geral.h"

//  Menu
void MenuInicialCaixa(string User);
void MenuVendas(string ArqTemp, string User);
void PassarProduto(string ArqTemp);
void MenuEditarListaCompras(string ArqTemp);
void EditarQuantidade(string ArqTemp);
void RemoverItem(string ArquivoTemp); 
void MenuFinalizar(string ArqTemp,  string User);
float ValorTotalCompra (string ArquivoTemp);
void Debito(float Valor, string ArqTemp, string User);
void MenuCredito (string  ArquivoTemp, string User, float ValorTotal);

#endif