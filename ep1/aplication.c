#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int main(void)
{
    Data data;
    Data dataI;
    Data dataF;

    le_data(&data);
    if (valida_data(data)) {
        printf("data valida\n");
    } else {
        printf("data invalida\n");
    }

    printf("\nDigite a Data inicial.\n");
    do {
        le_data(&dataI);
        if (valida_data(data) == 0)
            printf("data invalida\n");
    } while (valida_data(dataI) == 0);

    
    printf("\nDigite a Data final.\n");
    do {
        le_data(&dataF);
        if (valida_data(data) == 0)
            printf("data invalida\n");
    } while (valida_data(dataF) == 0);

    int diferenca = diferencaDeDias(dataI, dataF);
    printf("Diferenca: %d dia(s)\n\n", diferenca);

    system("pause");
    return 0;
}
