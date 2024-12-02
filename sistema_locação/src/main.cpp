#include <iostream>
#include <vector>
#include "predio_comercial.h"
#include "sala_privativa.h" 
#include "sala_compartilhada.h"
#include "empresa.h"

int main() {
predio_comercial meu_predio;

    // Criando algumas empresas
    empresa empresa1("Empresa Lavid", 10);
    empresa empresa2("Empresa Aria", 5);
    empresa empresa3("Empresa LIM", 8);
    
    // Criando algumas salas
    sala_privativa sala1(101, 1, 5);  // número, andar, capacidade
    sala_compartilhada sala2(202, 2, 10); // número, andar, estações de trabalho

    // Adicionando salas ao prédio
    meu_predio + &sala1;
    meu_predio + &sala2;

    // Adicionando empresas às salas
    sala1 + empresa1;
    sala2 + empresa2;
    sala2 + empresa3;

    // Listando salas e suas empresas
    std::cout << "Salas e suas empresas no predio:\n";
    meu_predio.listar_salas();

    // Removendo uma sala
    meu_predio - &sala1;

    std::cout << "\nApos remover a Sala 101:\n";
    meu_predio.listar_salas();

    return 0;
}
