#include "sala.h"
#include <algorithm>

//Construtor da sala
sala::sala(int numero, int andar) : numero_da_sala(numero), andar(andar) {}

//Métodos get e set para o número e andar da sala.
void sala::set_numero(int numero) {
    numero_da_sala = numero;
}

int sala::get_numero() const {
    return numero_da_sala;
}

void sala::set_andar(int andar) {
    this->andar = andar;
}

int sala::get_andar() const {
    return andar;
}

//Vetor que armazena as empresas locatárias
std::vector<empresa> sala::get_empresas() const {
    return lista_de_empresas_loc;
}

// Sobrecarga do operador < para comparar o andar das salas, onde as salas inferiores são retornadas primeiro
bool sala::operator<(const sala &other) const {
    return andar < other.andar;
}

//Sobrecarga do operador + para adicionar empresas à lista de empresas locatárias
sala& sala::operator+(const empresa &empresa) {
    lista_de_empresas_loc.push_back(empresa);
    std::sort(lista_de_empresas_loc.begin(), lista_de_empresas_loc.end());
    return *this;
}

//Sobrecarga do operador - para remover empresas da lista de empresas locatárias
sala& sala::operator-(const empresa &e) {
    lista_de_empresas_loc.erase(std::remove_if(lista_de_empresas_loc.begin(), lista_de_empresas_loc.end(),
        [&](const empresa &emp) { return emp.get_nome() == e.get_nome(); }), lista_de_empresas_loc.end());
    return *this;
}

