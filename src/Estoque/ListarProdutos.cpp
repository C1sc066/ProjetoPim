#include "geral.h"

/*
Função: Listar Produtos
Descrição: Função responsável por listar todos os produtos cadastrados no sistema.

*/

void ListarProdutos(){
    string Linha, Saida;
    Produto produto;
    //Abre o arquivo em modo de leitura
    ifstream arq(ArquivoEstoque);
    cout << "------------------------" << endl;
    // Passa o ponteiro em cada linha do arquivo
    while(getline(arq, Linha)){
        stringstream ss (Linha);
        // Organiza  os dados em uma uma estrutura de dados
        getline (ss, produto.ID, ',');
        getline (ss, produto.Nome, ',');
        getline (ss, produto.Tipo, ',');
        ss >> produto.Quantidade;
        ss.ignore();
        ss >> produto.Valorporunidade;
        ss.ignore();
        getline(ss, produto.Validade, ',');
        ss >> produto.Limite;
        //Verificar se o item foi armazenado pode unidade 

        if (produto.Tipo == "Unidade"){
            cout << "ID: " << produto.ID << endl;
            cout << "Nome: " << produto.Nome << endl;
            cout << "Tipo: " << produto.Tipo << endl;
            cout << "Quantidade: " << produto.Quantidade << endl;
            cout << "Valor por unidade: R$:" << fixed << setprecision(2) << produto.Valorporunidade << endl;
            cout << "Validade: " << produto.Validade << " Semanas"<< endl;
            cout << "Limite: " << fixed << setprecision(0) << produto.Limite << endl;
            cout << "------------------------" << endl;
            //Verificar se o item foi armazenado pode unidade 
        }else{
            cout << "ID: " << produto.ID << endl;
            cout << "Nome: " << produto.Nome << endl;
            cout << "Tipo: " << produto.Tipo << endl;
            cout << "Quantidade: " << produto.Quantidade << endl;
            cout << "Valor por unidade: R$:" << fixed << setprecision(2) << produto.Valorporunidade << endl;
            cout << "Validade: " << produto.Validade << " Semanas"<< endl;
            cout << "Limite: " << fixed << setprecision(2) <<  produto.Limite << " KG" << endl;
            cout << "------------------------" << endl;
        }
    } 
    cout << "Aperte qualquer tecla para volta ao menu principal";
    _getch();
}