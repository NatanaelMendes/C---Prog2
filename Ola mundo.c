#include <stdio.h>


int main(void){
    char nome[20];

    printf("\nEscreva seu nome:\n");
    scanf("%s", &nome);
    printf("Prazer, %s!", nome);

    return 0;
}