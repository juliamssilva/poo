#include "tecnico_jogador.h"
#include <iostream>

// Construtor padrão que inicializa o nome, a idade, o salário, a posição, os gols, a experiência e o bônus duplo do técnico jogador.
tecnico_jogador::tecnico_jogador(const std::string &nome, int idade, double salario, const std::string &posicao, int gols, int experiencia, double bonus) : jogador(nome, idade, salario, posicao, gols), tecnico(nome, idade, salario, experiencia), bonus_duplo_papel(bonus) {} 

// Método para calcular o salário do técnico jogador de acordo com seu bonus especifico.
double tecnico_jogador::calcular_salario() const {
    return jogador::calcular_salario() + tecnico::calcular_salario() + bonus_duplo_papel;
}

// Método para exibir as informações do técnico jogador.
void tecnico_jogador::exibir_informacoes() const {
    jogador::exibir_informacoes();
    tecnico::exibir_informacoes();
    std::cout << "Bonus duplo papel: " << bonus_duplo_papel << std::endl;
}