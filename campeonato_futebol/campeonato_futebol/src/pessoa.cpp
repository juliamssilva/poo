#include "pessoa.h"
#include <iostream>
#include <string>

// Inicialização do contador de pessoas
int pessoa::contador = 0;

// Incrementa o contador de pessoas
pessoa::pessoa(const std::string &nome, int idade): nome(nome), idade(idade){
    contador++; 
}

// Sobrecarga do operador ==
bool pessoa::operator==(const pessoa &outra) const {
    return (this->nome == outra.nome && this->idade == outra.idade); 
}

// Método para exibir as informações da pessoa.
void pessoa::exibir_informacoes() const {
    std::cout << "Nome: " << nome << ", Idade: " << idade << std::endl;  
}

// Retorna o contador de pessoas
int pessoa::get_contador(){
    return contador; 
}