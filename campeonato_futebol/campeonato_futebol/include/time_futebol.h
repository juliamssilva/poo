#ifndef TIME_FUTEBOL_H
#define TIME_FUTEBOL_H

#include <vector>
#include "jogador.h"
#include "tecnico.h"

/**
 * @brief Classe para o time de futebol.
 * 
 * A classe time_futebol é responsável por armazenar as informações de um time de futebol, como o nome, o treinador, os jogadores e a pontuação.
 */
class time_futebol {
private:
    std::string nome;
    tecnico *treinador;
    std::vector<jogador> jogadores;
    int pontuacao;

public:

/**
 * @brief Construtor padrão que inicializa o nome e o treinador do time de futebol.
 * @param nome é o nome do time de futebol.
 * @param treinador é o treinador do time de futebol.
 */
    time_futebol(const std::string &nome, tecnico *treinador);

/**
 *  @brief Método get para o nome do time de futebol.
 */  
    std::string get_nome() const; // Declare o método aqui

/**
 *  @brief Método para adicionar um jogador ao time de futebol.
 */
    void adicionar_jogador(const jogador &j);

/**
 *  @brief Método para registrar o resultado do time de futebol.
 *  @param resultado é o resultado do time de futebol.
 */
    void registrar_resultado(char resultado);

/**
 *  @brief Método para exibir as informações do time de futebol.
 */
    void exibir_informacoes() const;

/**
 * @brief Sobrecarga do operador <.
 * @param outro é o outro objeto time_futebol o qual vai ser comparado.
 * @return Retorna verdadeiro se o time de futebol tiver menos pontos que o outro time de futebol e falso caso contrário.
 */
    bool operator<(const time_futebol &outro) const;
};

#endif
