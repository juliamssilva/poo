#include "juiz.h"
#include <iostream>

// Construtor padrão que inicializa o nome e a idade do juiz.
juiz::juiz(std::string nome, int idade): pessoa(nome,idade), partidas_arbitradas(0) {} 

// Método para incrementar a quantidade de partidas que o juiz já arbitrou.
void juiz::incrementar_partidas_arbitradas(){ 
    partidas_arbitradas++; 
}

// Método para exibir as informações do juiz.
void juiz::exibir_informacoes() const {
    std::cout << "Juiz: " << nome << "\nPartidas Arbitradas: " << partidas_arbitradas << std::endl;
}