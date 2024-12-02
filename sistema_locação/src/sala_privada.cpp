#include "sala_privativa.h"

#define VALOR 100.0

//Método construtor da sala privativa
sala_privativa::sala_privativa(int numero, int andar, int capacidade) 
    : sala(numero, andar), capacidade_maxima_de_pessoas(capacidade) {}

// Metodo para calcular o preço da sala privativa
double sala_privativa::calcula_preco() const {
    return capacidade_maxima_de_pessoas * VALOR;  // Exemplo de cálculo de preço
}
