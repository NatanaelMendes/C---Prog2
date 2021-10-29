#include <stdio.h>

int main(void){
    int hora, min, seg;
    printf("Entre com a hora e minuto\n");
    scanf("%d %d",&hora, &min);
    min += hora*60;
    seg = min*60;
    printf("Isso equivale a %d minutos ou %d segundos", min, seg);


    return 0;
}