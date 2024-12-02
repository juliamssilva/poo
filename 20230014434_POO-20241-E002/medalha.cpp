#include "medalha.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using namespace std;

// Construtor de medalha
medalha::medalha(const string& t, int a, const atleta& at, const modalidade& m)
    : tipo(t), ano(a), atletas(at), modalidades(m) {
    cout << "Medalha criada." << endl;
}

// Destrutor de medalha
medalha::~medalha() {
}

// Métodos get e set
std::string medalha::get_tipo() {
    return tipo;
}

void medalha::set_tipo(const std::string& t) {
    tipo = t;
}

int medalha::get_ano(){
    return ano;
}

void medalha::set_ano(int a) {
    ano = a;
}

atleta medalha::get_atleta(){
    return atletas;
}

void medalha::set_atleta(const atleta& at) {
    atletas = at;
}

modalidade medalha::get_modalidade(){
    return modalidades;
}

void medalha::set_modalidade(const modalidade& m) {
    modalidades = m;
}

void medalha::print_info() const{
    cout << "Tipo: " << tipo << endl;
    cout << "Ano: " << ano << endl;
    cout << "Atleta: " << endl;
    atletas.print_info();
    cout << "Modalidade: " << endl;
    modalidades.print_info();
}