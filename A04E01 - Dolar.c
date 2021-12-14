#include <stdio.h>

int cotacao(float c, float d){
    return c * d;
}

int main(void) {
    float real, dolar, cota;
    printf("Entre com a cotacao do Dolar:\n");
    scanf("%f", &cota);
    do {
        printf("Entre com o montante em dolares\n");
        printf("Zero finaliza o programa:\n");
        scanf("%f", &dolar);
        real = cotacao(dolar, cota);
        printf("O valor em reais de $ %.2f eh: R$ %.2f\n\n", dolar, real);
    } while (dolar > 0);
    
    return 0;
}