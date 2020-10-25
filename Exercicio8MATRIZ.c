/*Faça um algoritmo que leia uma matriz 2x5 e contar quantos valores da
matriz estão entre 10 e 20.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int matriz[2][5], i, j;

	for(i = 0; i < 2; i++)
		for (j = 0; j < 5; j++)
		{
			printf("Digite os numeros: %d linha, %d coluna:  ", i, j);
			scanf_s("%i", &matriz[i][j]);
		}
	for (i = 0; i < 2; i++)
		for (j = 0; j < 5; j++) 
		{
			if (matriz[i][j] > 10 && matriz[i][j] < 20)
				printf("Os numeros entre 10 e 20 na posicao [%d][%d]:  %i\n",i, j, matriz[i][j]);
		}
	
	system("pause");
}