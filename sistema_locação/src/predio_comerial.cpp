#include "predio_comercial.h"
#include "sala.h"
#include "empresa.h"
#include <algorithm>
#include <iostream>

// Implementação do método para ordenar as salas
void predio_comercial::ordenar_salas() {
    std::sort(lista_de_salas.begin(), lista_de_salas.end(), [](sala* a, sala* b) { return *a < *b; });
}

// Método para adicionar salas ao prédio comercial
void predio_comercial::adicionar_sala(sala *nova_sala) {
    lista_de_salas.push_back(nova_sala);
    ordenar_salas();
}

// Método para remover salas do prédio comercial
void predio_comercial::remover_sala(sala *sala) {
    lista_de_salas.erase(std::remove(lista_de_salas.begin(), lista_de_salas.end(), sala), lista_de_salas.end());
}

// Método para listar as salas do prédio comercial
void predio_comercial::listar_salas() const {
    for (const auto &sala : lista_de_salas) {
        std::cout << "Sala: " << sala->get_numero() << ", Andar: " << sala->get_andar() << "\n";
    }
}

// Sobrecarga do operador + para adicionar salas ao prédio comercial
predio_comercial& predio_comercial::operator+(sala *sala) {
    adicionar_sala(sala);
    return *this;
}

// Sobrecarga do operador - para remover salas do prédio comercial
predio_comercial& predio_comercial::operator-(sala *sala) {
    remover_sala(sala);
    return *this;
}
