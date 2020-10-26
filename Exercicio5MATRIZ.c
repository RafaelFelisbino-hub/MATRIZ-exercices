/*Elabore um algoritmo que leia uma matriz 4x4 de inteiros e conte quantos
números pares existem na terceira coluna da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int matriz[4][4], i, j, pares = 0;

	for(i = 0; i < 4; i++)
		for (j = 0; j < 4; j++) 
		{
			printf("Digite os numeros: %d linha, %d coluna:  ", i, j);
			scanf_s("%i", &matriz[i][j]);
		}
	for (i = 0; i < 4; i++)
		for (j = 3; j < 4; j++) 
		{
			if (matriz[i][j] % 2 == 0) 
			{
				pares++;
			}
		}
	printf("A quantidade de pares e:  %i\n", pares);

	system("pause");
}
