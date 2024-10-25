#include "geral.h"

/*
  Função: AddLogin
  Descrição: Registra um novo login no sistema.
  Retorno: Não retorna nada.
*/
void AddLogin() {
    string SN;
    Login novologin;
    int userId, Op = 0; // Inicializa Op para evitar uso de valor não inicializado
    string arquivo = ArquivoFuncionarios;
    limpador();
    
    novologin.ID = to_string(UltimoID(ArquivoLogins));

    cout << "Login: ";
    cin >> novologin.Login;

    limpador();

    cout << "Senha: ";
    cin >> novologin.Senha;

    limpador();

    // Loop para garantir que o usuário escolha um cargo válido
    while (Op != 1 && Op != 2 && Op != 3) {
        cout << "[1] Admin" << endl;
        cout << "[2] Caixa" << endl;
        cout << "[3] Estoque" << endl;

        cin >> Op; // Lê a opção escolhida
        switch (Op) {
            case 1:
                novologin.Cargo = "Admin"; // Define o cargo como Admin
                break;
            case 2:
                novologin.Cargo = "Caixa"; // Define o cargo como Caixa
                break;
            case 3:
                novologin.Cargo = "Estoque"; // Define o cargo como Estoque
                break;
            default:
                limpador();
                cout << "Opcao invalida!\n"; // Mensagem de erro para opção inválida
                break;
        }
    }
    limpador();
    //Confirma se o usuário deseja continuar com o cadastro do novo login no sistema 
    cout << "Login: " << novologin.Cargo << endl;
    cout << "Senha: " << novologin.Senha << endl;
    cout << "Cargo: " << novologin.Cargo << endl;

    cout << "Deseja  adicionar o login? (S/N): ";
    cin >> SN;
    // Se sim
    if (SN == "S" || SN == "s") {
        //Caso ele for no cargo de caixa, vai esta esta criando um arquivo CSV com o nome dele para o seu registro de vendas
        if (novologin.Cargo == "Caixa"){
            arquivo = arquivo + novologin.Login  + ".csv";
            ofstream arc(arquivo);
            arc.close();
        }

        // Abre o arquivo de login e grava as informações do novo usuário
        fstream Arquivo(ArquivoLogins, ios::app);
        if (Arquivo.is_open()) {
            Arquivo << "\n" << novologin.ID << "," << novologin.Login << "," << novologin.Senha << "," << novologin.Cargo;
            Arquivo.close(); // Fecha o arquivo
        }else{
            cout << "Não foi possível abrir o arquivo" << endl;
        }
    }
}
