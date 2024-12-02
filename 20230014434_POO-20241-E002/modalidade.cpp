#include "modalidade.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using namespace std;

// Construtor de modalidade
modalidade::modalidade(const string& n, bool c) 
    : nome(n), coletiva(c) {
    cout << "Modalidade: " << nome << " criada." << endl;
}

// Destrutor de modalidade
modalidade::~modalidade() {
}

// Métodos get e set
string modalidade::get_nome() {
    return nome;
}

void modalidade::set_nome(const string& m) {
    nome = m;
}

bool modalidade::is_coletiva() {
    return coletiva;
}

void modalidade::set_coletiva(bool c) {
    coletiva = c;
}

void modalidade::print_info() const{
    cout << "Nome: " << nome << endl;
    cout << "Coletiva: " << (coletiva ? "Sim" : "Nao") << endl;
}
