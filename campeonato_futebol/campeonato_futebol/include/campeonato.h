#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include <vector>
#include "time_futebol.h"
#include "jogo.h"

/**
 * @brief Classe para o campeonato.
 *
 * A classe campeonato é responsável por armazenar os times e os jogos de um campeonato, além de ter um nome para tal.
 */

class campeonato {
private:
    std:: string nome_campeonato;
    std::vector<time_futebol*> times;
    std::vector<jogo*> jogos;

public:

 /**
 * @brief Construtor padrão que inicializa o nome do campeonato.
 */
    campeonato(const std:: string &nome);
    
/**
 * @brief Método para adicionar o time ao campeonato.
 */
    void adicionar_time(time_futebol* t);


/**
 * @brief Método para adicionar o jogo ao campeonato.
 */
    void adicionar_jogo(jogo *j);

/**
 * @brief Método para exibir a classificação do campeonato.
 */
     void exibir_classificacao() const;

};

#endif

