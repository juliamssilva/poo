#ifndef SALA_PRIVATIVA_H
#define SALA_PRIVATIVA_H

#include "sala.h"

/*  
* @brief Classe para a sala privativa onde existe a capacidade maxima de pessoas.
*/
class sala_privativa : public sala {
private:
    int capacidade_maxima_de_pessoas;

public:

/*
* @brief Construtor padrão que inicializa a sala privativa com número, andar e capacidade.
*/
    sala_privativa(int numero, int andar, int capacidade);

/*
* @brief Métodos para calcular o preço da sala privativa.
*/
    double calcula_preco() const override;
};

#endif
