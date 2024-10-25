#include "geral.h"

/*
Função: Cadastra Produtos
Descrição: Função responsável por cadastrar produtos no sistema.
Retorno: Sem retorno
*/

void CadastrarProduto(){
    limpador();
    Produto produto;
    string Op;

    produto.ID = to_string(UltimoID(ArquivoEstoque));
    cout << produto.ID;
    system("pause");

    cout << "Digite o nome do produto: ";
    // Responsavel para limpar o buffer
    cin.clear(); // Limpa o estado de erro
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada inválida

    getline(cin, produto.Nome);

    cout << "O Produto é por unidade ou  por peso? ([U]nidade/[K]G): ";
    cin >> produto.Tipo;
    
    //Verificar o tipo do produto se ele é por unidade ou KG
    if (produto.Tipo == "U" || produto.Tipo == "u"){

        produto.Tipo = "Unidade";
        
        cout << "Digite a quantidade do produto: ";
        cin >> produto.Quantidade;

        cout << "Digite o valor do produto por unidade: R$:";
        cin >> produto.Valorporunidade;
    
    }else if (produto.Tipo  == "K" || produto.Tipo ==  "k"){
        produto.Tipo = "KG";
        
        cout << "Digite a quantidade do produto em KG: ";
        cin >> produto.Quantidade;
        
        cout << "Digite o valor do produto por KG: ";
        cin >> produto.Valorporunidade;
    }
    cout << "Digite a validade do produto: ";
    cin >> produto.Validade;

    cout << "Digite o limite de estoque: ";
    cin >> produto.Limite;

    //verifica se o usuario deseja salvar o produto
    
    cout << "Confirmar as inforações" << endl;
    cout << "Nome: " << produto.Nome << endl;
    cout << "Tipo: " << produto.Tipo << endl;
    cout << "Quantidade: "  << produto.Quantidade << endl;
    cout << "Valor: R$:" << fixed << setprecision(2) << produto.Valorporunidade << endl;
    cout << "Validade: " << produto.Validade << " semanas" << endl;
    cout << "Limite: " << fixed << setprecision(0) << produto.Limite << endl;
    cout <<  "Deseja cadastrar o produto? (S/N): ";
    cin >> Op;

    limpador();

    if (Op == "S" || Op == "s"){
        // Abre o arquivo na ultima linha e salva as informações
        fstream Arc(ArquivoEstoque, ios::app);
        Arc << "\n" << produto.ID <<"," << produto.Nome <<"," << produto.Tipo << "," << produto.Quantidade << "," << produto.Valorporunidade << "," << produto.Validade << "," << produto.Limite;
    }
}