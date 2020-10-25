/*Ler 2 matrizes A e B de 5 linhas e 3 colunas, construir uma matriz C, onde
cada elemento de C seja a soma dos elementos correspondente em A com B.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int matrizA[5][3], matrizB[5][3], matrizC[5][3], i, j;

	for(i = 0; i < 5; i++)
		for (j = 0; j < 3; j++) 
		{
			printf("Digite os valores da primeira matriz: %d linha, %d coluna:  ", i, j);
			scanf_s("%i", &matrizA[i][j]);
		}
	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++)
		{
			printf("Digite os valores da segunda matriz: %d linha, %d coluna:  ", i, j);
			scanf_s("%i", &matrizB[i][j]);
		}
	for (i = 0; i < 5; i++)
		for (j = 0; j < 3; j++) 
		{
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];

			printf("A soma dos elementos e:  %i\n", matrizC[i][j]);
		}
	system("pause");
}