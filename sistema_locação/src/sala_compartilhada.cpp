#include "sala_compartilhada.h"

#define VALOR 86.0

//Método construtor da sala compartilhada
sala_compartilhada::sala_compartilhada(int numero, int andar, int estacoes) 
    : sala(numero, andar), numero_de_estacoes_disponiveis(estacoes) {}

double sala_compartilhada::calcula_preco() const {
    return numero_de_estacoes_disponiveis * VALOR;  
}
