#include <iostream>
#include "campeonato.h"
#include "time_futebol.h"
#include "jogo.h"
#include "tecnico_jogador.h"
#include "juiz.h"

int main() {
    // Criando o ampeonato Quadrangular
    campeonato campeonato_quadrangular("Campeonato Quadrangular");

    
    printf("\n");

    // Criando os técnicos
    tecnico* tecnico1 = new tecnico("Luiz", 48, 2500.0, 6);
    tecnico* tecnico2 = new tecnico("Nicolas", 20, 1200.0, 1);
    tecnico* tecnico3 = new tecnico("Eugenio", 38, 10000.0, 12);
    tecnico_jogador* tecnico_jogador1 = new tecnico_jogador("Daronco", 56, 20000.0, "Zagueiro", 16, 30, 7000.0);

    // Criando os times
    time_futebol* time1 = new time_futebol("Flamengo", tecnico1);
    time_futebol* time2 = new time_futebol("Vasco", tecnico2);
    time_futebol* time3 = new time_futebol("Colinas do Sul", tecnico3);
    time_futebol* time4 = new time_futebol("Santos", tecnico_jogador1);


    // Criando e colocando os jogadores em cada time
    for (int i = 1; i <= 5; i++) {
        time1->adicionar_jogador(jogador("Jogador " + std::to_string(i), 20 + i, 1000.0, "Atacante", 0));
        time2->adicionar_jogador(jogador("Jogador " + std::to_string(i), 21 + i, 1100.0, "Meio-campo", 0));
        time3->adicionar_jogador(jogador("Jogador " + std::to_string(i), 22 + i, 1200.0, "Defensor", 0));
        time4->adicionar_jogador(jogador("Jogador " + std::to_string(i), 23 + i, 1300.0, "Goleiro", 0));
    }
    
    printf("\n");

    // Adicionando ao campeonato os times
    campeonato_quadrangular.adicionar_time(time1);
    campeonato_quadrangular.adicionar_time(time2);
    campeonato_quadrangular.adicionar_time(time3);
    campeonato_quadrangular.adicionar_time(time4);

    // Criando os juízes
    juiz* juiz1 =new juiz("Gabigol", 28);
    juiz* juiz2 = new juiz("Neymar", 27);

    // Criando os jogos
    jogo* jogo1 = new jogo(time1, time2, juiz1);
    jogo* jogo2 = new jogo(time2, time3, juiz2);
    jogo* jogo3 = new jogo(time3, time4, juiz1);

    printf("\n");

    // Colocando o resultado dos jogos
    jogo1->registrar_resultado(2, 1);
    printf("\n");

    jogo2->registrar_resultado(0, 0);
    printf("\n");

    jogo3->registrar_resultado(3, 2); 
    
    printf("\n");
    
    // Adicionando jogos ao campeonato
    campeonato_quadrangular.adicionar_jogo(jogo1);
    campeonato_quadrangular.adicionar_jogo(jogo2);
    campeonato_quadrangular.adicionar_jogo(jogo3);

    // Exibindo classificação 
    campeonato_quadrangular.exibir_classificacao();

    // Desalocando os vetores
    delete time1;
    delete time2;
    delete time3;
    delete time4;
    delete tecnico1;
    delete tecnico2;
    delete tecnico3;
    delete tecnico_jogador1;
    delete juiz1;
    delete juiz2;
    delete jogo1;
    delete jogo2;
    delete jogo3;

return 0;
}