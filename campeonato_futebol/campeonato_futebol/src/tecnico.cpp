#include "tecnico.h"
#include <iostream>
#include <string>

// Construtor padrão que inicializa o nome, a idade, o salário e a experiência do técnico.
tecnico::tecnico(const std::string &nome, int idade, double salario, int experiencia):
    membro_clube(nome,idade,salario), experiencia(experiencia) {}


void tecnico::exibir_informacoes() const{ // Método para exibir as informações do técnico.
    membro_clube::exibir_informacoes();
    std::cout << "Experiência: " << experiencia << std::endl;
}

//Calculo de bonus para o tecnico de acordo com sua experiencia
double tecnico::calcular_salario() const{
    return salario + (experiencia * 200);
}