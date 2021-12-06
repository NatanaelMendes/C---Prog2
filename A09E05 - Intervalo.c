#include <stdio.h>

int imprimeSerie(int i, int j, int k){
    i += k;
    if (i >= j){
        return 0;
    }else{
        imprimeSerie(i, j, k);
        printf("%d\n", i); 
    }
}

int main(void) {
    int i, j, k;
    printf("Entre com o valor de i:\n");
    scanf("%d", &i);
    printf("Entre com o valor de j:\n");
    scanf("%d", &j);
    printf("Entre com o valor de k:\n");
    scanf("%d", &k);
    imprimeSerie(i, j, k);
    printf("\n %d %d %d", i, j, k);
    return 0;
}