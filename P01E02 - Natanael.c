#include <stdio.h>

#define N 2

struct tipoAluno{
    char mat[7];
    char nome[40];
    float CR;
    int trancados;
};

typedef struct tipoAluno tAluno;

void preenche(tAluno vet[N]){
    int i;
    for(i=0; i<N; i++){
        printf("Entre com a Matricula %d:\n", i);
        scanf("%s", vet[i].mat);
        printf("Entre com o Nome %d:\n", i);
        scanf("%s", vet[i].nome);
        printf("Entre com o CR %d:\n", i);
        scanf("%f", &vet[i].CR);
        printf("Entre com o numero de periodos trancados %d:\n", i);
        scanf("%d", &vet[i].trancados);
    }
}

void imprime(tAluno vet[N]){
    int i;
    printf("=============\n\n");
    for(i=0; i<N; i++){
        printf("%s \n", vet[i].mat);
        printf("%s \n", vet[i].nome);
        printf("%f \n", vet[i].CR);
        printf("%d \n", vet[i].trancados);
    }
    printf("\n");

}



///void ordena(tAluno vet[N]){
 ///   tAluno aux;
 ///   int i, j;
  ///  float maior = vet[0].CR;
 ///   for(i=0; i<N; i++){
   ///     if(i+1 < N){
 ///           if(vet[i].CR < vet[i+1].CR){
 ///               aux = vet[i];
  ///              vet[i] = vet[i+1];
  ///              vet[i+1] = aux;
  ///          }
 ///           if(maior < vet[i].CR){
  ///              maior = vet[i].CR;
  ///          }
 ///       }    
 ///   }
  ///  for(j=0; j<N; j++){
   ///     if(maior < vet[j].CR){
   ///         ordena(vet);
  ///      }
 ///   }
///}







///int jubila(tAluno vet[N]){
///    int contador = 0;
 ///   char ano[5], semestre[2];
///    printf("\nJubilamento\n");
 ///   printf("Qual periodo estamos? \n");
 ///   scanf("%s",&semestre);
 ///   printf("Qual ano estamos? \n");
 ///   scanf("%s", ano);
 ///   for(int i=0; i<N; i++){
 ///       vet[i].mat[1]
 ///   }
 ///   return contador;
///}





int main(void) {
    tAluno vet[N];
    preenche(vet);
    imprime(vet);
 ///   ordena(vet);
///     jubila(vet);



    return 0;
}