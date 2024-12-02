#ifndef JOGADOR_H
#define JOGADOR_H

#include "membro_clube.h"
#include <string>

/**
 * @brief Classe para o jogador.
 * 
 * A classe jogador armazena as informações de um jogador, como sua posição e os gols marcados por ele.
 */

class jogador: public membro_clube {
private:
    std::string posicao;
    int gols_marcados;

public:

/**
 * @brief Construtor padrão que inicializa o nome, a idade, o salário, a sua posição em campo e gols marcados do jogador.
 */      
    jogador(const std::string &nome, int idade, double salario, const std:: string &posicao, int gol);

/**
 * @brief Método destrutor
 */
    virtual ~jogador() = default;

/**
 * @brief Método para calcular o salário do jogador.
 * @return Retorna o salário do jogador.
 */
    double calcular_salario() const override;

/**
 *  @brief Método para exibir as informações do jogador.
 */
    void exibir_informacoes() const override;

/**
 * @brief Método para sobrecarregar o operador <.
 * @param outro vai ser o outro objeto jogador o qual vai ser comparado.
 * @return Retorna verdadeiro se o jogador tiver menos gols marcados que o outro jogador e falso caso contrário. 
 */
    bool operator<(const jogador &outro) const;

};


#endif