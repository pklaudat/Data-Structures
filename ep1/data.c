#include <stdio.h>
#include <stdlib.h>

#include "data.h"

void le_data(Data *data)
{
    printf("Dia:");
    scanf("%d", &data->dia);
    printf("Mes:");
    scanf("%d", &data->mes);
    printf("Ano:");
    scanf("%d", &data->ano);
}

int valida_data(Data data)
{
    if ((data.dia > 31) || (data.ano > 2100) || (data.mes > 12))
        return 0;
    return 1;
}

int diferenca_dias(Data diaInicial, Data diaFinal)
{
    int diff = 0;
    int diffDias = 0;
    int diffMeses = 0;
    int diffAnos = 0;
   

    diffAnos = (dFinal.ano - dInicial.ano) * 365;
    diffMeses = abs(dFinal.mes - dInicial.mes) * 30;
    diffDias = abs(dFinal.dia - dInicial.dia);

    diff = diffAnos;
    
    if (dFinal.mes >= dInicial.mes)
        diff += diffMeses;
    else
        diff-= diffMeses;

    if (dFinal.dia >= dInicial.dia)
        diff += diffDias;
    else
        diff -= diffDias;

    return diff;
}
