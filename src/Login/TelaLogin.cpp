#include "geral.h"

// 8 é o codigo ASCCI para backspace

/*
Função: Login
Descrição: esta função é para realizar o login do usuário
Retorno: Retorna uma variavel com o login e senha digitado pelo usuário
*/
void login() {
    string username;
    string password; 
    char ch;

    cout << "Digite  o seu nome de usuario: ";
    cin >> username;
    cout << "Digite sua Senha: ";
    // vai esperar  ue o usuario digite qualquer caracter sem precisar apertar enter
    ch = _getch();
    
    // Este while vai se repetir até que o usuário precione o enter, e vai esta formatando a senha com "*"
    // 13 é o codigo ASCCI para enter
    while (ch != 13){
        // Vai esta salvando todos os caracteres que o usuário digitar, exceto o enter

        // 8 é o codigo ASCCI para backspace
        if (ch != 8) {
            password.push_back(ch);
            cout << "*";
        // Quando for apertado o backspace ele vai remover o ultimo caractere digitado do vetor e apagar um "*"
        }else if(!password.empty()){ 
            cout  << "\b \b";
            password.pop_back();
        }
        ch = _getch();
    }
    ValidaLogin(username, password);
}