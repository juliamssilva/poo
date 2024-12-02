#include "jogador.h"
#include <iostream>
#include <string>

// Construtor padrão que inicializa o nome, a idade, o salário, a sua posição em campo e gols marcados do jogador.
jogador::jogador(const std::string &nome, int idade, double salario, const std::string &posicao, int gol): 
    membro_clube(nome,idade,salario), posicao(posicao), gols_marcados(gol){} 

//Calculo de bonus para o jogador de acordo com os gols marcados
double jogador::calcular_salario() const{
    return salario + (gols_marcados * 100);
}

 // Método para exibir as informações do jogador.
void jogador::exibir_informacoes() const{
    membro_clube::exibir_informacoes();
    std::cout << "Posicao: " << posicao << std::endl;
    std::cout << "Gols marcados: " << gols_marcados << std::endl;
}

// Método para sobrecarregar o operador <.
bool jogador:: operator<(const jogador &outro) const{
    return this->gols_marcados < outro.gols_marcados;
}
