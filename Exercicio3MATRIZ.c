/*Elabore um algoritmo que leia uma matriz 3x3 de números reais e calcule a
média dos valores de cada linha da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	float matriz[3][3], media = 0, media2 = 0, media3 = 0, somaTotal = 0, somaTotal2 = 0, somaTotal3 = 0;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			printf("Digite os numeros: %d linha, %d coluna:  ", i+1, j+1);
			scanf_s("%f", &matriz[i][j]);

			somaTotal += matriz[i][j];
		}

	printf("As medias sao :  %.2f\n", somaTotal / 9);
	;

	system("pause");
}
