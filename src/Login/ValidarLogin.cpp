#include "geral.h"
/*
Função: Validador
Descrição:  Função responsável por validar as informações de entrada do usuário.
Parâmetros: Recebe uma variavel do tipo string que contem o login e senha
Retorno: Se o login e senha for verdadeiro vai retornar o cargo do usuário e o usuário digitado
*/
void ValidaLogin(string Username, string Password) {
    string Linha;
    string Cargo;
    bool  logado = false;
    Login User;

    fstream Arq(ArquivoLogins);
    //Verifica se o arquivo foi aberto corretamente
    if  (Arq.is_open()) {
        //Passa linha por linha do arquivo Logins.csv
        while (getline(Arq, Linha)){
            stringstream ss2(Linha);
            //Faz a formatação das linhas do arquivo

            getline(ss2, User.ID, ','); // ID
            getline(ss2, User.Login, ','); // Usuario
            getline(ss2, User.Senha, ','); //Senha
            getline(ss2, User.Cargo, ','); //Cargo
            //Verificar se a senha e login do usuário está correto 
            if (User.Login == Username && User.Senha == Password) {
                Cargo = User.Cargo;
                logado = true;
                break;
            }else{
                logado = false;
            }
        }
    }
    if (logado){
        VerificarMenu(Cargo, User.Login);
    }else{
        cout << "Login ou senha invalido" << endl;
    }
}