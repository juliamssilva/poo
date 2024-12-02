#include "empresa.h"

//Método construtor joga uma exceção se a idade for negativa
empresa::empresa(const std::string &nome, int idade) : nome_da_empresa(nome), idade_da_empresa(idade) {
    if (idade < 0) throw std::invalid_argument("Idade da empresa não pode ser negativa."); 
}


//Métodos get e set para o nome e idade da empresa.

void empresa::set_nome(const std::string &nome) {
    nome_da_empresa = nome;
}

std::string empresa::get_nome() const {
    return nome_da_empresa;
}

//Método set_idade joga uma exceção se a idade for negativa
void empresa::set_idade(int idade) {
    if (idade < 0) throw std::invalid_argument("Idade da empresa não pode ser negativa.");
    idade_da_empresa = idade;
}

int empresa::get_idade() const {
    return idade_da_empresa;
}

//Compara as empresas pela idade, retornando primeiro as empresa mais antigas
bool empresa::operator<(const empresa &other) const {
    return idade_da_empresa > other.idade_da_empresa;
}
