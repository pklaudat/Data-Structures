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
    

    return 0;
}