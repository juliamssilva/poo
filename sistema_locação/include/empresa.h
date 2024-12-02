#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
#include <stdexcept>

/**
 * @brief Classe para a empresa.
 *
 * A classe empresa é responsável por armazenar o nome e a idade de uma empresa. 
 * Realiza a sobrecarga do operador < para comparar empresas. 
 */

class empresa {
private:
    std::string nome_da_empresa;
    int idade_da_empresa;

public:

 /**
 * @brief Construtor padrão que inicializa a empresa.
 */
    empresa(const std::string &nome, int idade);

/**
 * @brief Métodos get e set para o nome e idade da empresa.
 */
 
    void set_nome(const std::string &nome);
    std::string get_nome() const;

    void set_idade(int idade);
    int get_idade() const;

/**
 * @brief Sobrecarga do operador < para comparar empresas.
 * @param other empresa a ser comparada.
 */
    bool operator<(const empresa &other) const;
};

#endif