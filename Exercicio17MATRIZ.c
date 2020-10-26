/*Faça um algoritmo que receba uma matriz 6 x 3 e calcule a soma dos
elementos das linhas pares da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int matriz[6][3], i, j, somaPar = 0;

	for(i = 0; i < 6; i++)
		for (j = 0; j < 3; j++)
		{
			printf("Digite os valores da matriz [%d][%d]:  ", i, j);
			scanf_s("%i", &matriz[i][j]);
		}
	
	for (i = 0; i < 6; i++)
		for (j = 0; j < 3; j++) 
		{
			if (i % 2 == 0) 
			{
				somaPar += matriz[i][j];
			}
		}

	printf("A soma dos elementos das linhas pares sao %i\n", somaPar);

	system("pause");
}