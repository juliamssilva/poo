#ifndef JUIZ_H
#define JUIZ_H

#include "pessoa.h"

/**
 * @brief Classe para o juiz.
 * 
 * A classe juiz armazena as informações de um juiz, como a quantidade de partidas que ele já arbitrou.
 */

class juiz: public pessoa {
private:
    int partidas_arbitradas;

public:

/**
 * @brief Construtor padrão que inicializa o nome e a idade do juiz.
 * @param nome é o nome do juiz.
 * @param idade é a idade do juiz.
 */
    juiz(std::string nome, int idade);

/**
 *  @brief Método para incrementar a quantidade de partidas que o juiz já arbitrou.
 */
    void incrementar_partidas_arbitradas();

/**
 *  @brief Método para exibir as informações do juiz.
 */
    void exibir_informacoes() const override;
};

#endif