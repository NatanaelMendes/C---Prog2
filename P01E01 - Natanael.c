#include <stdio.h>
#define N 2

int preencheMat(int matrix[N][N]){
    int i, j;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("Entre com o valor de (%d, %d) \n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void escreveMat(int matrix[N][N]){
    int i, j;
    printf("\n");
    for(i=0;i<N; i++){
        for(j=0;j<N; j++){
            printf("%d ", matrix[i][j]);
        }
    printf("\n");
    }
    printf("\n");
}

void somaMat(int matrix[N][N], int matrix2[N][N], int soma[N][N]){
    int i, j;
    printf("\n\n SOMA\n");
    for(i=0;i<N; i++){
        for(j=0;j<N; j++){
           soma[i][j] = matrix[i][j] + matrix2[i][j];
    }
    }
    escreveMat(soma);
}

void subtrairMat(int matrix[N][N], int matrix2[N][N], int subtracao[N][N]){
    int i, j;
    printf("\n\n Subtracao:\n");
    for(i=0; i<N; i++){
        for(j=0;j<N; j++){
           subtracao[i][j] = matrix[i][j] - matrix2[i][j];
        }
    }
    escreveMat(subtracao);
}


void multiplicaMat(int matrix[N][N], int matrix2[N][N], int multip[N][N]){
    int i, j, k;
    printf("\n\n Multiplicacao: \n");
    for(i=0;i<N; i++){
        for(j=0;j<N; j++){
            multip[i][j]=0; 
            for(k=0;k<N; k++){
                multip[i][j] += matrix[i][k] * matrix2[k][j];
            }
        }
    }
    escreveMat(multip);
}


void menu(int matrix[N][N], int matrix2[N][N]){
    int tecla, soma[N][N], subtracao[N][N], multip[N][N];
    do{
    printf("\n");
    printf("================================\n");
    printf("MENU\n");
    printf("1 - (A + B) \n");
    printf("2 - (A - B) \n");
    printf("3 - (A * B) \n");
    printf("4 - Fim de Programa) \n");
    scanf("%d", &tecla);
    if(tecla == 1){
        somaMat(matrix, matrix2, soma);
    }
    if(tecla == 2){
        subtrairMat(matrix, matrix2, subtracao);
    }
    if (tecla == 3){
        multiplicaMat(matrix, matrix2, multip);
    }
    }while(tecla != 4);
}


int main(void) {
    int matrix[N][N], matrix2[N][N];

    preencheMat(matrix);
    preencheMat(matrix2);
    printf("Matriz 1:\n");
    escreveMat(matrix);
    printf("Matriz 2:\n");
    escreveMat(matrix2);
    menu(matrix, matrix2);



    return 0;
}