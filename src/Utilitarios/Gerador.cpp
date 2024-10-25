#include "geral.h"

/*
Função: Gerador
Descrição: Gera um numero aleorio que vai servir como nome para um arquivo temporario
Retorno: Vai retornar o caminho absoluto para o arquivo

*/

string Gerador() {
    string dir, final;
    random_device rd; //Cria um dispositivo de geração de números aleatórios
    mt19937 gen(static_cast<unsigned int>(time(0)));  //Utiliza o tempo para gerar o numero
    uniform_int_distribution<> dist(1, 1000); //Limita a geração de 1 a 1000


    dir = ArquivoTemp; // Recebe o diretorio temporario
    final = dir + to_string(dist(gen))+".csv"; 

    return final;
}