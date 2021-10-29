#include <stdio.h>

int main(void) {
    float salario_base, vendas;
    printf("Entre com o salario base e o total de vendas:\n");
    scanf("%f %f", &salario_base, &vendas);
    printf("O salario recebido nesse mes eh de %.2f, sendo %.2f de comissao", vendas*0.04 + salario_base, vendas*0.04);

    return 0;
}