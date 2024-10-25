@echo off

set Caixa=D:/System/Documents/Projetinho/ProjetoFinal/src/Caixa
set Admin=D:/System/Documents/Projetinho/ProjetoFinal/src/Admin
set Menu=D:/System/Documents/Projetinho/ProjetoFinal/Menus
set Estoque=D:/System/Documents/Projetinho/ProjetoFinal/src/Estoque
set Login=D:/System/Documents/Projetinho/ProjetoFinal/src/Login
set main=D:/System/Documents/Projetinho/ProjetoFinal/main
set Utilitarios=D:/System/Documents/Projetinho/ProjetoFinal/src/Utilitarios

g++ -I include -I models^
        ^
        %Login%/TelaLogin.cpp^
        %Login%/ValidarLogin.cpp^
        %Login%/VerificadoDeLogin.cpp^
        ^
        %Admin%/Login/AddLogin.cpp^
        %Admin%/Login/LerLogin.cpp^
        %Admin%/Login/LerLoginCargo.cpp^
        %Admin%/Fornecedor/CadastrarFornecedor.cpp^
        %Admin%/Fornecedor/LerFornecedores.cpp^
        ^
        %Estoque%/CadastrarProduto.cpp^
        %Estoque%/ListarProdutos.cpp^
        %Estoque%/ListarProdutosAlerta.cpp^
        ^
        %main%/main.cpp^
        ^
        %Caixa%/PassarProduto.cpp^
        %Caixa%/EditarQuantidade.cpp^
        %Caixa%/RemoverItem.cpp^
        %Caixa%/Debito.cpp^
        %Caixa%/Credito.cpp^
        ^
        %Utilitarios%/Gerador.cpp^
        %Utilitarios%/UltimoID.cpp^
        %Utilitarios%/Limpador.cpp^
        %Utilitarios%/ValorTotalProduto.cpp^
        %Utilitarios%/MonstarVetor.cpp^
        %Utilitarios%/ValorTotalCompra.cpp^
        %Utilitarios%/AtualizarQuantidade.cpp^
        %Utilitarios%/Gravador.cpp^
        ^
        %Menu%/Estoque/Estoque.cpp^
        %Menu%/Caixa/MenuVendas.cpp^
        %Menu%/Caixa/MenuInicial.cpp^
        %Menu%/Caixa/MenuEditarListaCompras.cpp^
        %Menu%/Caixa/MenuFinalizar.cpp^
        %Menu%/Admin/Admin.cpp^
        %Menu%/Admin/MenuFornecedores.cpp^
        %Menu%/Admin/MenuLogins.cpp^
        -o main

pause