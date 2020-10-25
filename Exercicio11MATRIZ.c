/*Faça um algoritmo que leia uma matriz 3x4 de números inteiros e conta
quantos números pares e quantos números impares existem na matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int matriz[3][4], i, j, par = 0, impar = 0;

	for(i = 0; i < 3; i++)
		for (j = 0; j < 4; j++) 
		{
			printf("Digite os valores [%d][%d]:  ", i, j);
			scanf_s("%i", &matriz[i][j]);
		}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++) 
		{
			if (matriz[i][j] % 2 == 0)
				par++;
			else
				impar++;
		}

	printf("Existem %i numeros pares e %i numeros impares\n\n", par, impar);

	system("pause");
}