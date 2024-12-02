#ifndef SALA_H
#define SALA_H

#include <vector>
#include "empresa.h"

/**
 * @brief Classe para a sala.
 *
 * A classe sala é responsável por armazenar o número e o andar de uma sala. 
 * Realiza a sobrecarga dos operadores <, + e - para comparar salas e adicionar ou remover empresas.
 */

class sala {
protected:
    int numero_da_sala;
    int andar;
    std::vector<empresa> lista_de_empresas_loc;// Vetor para as empresas locatárias

public:

/**
* @brief Construtor padrão que inicializa a sala com número e andar.
*/
    sala(int numero, int andar);
    
/**
* @brief Destrutor padrão.
*/
    virtual ~sala() = default;

/**
* @brief Métodos get e set para o número e andar da sala.
*/
    void set_numero(int numero);
    int get_numero() const;

    void set_andar(int andar);
    int get_andar() const;

    std::vector<empresa> get_empresas() const;

/**
* @brief Método virtual puro para calcular o preço da sala.
*/
    virtual double calcula_preco() const = 0;

/**
* @brief Sobrecarga dos operadores.
*/
    bool operator<(const sala &other) const;

    sala& operator+(const empresa &empresa);
    sala& operator-(const empresa &empresa);

    // Declaração do novo método ordenar_salas
};

#endif
