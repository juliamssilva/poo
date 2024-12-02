#ifndef PAIS_H
#define PAIS_H

#include <string>
using namespace std;

//Criando a classe Pais.
class pais {
    std::string nome;
    std::string continente;

public:

    //Construtor
    pais(const std::string& n, const std::string& c);

    //Destrutor
    ~pais();

    //Métodos get e set
    string get_nome();
    void set_nome(const std::string& n);

    string get_continente();
    void set_continente(const std::string& c);

    void print_info() const;
};

#endif //PAIS_H