#include <stdio.h>

#define NATLETAS 2
#define NNOTAS 6


struct tipoAtleta {
	char nome[40];
	float media;
};
typedef struct tipoAtleta tatleta;

float calculaMedia(float *notas) {
	float maior=-1, menor=11, media=0;
	int i;

	for (i=0; i<NNOTAS; i++) {
		if (notas[i] > maior)
			maior = notas[i];
		if (notas[i] < menor)
			menor = notas[i];
}
printf("\nMaior=%.2f Menor=%.2f", maior, menor);
	for (i=0; i<NNOTAS; i++)
		media += notas[i];

	media -= (maior+menor);
	media /= (NNOTAS-2);
	return(media);

}

int main(void) {

	float notas[NNOTAS];
	int i,j;

	tatleta atleta[NATLETAS];

	for (i=0; i<NATLETAS; i++) {
		printf("Digite o nome do atleta: ");
		scanf(" %s", atleta[i].nome);

	for (j=0;j<NNOTAS;j++) {
		printf("Digite a nota %d: ", j+1);
		scanf("%f", &notas[j]);
}

	atleta[i].media = calculaMedia(notas);
	printf("\nMedia=%.2f\n\n", atleta[i].media);

}
	printf("\n\n---- RESULTADO ---- ");
	for (i=0; i<NATLETAS; i++) {
	printf("\n\nNome: %s", atleta[i].nome);
	printf("\nMédia: %.2f", atleta[i].media);

}
	return 0;
}