#include "time_futebol.h"
#include <iostream>

// Construtor padrão que inicializa o nome e o treinador do time de futebol.
time_futebol::time_futebol(const std::string &nome, tecnico *treinador)
    : nome(nome), treinador(treinador), pontuacao(0) {} 

// Método get para o nome do time de futebol.
std::string time_futebol::get_nome() const { 
    return nome;
}

// Método para adicionar um jogador ao time de futebol.
void time_futebol::adicionar_jogador(const jogador &j) { 
    jogadores.push_back(j); 
}

// Método para registrar o resultado do time de futebol.
void time_futebol::registrar_resultado(char resultado) {
    if (resultado == 'V') { // se for vitória
        pontuacao += 3;
    } else if (resultado == 'E') { // se for empate
        pontuacao += 1;
    } // caso seja derrota não muda nada
}

// Método para exibir as informações do time de futebol.
void time_futebol::exibir_informacoes() const { 
    std::cout << "Time de Futebol: " << nome 
              << "\nPontuacao: " << pontuacao << std::endl;
}

// Sobrecarga do operador <.
bool time_futebol::operator<(const time_futebol &outro) const { 
    return this->pontuacao < outro.pontuacao;
}
