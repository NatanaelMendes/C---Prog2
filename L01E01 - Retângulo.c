#include <stdio.h>
#include <math.h>


int main(void) {
  float base, altura, diagonal, perimetro, area;
  printf("Entre com a Base e com a Altura do Retangulo\n");
  scanf("%f %f", &base, &altura);
  area = base * altura;
  perimetro = 2 * base + 2 * altura;
  diagonal = sqrt(base * base + altura * altura);
  printf("Sua area eh: %.2f \n", area);
  printf("Sua perimetro eh: %.2f \n", perimetro);
  printf("Sua diagonal eh: %.2f \n", diagonal);

  return 0;
}