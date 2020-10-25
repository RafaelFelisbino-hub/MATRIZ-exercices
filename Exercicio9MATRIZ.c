/*Faça um algoritmo que leia uma matriz de 4 linhas e 5 colunas e encontra o
maior elemento da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matriz[4][5], i, j, maiorElemento;
	maiorElemento = matriz[0][0];

	for(i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
		{
			printf("Digite os valores: %d linha, %d coluna:  ", i, j);
			scanf_s("%i", &matriz[i][j]);
		}
	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++) 
		{
			if (i == 0 && j == 0) 
				maiorElemento = matriz[0][0];
			
			if (matriz[i][j] > maiorElemento)
				maiorElemento = matriz[i][j];	
		}
	printf("O maior elemento da matriz e:  %i\n", maiorElemento);

	system("pause");
}