#include <stdio.h>


int main(void) {
    char nome[20];
    float consumo, valor;
    printf("Entre com o nome do Cliente, o consumo e o valor do quilowatt:\n");
    scanf("%s %f %f", &nome, &consumo, &valor);
    printf("%s vai pagar %.2f de conta de luz", nome, consumo * valor);

    return 0;
}