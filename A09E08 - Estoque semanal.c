#include <stdio.h>

int main(void){
    float media, maior, menor, aux;
    int dias, i;
    printf("Entre com o numero de dias: \n");
    scanf("%d", &dias);
    printf("Entre com o valor do dia 1: \n");
    scanf("%f", &maior);
    menor = maior;
    media = maior;
    for (i=2; i<=dias; i++){
        printf("Entre com o valor do dia %d \n", i);
        scanf("%f", &aux);
        if(aux>maior){
            maior = aux;
        }
        if(aux<menor){
            menor = aux;
        }
        media += aux;
    }
    printf("\n O maior estoque eh: %.0f \n", maior);
    printf("O menor estoque eh: %.0f \n", menor);
    printf("A media do estoque eh: %.2f \n", media);

    return 0;
}