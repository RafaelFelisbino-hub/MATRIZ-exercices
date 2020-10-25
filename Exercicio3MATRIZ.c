/*Elabore um algoritmo que leia uma matriz 3x3 de números reais e calcule a
média dos valores de cada linha da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i, j;
	float matriz[3][3], media = 0, media2 = 0, media3 = 0, somaTotal = 0, somaTotal2 = 0, somaTotal3 = 0;

	for(i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) 
		{
			printf("Digite os numeros: %d linha, %d coluna:  ", i, j);
			scanf_s("%f", &matriz[i][j]);

			if (i == 0)
			{
				somaTotal += matriz[i][j];
			}

			if (i == 1)
			{
				somaTotal2 += matriz[i][j];
			}
			
			if (i == 2)
			{
				somaTotal3 += matriz[i][j];
			}
		}
	
	media = somaTotal / 3;
	media2 = somaTotal2 / 3;
	media3 = somaTotal3 / 3;
	printf("A media da primeira linha e :  %.2f", media);
	printf("A media da segunda linha e :  %.2f", media2);
	printf("A media da terceira linha e :  %.2f", media3);
	
	system("pause");
}
