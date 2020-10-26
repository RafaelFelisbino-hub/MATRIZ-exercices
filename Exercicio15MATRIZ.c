/*Faça um algoritmo que recebe uma matriz M (3x3) e calcula a soma dos
elementos da diagonal principal e a soma dos elementos da diagonal
secundária da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matriz[3][3] = { {10,20,30}, {40,50,60}, {70,80,90} }, somaPrincipal = 0, somaSecundaria = 0, i, j;

	for(i = 0; i <1; i++)
		for (j = 0; j < 1; j++)
		{
			printf("Os elementos da diagonal primaria sao :  %i, %i, %i\n", matriz[0][0], matriz[1][1], matriz[2][2]);
			printf("Os elementos da diagonal secundaria sao : %i, %i, %i\n", matriz[2][0], matriz[1][1], matriz[0][2]);
		}

	somaPrincipal = matriz[0][0] + matriz[1][1] + matriz[2][2];
	somaSecundaria = matriz[2][0] + matriz[1][1] + matriz[0][2];

	printf("A soma da diagonal principal e:  %i\n", somaPrincipal);
	printf("A soma da diagonal secundaria e:  %i\n", somaSecundaria);

	system("pause");
}
