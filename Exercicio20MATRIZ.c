/*Escrever um algoritmo que lê uma matriz M(4,4) e cria 2 vetores SL(4) e
SC(4) que contenham, respectivamente, as somas das linhas e das colunas
de M. Escrever os vetores criados.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matriz[4][4], vetorSL[4] = {0,0,0,0}, vetorSC[4] = { 0,0,0,0 }, i, j, somaSL = 0, somaSC = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("Digite os valores da matriz [%d][%d]:  ", i, j);
			scanf_s("%i", &matriz[i][j]);
			vetorSC[i] += matriz[i][j];
		}
		somaSC += vetorSC[i];
		vetorSL[i] += i;
		somaSL += vetorSL[i];
	}

	printf("A soma das linhas e [%d] e a soma das colunas [%d]\n", somaSL, somaSC);

	system("pause");
}
