#ifndef MEMBRO_CLUBE_H
#define MEMBRO_CLUBE_H

#include "pessoa.h"

/**
 * @brief Classe para o membro do clube.
 * 
 * A classe membro_clube é uma classe abstrata que armazena as informações de um membro do clube, como o  seu * *salário.
 */

class membro_clube : public pessoa {
protected:
    double salario;

public:

/**
 *  @brief Construtor padrão que inicializa o nome, a idade e o salário do membro do clube.
 *  @param nome é o nome do membro do clube.
 *  @param idade é a idade do membro do clube.
 * @param salario é o salário do membro do clube.
 */
    membro_clube(const std::string &nome, int idade, double salario);
    virtual ~membro_clube() = default;

/**
 *  @brief Métodos get e set para o salário do membro do clube.
*/
    double get_salario() const;
    void set_salario(double salario);

/**
 *  @brief Método virtual puro para calcular o salário do membro do clube.
 * @return Retorna o salário do membro do clube.
 */
    virtual double calcular_salario() const = 0;

/** 
 *  @brief Sobrecarga do operador << para a classe membro_clube.
 *  
 *  Esta função permite a impressão de objetos da classe membro_clube 
 *  usando o fluxo de saída (std::ostream).
 * 
 *  @param os O fluxo de saída onde o objeto será impresso.
 *  @param membro O objeto membro_clube que será impresso.
 *  @return Uma referência ao fluxo de saída atualizado.
 */
    friend std::ostream &operator<<(std::ostream &os, const membro_clube &membro);
};

#endif // MEMBRO_CLUBE_H
