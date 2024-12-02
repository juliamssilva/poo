#include "jogo.h"
#include <iostream>

 // Construtor padrão que inicializa o time da casa, o time visitante e o juiz do jogo.
jogo::jogo(time_futebol *casa, time_futebol *visitante, juiz *principal)://
    time_casa(casa), time_visitante(visitante), juiz_principal(principal), gols_time_casa(0), gols_time_visitante(0) {}
void jogo::registrar_resultado(int gols_casa, int gols_visitante) {// Método para registrar o resultado do jogo.
    this->gols_time_casa = gols_casa;
    this->gols_time_visitante = gols_visitante;

    //Verifica quem ganhou o jogo e registra o resultado
    if (gols_casa > gols_visitante) {
        time_casa->registrar_resultado('V');
        time_visitante->registrar_resultado('D');
    } else if (gols_casa < gols_visitante) {
        time_casa->registrar_resultado('D');
        time_visitante->registrar_resultado('V');
    } else {
        time_casa->registrar_resultado('E');
        time_visitante->registrar_resultado('E');
    }
    
}

void jogo::exibir_informacoes() const { // Método para exibir as informações do jogo.
    std::cout << "Time Casa: " << time_casa->get_nome() << "\nTime Visitante: " << time_visitante->get_nome() << "\nGols do Time Casa: " << gols_time_casa << "\nGols Time Visitante: " << gols_time_visitante << std::endl;
}

