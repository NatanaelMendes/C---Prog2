#include <stdio.h>

#define N 4

int diagonal_secundaria(int matrix[N][N]){
    int i, j, produto=1;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(i+j == N){
                produto *= matrix[i][j];
            }
        }
    }
    return produto;
}

int soma_acima_diagonal(int matrix[N][N]){
    int soma = 0, j,  i;
    for(i=0; i<N; i++){
        for(j= i+1; j<N; j++){
            soma += matrix[i][j]; 
        }
    }
    return soma;
}

int quantidade_primos(int matrix[N][N]){
    int i, j, k, aux = 0, contador = 0;
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            for(k=1; k < matrix[i][j]; k++){
                if(matrix[i][j] % k == 0){
                    aux += 1;
                }
            }
            if(aux == 2){
                contador += 1;
            }
            aux = 0;
        }
    }
    return contador;
}

int escreve_par(maior){
    if (maior > 0){
    printf("%d ", maior);
    escreve_par(maior-2);
    }
}


int main(void){
    int i, j, matrix[N][N], produto, soma, primos, maior;

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
        printf("Entre com o elemento %d x %d \n", i+1, j+1);
        scanf("%d", &matrix[i][j]);
        }
    }

    produto = diagonal_secundaria(matrix);
    printf("\n produto: \n %d", produto);
    soma = soma_acima_diagonal(matrix);
    printf("\n soma: \n %d", soma);
    primos = quantidade_primos(matrix);
    printf("\n Primos: \n %d \n", primos);

    maior = matrix[0][0];
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(matrix[i][j]>maior){
                maior = matrix[i][j];
            }
        }
    }
    
    if(maior % 2 != 0){
        maior -= 1;
    }else{
        maior -= 2;
    }

    printf("Numeros pares:\n");
    escreve_par(maior);

    return 0;
}