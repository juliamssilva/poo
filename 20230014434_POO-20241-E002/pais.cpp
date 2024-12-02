#include "pais.h"
#include <iostream>
#include <string>
#include <memory>

using std::cout;
using std::endl;
using std::string;
using namespace std;

    //Contrutor de pais
    pais::pais(const string& n, const string& c) : nome(n), continente(c) {
        cout << "Pais: " << nome << " criado." << endl;
    }

    //Destrutor de pais
    pais::~pais() {
        cout << "Pais: " << nome << " destruido." << endl;
    }

    //Metodos get e set
    string pais::get_nome() {
        return nome;
    }

    void pais::set_nome(const string& n) {
        nome = n;
    }

    string pais::get_continente() {
        return continente;
    }

    void pais::set_continente(const string& c) {
        continente = c;
    }

    void pais::print_info() const {
        cout << "Nome: " << nome << endl;
        cout << "Continente: " << continente << endl;
    }