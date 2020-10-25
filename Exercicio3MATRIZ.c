/*Elabore um algoritmo que leia uma matriz 3x3 de números reais e calcule a
média dos valores de cada linha da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i, j;
	float matriz[3][3], media, media2, media3, somaTotal = 0, somaTotal2 = 0, somaTotal3 = 0;

	for(i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) 
		{
			printf("Digite os numeros: %d linha, %d coluna:  ", i, j);
			scanf_s("%f", &matriz[i][j]);

		}
	for (i = 0; i < 1; i++)
		for (j = 0; j < 3; j++) 
		{
			somaTotal += matriz[i][j];
		}
	media = somaTotal / j;
	printf("A media da 1 linha e:  %.2f\n", media);

	for (i = 1; i < 2; i++)
		for (j = 0; j < 3; j++)
		{
			somaTotal2 += matriz[i][j];
		}
	media2 = somaTotal / j;
	printf("A media da 2 linha e:  %.2f\n", media2);

	for (i = 2; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			somaTotal3 += matriz[i][j];
		}
	media3 = somaTotal / j;
	printf("A media da 3 linha e:  %.2f\n", media3);

	
	
	
	
	
	system("pause");
}