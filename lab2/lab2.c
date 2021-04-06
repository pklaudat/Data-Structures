/*
    Exercício - Laboratório 2 : TADs
    Aluno: Paulo Ricardo Klaudat Neto
*/
#include <stdio.h>
#include <stdint.h>
#include "funcionarios.h"




int main(void) {
    listaFuncionarios funcionarios = {0};
   
    criarFuncionario(&funcionarios);
    
  
    imprimirFuncionario(&funcionarios);
    salarioTotal(&funcionarios);
    buscaFuncionario(&funcionarios,"Pedro");
    criarFuncionario(&funcionarios);
    alterarCargo(&funcionarios,"Pedro","Pedreiro");
    alterarSalario(&funcionarios,"Pedro",920.4);
    imprimirFuncionario(&funcionarios);
    

    return 0;
}