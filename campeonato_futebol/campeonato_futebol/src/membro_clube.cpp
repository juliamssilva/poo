#include "membro_clube.h"
#include <iostream>

// Construtor padrão que inicializa o nome, a idade e o salário do membro do clube.
membro_clube::membro_clube(const std:: string &nome, int idade, double salario):
     pessoa(nome,idade), salario(salario){}

// Sobrecarga do operador << para a classe membro_clube.
std::ostream& operator<<(std::ostream &os, const membro_clube &membro){ 
    os << "Nome: " << membro.nome << ", Idade: " << membro.idade << ", Salario: " << membro.salario;
    return os;
}