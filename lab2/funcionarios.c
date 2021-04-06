/*
    Exercício - Laboratório 2 : TADs
    Aluno: Paulo Ricardo Klaudat Neto
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* dependencias */
#include "funcionarios.h"


void alterarCargo(listaFuncionarios* lista, char* name, char* novoCargo) {
    int posicao;
    posicao = buscaFuncionario(lista,name);
 
    if (posicao >= 0) {
        strcpy(lista->funcionarios[posicao].cargo, novoCargo);
    }
}

void alterarSalario(listaFuncionarios* lista,char* name, float novoSalario) {
    int posicao;
    posicao = buscaFuncionario(lista,name);

    if (posicao >= 0) {
        lista->funcionarios[posicao].salario = novoSalario;
    }

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

    fflush(stdin);

    if (dados->nroElem < TAMANHO_FUNCIONARIOS) {
        printf("Digite o nome do novo funcionario: ");
        scanf("%s",&dados->funcionarios[dados->nroElem].nome);
        printf("Digite o dia de nascimento: ");
        scanf("%s",&dados->funcionarios[dados->nroElem].data.dia);
        printf("Digite o mes: ");
        scanf("%s",&dados->funcionarios[dados->nroElem].data.mes);
        printf("Digite o ano: ");
        scanf("%s",&dados->funcionarios[dados->nroElem].data.ano);
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

int buscaFuncionario(listaFuncionarios* dados, char* nomeprocurado) {
    int i = 0;
    int encontrado = 0;
    int posicao;
    
    while (i < dados->nroElem) {
        if (strcmp(nomeprocurado,dados->funcionarios[i].nome) == 0) {
            encontrado = 1;
            posicao = i;
            i = dados->nroElem;
        }
        i++;
    }
    if (!encontrado) {   
        printf("\nO funcionario %s nao existe !!!\n",nomeprocurado);
        return -1;
    } else {
        printf("\n%s ==  %.2s/%.2s/%s == %s == %f ", nomeprocurado, dados->funcionarios[posicao].data.dia, dados->funcionarios[posicao].data.mes, dados->funcionarios[posicao].data.ano, dados->funcionarios[posicao].cargo, dados->funcionarios[posicao].salario);
        return posicao;
    }

}




