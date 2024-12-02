#include "atleta.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using namespace std;

// Construtor
atleta::atleta(const string& n, pais* p)
    : nome(n), pais_atleta(p) {
    cout << "Atleta: " << nome << " criado." << endl;
}

// Destrutor
atleta::~atleta() {
}

// Métodos get e set
string atleta::get_nome() const {
    return nome;
}

void atleta::set_nome(const string& n) {
    nome = n;
}

pais* atleta::get_pais_atleta() const {
    return pais_atleta;
}

void atleta::set_pais_atleta(pais* p) {
    pais_atleta = p;
}

vector<modalidade> atleta::get_modalidades() const {
    return modalidades;
}

void atleta::adicionar_modalidade(const modalidade& m) {
    modalidades.push_back(m);
}

// Mostrar as informações do atleta
void atleta::print_info() const {
    cout << "Nome: " << nome << endl;
    cout << "Pais do Atleta: " << endl;
    if (pais_atleta) {
        pais_atleta->print_info(); // Exibe as informações do país
    } else {
        cout << "Pais não definido." << endl;
    }
}
