#include <stdio.h>

#define MAX 10

struct FILA {
    int dado[MAX];
    int inicio,fim,total;
};

typedef struct FILA fila;


void insere(fila *F, int num) {
    if (F->total < MAX) {
        F->dado[F->fim] = num;
        F->fim++;
        F->fim = F->fim % MAX;
        F->total++;
    }
}

int remover(fila *F) {
    int num;
    if (F->total > 0) {
        num = F->dado[F->inicio];
        F->inicio++;
        F->inicio = F->inicio%MAX;
        F->total--;
    }
    return num;
}


int main (void){
    fila F;
    F.inicio = 0;
    F.fim = 0;
    F.total = 0;
    int aux;

    printf("Entre com o valor: \n");
    scanf("%d", &aux);
    while(aux >= 0){
        insere(&F, aux);
        printf("Entre com o valor: \n");
        scanf("%d", &aux);
    }
    printf("Digite o numero dos processos finalizados: \n");
    scanf("%d", &aux);
    while(F.total > aux){
        printf("%d ", remover(&F));
        aux++;
    }
    return 0;
}