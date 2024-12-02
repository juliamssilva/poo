#ifndef ATLETA_H
#define ATLETA_H

#include "pais.h"
#include "modalidade.h"
#include <string>
#include <vector>
using namespace std;

class atleta {
    std::string nome;
    pais* pais_atleta; // Ponteiro para o país de origem do atleta
    std::vector<modalidade> modalidades; // Modalidades do atleta

public:
    // Construtor
    atleta(const std::string& n, pais* p);

    // Destrutor
    ~atleta();

    // Métodos get e set
    std::string get_nome() const;
    void set_nome(const std::string& n);

    pais* get_pais_atleta() const;
    void set_pais_atleta(pais* p);

    std::vector<modalidade> get_modalidades() const;
    void adicionar_modalidade(const modalidade& m);

    // Mostrar as informações do atleta
    void print_info() const;
};

#endif // ATLETA_H
