#include <stdio.h>

int main(void){
    int  n, i, fatorial=1;
    printf("Entre com o valor de N para calculo do fatorial: \n");
    scanf("%d", &n);
    for(i = 2; i <= n; i++){
        fatorial = fatorial * i;
    }
    printf("O fatorial de %d eh: %d \n", n, fatorial);
    return 0;
}