#include <stdio.h>

struct tipocargos{
    char cargo[20];
    float salario;
};
typedef struct tipocargos tCargos;

int main(void){
    int num, i;
    float soma = 0;
    printf("Entre com o numero de cargos:\n");
    scanf("%d",&num);
    tCargos hahaha[num];

    for(i=0; i<num; i++){
        printf("Entre com o cargo %d: \n", i+1);
        scanf(" %s", hahaha[i].cargo);
        printf("Entre com o salario %d: \n", i+1);
        scanf(" %f", &hahaha[i].salario);
        soma += hahaha[i].salario;
    }

    printf("A media salarial eh: %.2f \n", soma/num);
    printf("Os cargos acima da media sao: \n");
    for(i=0; i<num; i++){
        if(soma/num < hahaha[i].salario){
            printf("Cargo %s \n", hahaha[i].cargo);
        }
    }

    return 0;
}