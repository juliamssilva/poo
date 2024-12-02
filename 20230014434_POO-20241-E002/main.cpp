#include <iostream>
#include <vector>
#include "pais.h"
#include "modalidade.h"
#include "atleta.h"
#include "medalha.h"

using namespace std;

void exibir_atletas(const vector<atleta>& atletas);
void exibir_modalidades(const vector<modalidade>& modalidades);
void exibir_medalhas(const vector<medalha>& medalhas);

//Tive dificuldade em fazer o menu, então usei o auxílio do chatgpt

int main() {

    //Vetores para armazenar os objetos
    vector<atleta> atletas;
    vector<modalidade> modalidades;
    vector<pais*> paises;
    vector<medalha> medalhas;

    int opcao;
    do {
        cout << "Menu:\n";
        cout << "1. Cadastrar Atleta\n";
        cout << "2. Cadastrar Modalidade\n";
        cout << "3. Cadastrar Pais\n";
        cout << "4. Cadastrar Medalha\n";
        cout << "5. Exibir Atletas\n";
        cout << "6. Exibir Modalidades\n";
        cout << "7. Exibir Medalhas\n";
        cout << "8. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        cin.ignore(); 

        switch(opcao) {
            case 1: {
                string nome_atleta, nome_pais, continente;
                cout << "Nome do Atleta: ";
                getline(cin, nome_atleta);
                cout << "Nome do Pais: ";
                getline(cin, nome_pais); // Limpar o buffer
                cout << "Continente do Pais: ";
                getline(cin, continente);

                pais* p = new pais(nome_pais, continente);
                paises.push_back(p);

                atleta a(nome_atleta, p);
                atletas.push_back(a);
                break;
            }
            case 2: {
                string nome_modalidade;
                bool coletiva;
                cout << "Nome da Modalidade: ";
                getline(cin, nome_modalidade);
                cout << "E coletiva? (1 para Sim, 0 para Nao): ";
                cin >> coletiva;
                cin.ignore();

                modalidade m(nome_modalidade, coletiva);
                modalidades.push_back(m);
                break;
            }
            case 3: {
                string nome_pais, continente;
                cout << "Nome do Pais: ";
                getline(cin, nome_pais);
                cout << "Continente do Pais: ";
                getline(cin, continente);

                pais* p = new pais(nome_pais, continente);
                paises.push_back(p);
                break;
            }
            case 4: {
                string tipo, nome_atleta, nome_modalidade;
                int ano;
                cout << "Tipo da Medalha: ";
                getline(cin, tipo);
                cout << "Ano da Medalha: ";
                cin >> ano;
                cin.ignore(); // Para ignorar o newline apos a leitura do inteiro

                cout << "Nome do Atleta: ";
                getline(cin, nome_atleta);
                cout << "Nome da Modalidade: ";
                getline(cin, nome_modalidade);

                // Encontrar o atleta e a modalidade para a medalha
                atleta a(nome_atleta, paises.size() > 0 ? paises[0] : nullptr); // Feito com auxílio do chatgpt
                modalidade m(nome_modalidade, false); // Placeholder

                medalha md(tipo, ano, a, m);
                medalhas.push_back(md);
                break;
            }
            case 5:
                exibir_atletas(atletas);
                break;
            case 6:
                exibir_modalidades(modalidades);
                break;
            case 7:
                exibir_medalhas(medalhas);
                break;
            case 8:
                cout << "Saindo do programa." << endl;
                // Liberar memória
                for (auto p : paises) {
                    delete p;
                }
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 8);

    return 0;
}

void exibir_atletas(const vector<atleta>& atletas) {
    for (const auto& a : atletas) {
        a.print_info();
        cout << "----------\n";
    }
}

void exibir_modalidades(const vector<modalidade>& modalidades) {
    for (const auto& m : modalidades) {
        m.print_info();
        cout << "----------\n";
    }
}

void exibir_medalhas(const vector<medalha>& medalhas) {
    for (const auto& md : medalhas) {
        md.print_info();
        cout << "----------\n";
    }
}
