#include "geral.h"

void AddFornecedor (){
    Fornecedor NovoFornecedor;
    string Op;
    limpador();

    NovoFornecedor.ID = to_string(UltimoID(ArquivoFornecedores));

    cout << "Digite o nome do fornecedor: ";
    // Responsavel para limpar o buffer
    cin.clear(); // Limpa o estado de erro
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada inválida
    
    getline(cin, NovoFornecedor.Nome);

    limpador();

    cout << "Digite o telefone do fornecedor: ";
    cin >> NovoFornecedor.Telefone;

    limpador();

    cout << "Digite a descrição do fornecedor: ";
    cin.clear(); // Limpa o estado de erro
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada inválida
    getline(cin, NovoFornecedor.Descricao);

    limpador();

    cout << "Nome: " << NovoFornecedor.Nome << endl;
    cout << "Telefone: " << NovoFornecedor.Telefone << endl;
    cout << "Descrição: " << NovoFornecedor.Descricao << endl;

    cout << "Deseja  salvar o fornecedor? (S/N) ";
    cin >> Op;

    if  (Op == "S" || Op == "s"){
        fstream Arc(ArquivoFornecedores, ios::app);
        if (Arc.is_open()) {
            Arc << "\n" << NovoFornecedor.ID << "," << NovoFornecedor.Nome<< "," << NovoFornecedor.Telefone<< "," <<  NovoFornecedor.Descricao;
        }
    }
}