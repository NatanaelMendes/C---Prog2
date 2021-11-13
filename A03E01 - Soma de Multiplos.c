#include <stdio.h>

int main(void){
    int n, soma=0, i;
    printf("Entre com o valor de N para somar os multiplos menores que 200\n");
    scanf("%d", &n);
    printf("Digite 1 para somar apenas os multiplos maiores que 100\n");
    scanf("%d", &i);
    if(i==1){
        i = 101;
    }else{
        i = n;
    }
    while(i < 200){
        if (i % n == 0){
            soma += i;
        }
        i +=1;
}
    printf("A soma dos multiplos de %d menores que 200 eh: %d \n", n, soma);
    
    
    return 0;
}