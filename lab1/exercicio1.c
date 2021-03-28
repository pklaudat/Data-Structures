/* 
    Laboratório 1 - Estrutura de Dados | Exercicio 1
    Aluno: Paulo Ricardo Klaudat Neto
*/
#include<stdio.h>
#include<stdint.h>

#define N_PESSOAS 1

typedef struct {
    char nome[100];
    float peso;
    float altura;
} Pessoa;

void apresenta_pessoas(Pessoa* a, float media) {
    int i;
    
    printf(" ---- Total de pessoas cadastradas: %d -----\n",N_PESSOAS);

    for (i=0; i<N_PESSOAS; i++) { 
        printf("|%i - %s | %.2f m  %.2f kg|\n",i,a[i].nome,a[i].altura,a[i].peso);
    }
    printf("---------------------------------------------\n");
    printf("Media[IMC] = %.2f",media);
    
}
float media_imc(float* b) {
    int i;
    float mediaImc;

    for (i=0; i<N_PESSOAS; i++) {
        mediaImc += b[i];
        printf("\n %f \n",b[i]);
        
    }
    
    return mediaImc/N_PESSOAS;
}

int main(void){
    int i = 0;
    Pessoa pessoas[N_PESSOAS];
    float imc[N_PESSOAS];
    float media;

    for(i=0;i<N_PESSOAS;i++) {
        printf("Digite o nome da Pessoa numero %i: ",i);
        scanf("%[^\n]",pessoas[i].nome);
        fflush(stdin);
        printf("Digite a altura em [m]: ");
        scanf("%f",&pessoas[i].altura);
        fflush(stdin);
        printf("Digite o peso em [kg]: ");
        scanf("%f",&pessoas[i].peso);
        imc[i] = (pessoas[i].peso/(pessoas[i].altura*pessoas[i].altura));
    }

    media = media_imc(&imc[0]);

    apresenta_pessoas(&pessoas[0],media);

    return 0;
};
