#ifndef SALA_COMPARTILHADA_H
#define SALA_COMPARTILHADA_H

#include "sala.h"

/* 
* @brief Classe que representa uma sala compartilhada e possui numero de estações disponíveis
*/

class sala_compartilhada : public sala {
private:
    int numero_de_estacoes_disponiveis;

public:

/*
* @brief Construtor da classe sala_compartilhada
*/
    sala_compartilhada(int numero, int andar, int estacoes);

/*
* @brief Método para calcular o preço da sala compartilhada
*/
    double calcula_preco() const override;
};

#endif
