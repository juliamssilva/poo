#include <stdio.h>   // Biblioteca padrão para funções de entrada e saída
#include <stdlib.h>  // Biblioteca padrão para funções de alocação de memória, conversão de tipos, etc.

#define TAM_NOME 40  // Define o tamanho máximo do nome do aluno
#define ARG_COUNT 2  // Define o número esperado de argumentos na linha de comando
#define TAM_DISCIPLINA 50 // Define o tamanho máximo do nome da disciplina

/*
 * MINI SIGAA
 * Este código é um exemplo de como implementar estruturas e funções em C 
 * para representar e manipular alunos e turmas (como um mini SIGAA).
 */

// Estrutura para representar um aluno
typedef struct {
	char nome[TAM_NOME];  // Nome do aluno
	int matricula;        // Número de matrícula do aluno
	float cra;            // Coeficiente de Rendimento Acadêmico (CRA) do aluno
} t_aluno;

// Estrutura para representar um professor
typedef struct {
	char nome[TAM_NOME]; 	// Nome do professor
	int c_dep;				// Código do departamento do professor
	int ano_contract;   	// Ano de contratação do professor
	char disciplina[TAM_DISCIPLINA];	// Nome da disciplina       
} t_professor;

// Estrutura para representar uma turma
typedef struct {
	t_aluno* alunos;  // Ponteiro para um array de alunos
	int tam_turma;    // Tamanho da turma (número de alunos)
	int sala;         // Número da sala de aula
	t_professor* professor; //Ponteiro para um professor
} t_turma;

// Função para cadastrar um aluno
void cadastra_aluno(t_aluno *a) {
	char c;
	printf("Digite o nome do aluno: ");
	scanf("%[^\n]", a->nome);  // Lê o nome do aluno
	printf("Digite a matricula do aluno: ");
	scanf("%d", &a->matricula);  // Lê a matrícula do aluno
	printf("Digite o CRA do aluno: ");
	scanf("%f", &a->cra);  // Lê o CRA do aluno
	scanf("%c", &c); // ATS: consome o caractere '\n' remanescente
}

// Função para exibir informações de um aluno
void exibe_aluno(t_aluno *a) {
	printf("Nome: %s\n", a->nome);  // Exibe o nome do aluno
	printf("Matricula: %d\n", a->matricula);  // Exibe a matrícula do aluno
	printf("CRA: %.2f\n", a->cra);  // Exibe o CRA do aluno
}

// Função para cadastrar uma turma
void cadastra_turma(t_turma* t, int tam) {
    char c;
	printf("Cadastrando turma com %d alunos...\n", tam);
	t->alunos = (t_aluno*) malloc(sizeof(t_aluno) * tam);  // Aloca memória para os alunos
	t->tam_turma = tam;  // Define o tamanho da turma
	for (int i = 0; i < tam; i++) {
		cadastra_aluno(&t->alunos[i]);  // Cadastra cada aluno na turma
	}

	printf("Digite o numero da sala: ");
	scanf("%d", &t->sala);  // Lê o número da sala de aula
    scanf("%c", &c); // ATS: consome o caractere '\n' remanescente
}

// Função para exibir informações de uma turma
void exibe_turma(t_turma* t) {
	printf("Sala: %d\n", t->sala);  // Exibe o número da sala de aula
	for (int i = 0; i < t->tam_turma; i++) {
		exibe_aluno(&t->alunos[i]);  // Exibe as informações de cada aluno na turma
	}
}

// Função para cadastrar as informações do professor
void cadastra_professor(t_professor *p){
	char c;
	printf("Digite o nome do professor: ");
	scanf("%[^\n]", p->nome);  // Lê o nome do professor
	printf("Digite o código do departamento do professor: ");
	scanf("%d", &p->c_dep);  // Lê o código do departamento do professor
	printf("Digite o ano de contratação do professor: ");
	scanf("%d", &p->ano_contract);  // Lê o ano de contratação do professor
	printf("Digite o nome da disciplina do professor: ");
	scanf("%s", p->disciplina);  // Lê o nome da disciplina do professor
	scanf("%c", &c); // ATS: consome o caractere '\n' remanescente
}

// Funçã para exibir informações do professor
void exibe_professor(t_professor* p) {
	printf("Nome do professor: %s\n", p->nome);  // Exibe o nome do professor 
	printf("Código do departamento: %d\n", p->c_dep);  // Exibe o código do departamento do professor
	printf("Ano de contratação: %d\n", p->ano_contract);  // Exibe o ano de contratação do professor
	printf("Nome da disciplina ministrada pelo professor: %s\n", p->disciplina);  // Exibe o ano de contratação do professor
}

//Função para associar um professor a uma turma
void associa_professor_turma(t_turma *t, t_professor *p){
	t->professor = p; //Associa o professor a uma turma
}

// Função para calcular e retornar a média do CRA
float calcula_media_cra_turma(t_turma *t){
	float media_cra = 0;	// Variável para armazenar a média de cra da turma
	for (int i = 0; i< t->tam_turma; i++){
		media_cra += t->alunos[i].cra; // Percorre a turma a vai somando o cra de cada um dos alunos
	}
	return media_cra/t->tam_turma; // Retorna a média da turma
}
// Função principal
// Recebe o número de alunos da turma como argumento na linha de comando
// Cadastra a turma e exibe as informações dos alunos
int main(int argc, char** argv) {
	t_professor p1,p2;
	t_turma t1, t2;
	int tam_turma = 0;
	
	// Verifica se o número de argumentos passados na linha de comando é o esperado
	if (argc != ARG_COUNT) {
		printf("Use: %s <NUMERO_DE_ALUNOS>\n", argv[0]);  // Informa o uso correto do programa
		exit(0);  // Termina o programa se o número de argumentos estiver incorreto
	} else {
		tam_turma = atoi(argv[1]);  // Converte o argumento da linha de comando para inteiro
		cadastra_turma(&t1, tam_turma);  // Cadastra a primeira turma
        cadastra_professor(&p1); // Cadastra o professor da primeira turma
        associa_professor_turma(&t1,&p1); // Associa o professor a primeira turma
        exibe_turma(&t1);  // Exibe as informações da primeira turma
        exibe_professor(&p1); //Exibe as informações do professor da turma
        printf("Média da Turma 1: %.2f\n",calcula_media_cra_turma(&t1)); // Exibe a média do cra da primeira turma

        cadastra_turma(&t2, tam_turma);  // Cadastra a segunda turma
        cadastra_professor(&p2); // Cadastra o professor da segunda turma
        associa_professor_turma(&t2,&p2); // Associa o professor da segunda turma
        exibe_turma(&t2);  // Exibe as informações da segunda turma
        exibe_professor(&p2); //Exibe as informações do professor da turma
        printf("Média da Turma 2: %.2f\n",calcula_media_cra_turma(&t2)); // Exibe a média do cra da primeira turma

	}

	// Libera a memória alocada para os alunos da turma
	for (int i = 0; i < tam_turma; i++) {
		//free(&t1.alunos[i]);  // Libera a memória alocada para cada aluno
	}
    free(t1.alunos);  // Libera o array de alunos 
    free(t2.alunos);  // Libera o array de alunos 


	return 0;
}