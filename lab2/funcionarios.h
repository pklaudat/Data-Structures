/*
    Exercício - Laboratório 2 : TADs
    Aluno: Paulo Ricardo Klaudat Neto
*/
#include <stdint.h>

#define TAMANHO_FUNCIONARIOS 1

typedef struct {
    char dia[2];
    char mes[2];
    char ano[4];
} tipoData;

typedef struct {
    char nome[200];
    tipoData data;
    float salario;
    char cargo[50]; 
} funcionario;

typedef struct {
    funcionario funcionarios[TAMANHO_FUNCIONARIOS];
    int nroElem;
} listaFuncionarios;



void alterarCargo(listaFuncionarios* lista, char* name, char* novoCargo);

void alterarSalario(listaFuncionarios* lista, char* name, float novoSalario);

void imprimirFuncionario(listaFuncionarios* dados);

void criarFuncionario(listaFuncionarios* dados);

void salarioTotal(listaFuncionarios* dados);

int buscaFuncionario(listaFuncionarios* dados, char* nomeprocurado);

