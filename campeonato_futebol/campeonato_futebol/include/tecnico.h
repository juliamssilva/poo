#ifndef TECNICO_H
#define TECNICO_H

#include "membro_clube.h"

/**
 * @brief Classe para o técnico.
 * 
 * A classe técnico é uma classe que armazena as informações de um técnico, como a sua experiência.
 */
class tecnico: public membro_clube {
private:
    int experiencia;

public:

/**
 * @brief Construtor padrão que inicializa o nome, a idade, o salário e a experiência do técnico.
 * @param nome é o nome do técnico.
 * @param idade é a idade do técnico.
 * @param salario é o salário do técnico.
 * @param experiencia é a experiência do técnico.
 */
    tecnico(const std:: string &nome, int idade, double salario, int experiencia);
    virtual ~tecnico() = default;

/**
 *  @brief Método para calcular o salario do técnico.
 * @return Retorna o salário do técnico.
 */
    double calcular_salario() const override;

/**
 * @brief Método para exibir as informações do técnico. 
 */
    void exibir_informacoes() const override;

};

#endif 