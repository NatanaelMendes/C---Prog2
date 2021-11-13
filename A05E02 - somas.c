#include <stdio.h>

void pares(int n){
     if(n==2){
    printf("2;");
    }else{
        if (n%2==0){
            printf("%d, ", n);
            pares(n-2);
            }else{
            pares(n-1);
            }
}
}

int main(void){
    int numero;
    do{
    printf("Entre com o numero natural N > 0:\n");
    scanf("%d", &numero);    
    }while(numero < 0);
    pares(numero);
    return 0;
}

