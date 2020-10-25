/*Faça um algoritmo que leia uma matriz 4x4 e calcula o total dos valores
somados da segunda com a quarta coluna da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matriz[4][4], i, j, soma = 0;

	for(i = 0; i < 4; i++)
		for (j = 0; j < 4; j++) 
		{
			printf("Digite os valores da matriz [%d][%d]:  ", i, j);
			scanf_s("%i", &matriz[i][j]);
		}
	for (i = 1; i < 2; i++)
		for (j = 0; j < 4; j++) 
		{
			soma += matriz[i][j];
		}
	for (i = 3; i < 4; i++)
		for (j = 0; j < 4; j++) 
		{
			soma += matriz[i][j];
		}

	printf("O total dos valores e:  %i\n\n", soma);

	system("pause");
}