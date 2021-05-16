#ifndef DATA_H_
#define DATA_H_

/* Data (dd/mm/aaaa) */
struct data
{
    int dia;
    int mes;
    int ano;
};
typedef struct data Data;

void le_data(Data *data);

int valida_data(Data data);

int diferenca_dias(Data datai, Data dataf);

#endif // DATA_H_INCLUDED
