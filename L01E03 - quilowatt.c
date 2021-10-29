#include <stdio.h>

int main(void) {
    float salario, consumo, total;
    printf("Entre com o salario minimo e o consumo\n");
    scanf("%f %f", &salario, &consumo);
    total = consumo *(salario/10);
    printf("O quilowatt custa %.2f e o valor devido eh de %.2f", salario/10, total);


    return 0;
}
