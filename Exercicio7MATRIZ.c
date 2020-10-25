/*Faça um algoritmo que lê 2 matrizes A e B de 2 linhas e 4 colunas. Em
seguida, construa uma matriz C onde cada elemento de C é o maior valor
entre os elementos correspondentes em A e B.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matrizA[2][4], matrizB[2][4], matrizC[2][4], i, j, maiorValor = 0;

	for(i = 0; i < 2; i++)
		for (j = 0; j < 4; j++) 
		{
			printf("Digite os numeros da primeira matriz: %d linha, %d coluna:  ", i, j);
			scanf_s("%i", &matrizA[i][j]);
		}
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
		{
			printf("Digite os numeros da segunda matriz: %d linha, %d coluna:  ", i, j);
			scanf_s("%i", &matrizB[i][j]);
		}
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++) 
		{
			if (matrizA[i][j] > matrizB[i][j])
				matrizC[i][j] = matrizA[i][j];
			else 
				matrizC[i][j] = matrizB[i][j];
					
				printf("Os maiores elementos sao:  %i\n", matrizC[i][j]);
		}
	system("pause");
}