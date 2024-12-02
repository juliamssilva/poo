#ifndef PESSOA_H
#define PESSOA_H

#include <string>

/**
 * @brief Classe para a pessoa.
 * 
 * A classe pessoa armazena as informações base de uma pessoa, como o seu nome e a sua idade.
 */
class pessoa {
protected:
    std::string nome;
    int idade;
    static int contador;

public:

/**
 * @brief Construtor padrão que inicializa o nome e a idade da pessoa.
 * @param nome é o nome da pessoa.
 * @param idade é a idade da pessoa.
 */
    pessoa(const std:: string &nome, int idade);
    virtual ~pessoa() = default;

/**
 * @brief Métodos get e set para o nome e a idade da pessoa.
 */
    std::string getnome() const;
    void setnome(const std::string &n);
    
/**
 *  @brief Métodos get e set para obter a idade da pessoa.
 */
    int getidade() const;
    void setidade(int i);
    
/**
 *  @brief Método virtual puro para exibir as informações da pessoa.
 */
    virtual void exibir_informacoes() const = 0; // método virtual puro

/**
 *  @brief Sobrecarga do operador << para a classe pessoa.
 */
    bool operator==(const pessoa &outra) const;

/**
 * @brief Método para incrementar o contador de pessoas.
 * @return Retorna o contador de pessoas.
 */
    static int get_contador();
};

#endif // PESSOA_H