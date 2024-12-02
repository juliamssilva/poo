#ifndef PREDIO_COMERCIAL_H
#define PREDIO_COMERCIAL_H

#include <vector>
#include "sala.h"

/**
 * @brief Classe para o prédio comercial.
 * É responsável por armazenar as salas de um prédio comercial.
 * Realiza a sobrecarga dos operadores + e - para adicionar e remover salas.
 */

class predio_comercial {
private:
    std::vector<sala*> lista_de_salas;

public:

/*
* @brief Métodos para adicionar, remover e listar as salas do prédio comercial.
*/
    void adicionar_sala(sala *sala);
    void remover_sala(sala *sala);
    void listar_salas() const;

/*
* @brief Sobrecarga dos operadores + e - para adicionar e remover salas.
*/
    predio_comercial& operator+(sala *sala);
    predio_comercial& operator-(sala *sala);

    // Declaração do  método para ordenar as salas
    void ordenar_salas(); 
};

#endif
