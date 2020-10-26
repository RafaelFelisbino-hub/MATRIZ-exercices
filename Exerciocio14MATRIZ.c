/*Faça um algoritmo que preenche uma matriz 4x4 e em seguida troca os
valores da primeira linha com os valores da quarta linha da mesma matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matriz[4][4], i, j, aux, aux2;

	for(i = 0; i < 4; i++)
		for (j = 0; j < 4; j++) 
		{
			printf("Digite os valores: %d linha, %d coluna:  ", i, j);
			scanf_s("%i", &matriz[i][j]);
		}
	
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++) 
		{
			aux = matriz[i][j];
			matriz[i][j] = matriz[3-i][j];
			matriz[3 - i][j] = aux;
		}

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
		{
			printf("Os valores para %d linha e %d coluna sao:  %i\n", i, j, matriz[i][j]);
		}

	system("pause");
}