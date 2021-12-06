#include <stdio.h>

#define n 3
struct tipoAluno{
    char nome[40];
    float nota[4];
    float media;
    int ano;
};

typedef struct tipoAluno tAluno;

int main(void){
    float media = 0;
    int i, j;
    tAluno aluno[n];
///    printf("Entre com o numero de alunos: \n");
///    scanf("%d", &aux);

    for (i=0; i<n; i++){
        printf("Entre com o nome do %d aluno: \n", i+1);
        scanf("%s", &aluno[i].nome);
        for(j=0; j<=3; j++){
            printf("Entre com a nota %d \n", j+1);
            scanf("%f", &aluno[i].nota[j]);
            media += aluno[i].nota[j]; 
        }
        aluno[i].media = media/4;
        media = 0;
        printf("Entre com o ano de ingresso: \n");
        scanf("%f", &aluno[i].ano);
    }
    media = aluno[0].media;
    for(i=1; i<=n; i++){
        if(media<aluno[i].media){
            media = aluno[i].media;
        }
    }
    printf("\nAluno(s) com a(s) Maior(es) Media(s):\n");
    for(i=0; i<n; i++){
        if(aluno[i].media = media){
            printf("%s \n", aluno[i].nome);
        }
    }
    return 0;
}