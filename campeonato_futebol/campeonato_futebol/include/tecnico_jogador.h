#ifndef TECNICO_JOGADOR_H
#define TECNICO_JOGADOR_H

#include "jogador.h"
#include "tecnico.h"

/**
 * @brief Classe para o técnico jogador.
 * 
 * A classe tecnico_jogador é uma classe que armazena as informações de um técnico que também é jogador, como o seu bônus duplo papel.
 */
class tecnico_jogador: public jogador, public tecnico {
private:
    double bonus_duplo_papel;

public:

/**
 *  @brief Construtor padrão que inicializa o nome, a idade, o salário, a posição, os gols, a experiência e o bônus duplo do técnico jogador.
 */
    tecnico_jogador(const std::string &nome, int idade, double salario, const std::string &posicao, int gols, int experiencia, double bonus);

/**
 *  @brief Método para calcular o salário do técnico jogador.
 */
    double calcular_salario() const override;

/**
 *  @brief Método para exibir as informações do técnico jogador.
 */
    void exibir_informacoes() const;
};


#endif