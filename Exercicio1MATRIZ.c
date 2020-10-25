/*Construir um algoritmo que receba uma matriz 2x4 de números reais e
imprima na tela os números digitados.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float matriz[2][4];
	int i, j;

	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
		{
			printf("Digite o valor para:  %d linha / %d coluna:  ", i, j);
			scanf_s("%f", &matriz[i][j]);
		}
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
		{
			printf("Os valores para %d linha e %d coluna sao:  %.2f\n", i, j, matriz[i][j]);

		}
	system("pause");
}
