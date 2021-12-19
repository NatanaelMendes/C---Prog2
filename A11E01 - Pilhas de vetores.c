#include <stdio.h>

#define MAX 10
struct PILHA {
    int dado[MAX];
    int topo;

};

typedef struct PILHA pilha;


void push(pilha *P, int num){
    if (P->topo < MAX-1) {
        P->topo++;
       P->dado[P->topo] = num;
    }
}

int pop(pilha *P) {
    int num;
    if (P->topo >= 0) {
        num = P->dado[P->topo];
        P->topo--;
    }
    return num;
}


int main (void){
    pilha P;
    int num, aux;
    P.topo = -1;
    printf("Entre com o valor: \n");
    scanf("%d", &aux);
    while(aux >= 0){
        push(&P, aux);
        printf("Entre com o valor: \n");
        scanf("%d", &aux);
    }
    while(P.topo >=0){
        printf("%d ", pop(&P));
    }
    return 0;
}