#include <stdio.h>

int main(void) {
    float a, b, c;
    printf("Entre com os lados\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a >= 0 || b >= 0 || c >= 0){
        if (a+b > c && b+c > a && c+a > b){
            if (a != b && b != c && c != a){
                printf("escaleno");
            }else{
                if (a == b && b == c)
                {
                    printf("Equilatero");
                }else{
                    printf("Isoscele");
                }
            }
        }else{
            printf("Nao eh triangulo2!");    
        }
    }else{
        printf("Nao eh triangulo!");
    }
    
    
    return 0;
}