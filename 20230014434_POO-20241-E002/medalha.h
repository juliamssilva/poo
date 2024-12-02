#ifndef MEDALHA_H
#define MEDALHA_H

#include "atleta.h"
#include "modalidade.h"
#include <string>
using namespace std;

//Criando a classe Medalha.

//Podemos observar que a classe medalha usa composição pois tem membros atletas e modalidades.Se a medalha for destruída, seus componentes também são destruídos.


class medalha {
    std::string tipo;
    int ano;
    atleta atletas;         // Atleta que ganhou a medalha
    modalidade modalidades; // Modalidade do esporte a qual a medalha pertence

public:

    //Construtor
    medalha(const std::string& t, int a, const atleta& at, const modalidade& m);
    
    //Destrutor
    ~medalha();

    //Métodos get e set
    string get_tipo();
    void set_tipo(const std::string& t);

    int get_ano();
    void set_ano(int a);

    atleta get_atleta();
    void set_atleta(const atleta& at);

    modalidade get_modalidade();
    void set_modalidade(const modalidade& m);

    //Mostrar as informações da medalha
    void print_info() const;
};

#endif // MEDALHA_H