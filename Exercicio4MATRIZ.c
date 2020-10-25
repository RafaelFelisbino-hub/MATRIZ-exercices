/*Elabore um algoritmo que leia uma matriz 3x4 de inteiros, calcule quantos
elementos da matriz são positivos e, em seguida, construa uma segunda
matriz apenas com os elementos positivos. No lugar dos números negativos
da segunda matriz coloque o número zero. No final, imprima a quantidade
de números positivos e a segunda matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int matriz[3][4] = { { 10,20,30 }, { 40,-1,60 }, {70,80,90} }, positivos = 0, i, j;

	for(i = 0; i < 3; i++)
		for (j = 0; j < 4; j++) 
		{
			if (matriz[i][j] < 0)
				matriz[i][j] = 0;
			
			if (matriz[i][j] >= 0)
			{
				positivos++;
				printf("Os numeros positivos sao:  %i\n", matriz[i][j]);
			}

		}
	printf("\nA quantidade de numeros positivos e:  %i\n", positivos);
	
	system("pause");
}