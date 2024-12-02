#include "campeonato.h"
#include <algorithm>
#include <iostream>

//Implementação da classe campeonato
campeonato::campeonato(const std::string &nome): nome_campeonato(nome) {} // Construtor padrão que inicializa o nome do campeonato

// Adiciona o time ao campeonato
void campeonato::adicionar_time(time_futebol* t){
    times.push_back(t); 
}

// Adiciona o jogo ao campeonato
void campeonato::adicionar_jogo(jogo* j){
    jogos.push_back(j); 
}
 // Método para exibir a classificação do campeonato
void campeonato::exibir_classificacao() const {
    for (const auto &t : times) {
        t->exibir_informacoes();
    }
}
