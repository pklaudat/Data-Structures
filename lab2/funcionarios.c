/*
    Exercício - Laboratório 2 : TADs
    Aluno: Paulo Ricardo Klaudat Neto
*/
#include <stdio.h>
#include <stdlib.h>

/* dependencias */
#include "funcionarios.h"


void alterarCargo(listaFuncionarios* a, char novoCargo[50]) {

}

void alterarSalario(listaFuncionarios* a, float novoSalario) {

}

void imprimirFuncionario(listaFuncionarios* dados) {
    int i;
    
    printf("\n");

    for (i=0; i<dados->nroElem; i++) {
        printf("------------------------\n");
        printf("%s == ",dados->funcionarios[i].nome);
        printf("%.2s",dados->funcionarios[i].data.dia);
        printf("/%.2s",dados->funcionarios[i].data.mes);
        printf("/%s == ",dados->funcionarios[i].data.ano);
        printf("%s == ",dados->funcionarios[i].cargo);
        printf("%f",dados->funcionarios[i].salario);  
    }

}


void criarFuncionario(listaFuncionarios* dados) {

    if (dados->nroElem < TAMANHO_FUNCIONARIOS) {
        printf("Digite o nome do novo funcionario: ");
        scanf("%s",&dados->funcionarios[dados->nroElem].nome);
        printf("Digite o dia de nascimento: ");
        scanf("%s",&dados->funcionarios[dados->nroElem].data.dia);
        printf("Digite o mes: ");
        scanf("%s",&dados->funcionarios[dados->nroElem].data.mes);
        printf("Digite o ano: ");
        scanf("%s",&dados->funcionarios[dados->nroElem].data.ano);
        fflush(stdin); 
        printf("Digite o cargo: ");
        scanf("%s",&dados->funcionarios[dados->nroElem].cargo);
        printf("Digite o salario: ");
        scanf("%f", &dados->funcionarios[dados->nroElem].salario);
        dados->nroElem += 1;
    } else {
        printf("Vetor completamente preenchido");
    }


    
}

void salarioTotal(listaFuncionarios* dados) {
    int i;
    float total=0;

    for (i=0; i<dados->nroElem; i++) {
        total += dados->funcionarios[i].salario;
    }

    printf("\nGastos totais da empresa: R$ %f", total);

}

void buscaFuncionario(listaFuncionarios* dados, char nomeprocurado) {

}




