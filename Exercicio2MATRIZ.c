/*Elaborar um algoritmo que permita ao usuário preencher uma matriz 3x3
de números inteiros e calcule a soma dos elementos da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int matriz[3][3], i, j, soma = 0;

	for(i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) 
		{
			printf("Digite os numeros: %d linha, %d coluna:  ", i, j);
			scanf_s("%i", &matriz[i][j]);
			
			soma += matriz[i][j];
		}
	
	printf("A soma dos numeros sao:  %i\n", soma);
		
	system("pause");
}