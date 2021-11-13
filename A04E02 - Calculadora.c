#include <stdio.h>
#include <math.h>

char menu(void) {
    char escolha;
    printf("Escolha uma operação de acordo com menu abaixo:\n");
    printf("Adicao: +\n");
    printf("Subtracao: -\n");
    printf("Multiplicacao: *\n");
    printf("Diviao: /\n");
    printf("Resto de Divisao: %");
    printf("Potenciacao: $\n");
    printf("Finalizar programa: !\n\n");
    scanf("%c", &escolha);
    if (escolha == "!"){
        printf("Obrigado!");
        break;
    } else{
        return escolha;
    }
}

int operacao(char op){
    float a, b;
    printf("Entre com os dois valores:\n");
    scanf("%f %f", &a &b);
    switch(op){
        case (op == "+"):
            printf("A soma eh: %.2f", a+b);
            menu();
        case (op == "-"):
            printf("A subtração eh: %.2f", a-b);
            menu();
        case (op == "*"):
            printf("A multiplicacao eh: %.2f", a*b);
            menu();
        case (op == "/"):
            printf("A divisao eh: %.2f", a/b);
            menu();
        case (op == "%%"):
            printf("O resto da divisao eh: %.d", a%b);
            menu();
        case (op == "$"):
            printf("A potenciacao eh: %.2f", a^b);
            menu();
    }
}

int main(void) {
    char resposta;
    do{
        resposta = menu();
        operacao(resposta);
        }
    } while (resposta != '!');


    return 0;
}