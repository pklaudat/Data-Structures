/* 
    Laboratório 1 - Estrutura de Dados | Exercicio 2
    Aluno: Paulo Ricardo Klaudat Neto
*/
#include <stdio.h>
#include <stdint.h>

typedef struct {
    float altura;
    float largura;
    float area;
} Retangulo;

int atualizaAltura(Retangulo* a, float novaAltura) {
    if (novaAltura > 0) {
        a->altura = novaAltura;
        return 1;
    } else return 0;

}
int atualizaLargura(Retangulo* a, float novaLargura) {
    if (novaLargura > 0) {
        a->largura = novaLargura;
        return 1;
    } else return 0;
}
void imprime_dados(Retangulo* a) {
    printf("\n\n -- Dados do Retangulo --\n");
    printf("|Altura - %.2f \n",a->altura);
    printf("|Largura - %.2f\n",a->largura);
    printf("|Area - %.2f   ",a->area);

}

int main(void) {
    Retangulo r;
    float altura,largura,area;
    int returnAltura,returnLargura;

    r.largura = 0;
    r.altura = 0;
    r.area = 0;
    printf("\n\n--- Defina as novas dimensoes do Retangulo ---\n");
    printf("Altura: ");
    scanf("%f",&altura);
    printf("Largura: ");
    scanf("%f",&largura);
    area = r.altura*r.largura;

    returnAltura = atualizaAltura(&r,altura);
    returnLargura = atualizaLargura(&r,largura);

    if(returnAltura&&returnLargura == 1) {
        r.area = r.altura*r.largura;
        imprime_dados(&r);
    } else {
        printf("\n\nDados nao atualizados\n!! Dimensoes inseridas invalidas !!");
    }

    




}
