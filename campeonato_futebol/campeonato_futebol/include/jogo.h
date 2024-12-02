#ifndef JOGO_H
#define JOGO_H

#include "time_futebol.h"
#include "juiz.h"

/**
 * @brief Classe para o jogo.
 * 
 * A classe jogo armazena as informações de um jogo, como o time da casa e o time visitante,o juiz do jogo e o *resultado do jogo.
 */

class jogo {
private:
    time_futebol *time_casa;
    time_futebol *time_visitante;
    juiz *juiz_principal;
    int gols_time_casa;
    int gols_time_visitante;

public:

/**
* @brief Construtor padrão que inicializa o time da casa, o time visitante e o juiz do jogo.
*/
    jogo(time_futebol *time_casa, time_futebol *time_visitante, juiz *principal);

/**
 *  @brief Método para registrar o resultado do jogo.
 */
    void registrar_resultado(int gols_casa, int gols_visitante);

/**
 * @brief Método para exibir as informações do jogo.
 */
    void exibir_informacoes() const;  

};

#endif
