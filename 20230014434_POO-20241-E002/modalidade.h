#ifndef MODALIDADE_H
#define MODALIDADE_H

#include <string>
using namespace std;

// Criando a classe Modalidade.
class modalidade {
    std::string nome;
    bool coletiva; // Usando booleano para ver se é coletiva ou não coletiva (individual).

public:

    // Construtor
    modalidade(const std::string& n, bool c);

    // Destrutor
    ~modalidade();

    //Metodos get e set 
    std::string get_nome();
    void set_nome(const std::string& n);

    bool is_coletiva();
    void set_coletiva(bool c);

    void print_info() const;
};

#endif // MODALIDADE_H
