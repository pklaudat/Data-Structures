/*
    Exercício - Laboratório 2 : TADs
    Aluno: Paulo Ricardo Klaudat Neto
*/
#include <stdint.h>

#define TAMANHO_FUNCIONARIOS 2

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



void alterarCargo(listaFuncionarios* a, char novoCargo[50]);

void alterarSalario(listaFuncionarios* a, float novoSalario);

void imprimirFuncionario(listaFuncionarios* dados);

void criarFuncionario(listaFuncionarios* dados);

void salarioTotal(listaFuncionarios* dados);

void buscaFuncionario(listaFuncionarios* dados, char nomeprocurado);

