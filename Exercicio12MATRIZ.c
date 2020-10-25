/*12. Faça um algoritmo que receba uma matriz 5x3 e um valor inteiro X
fornecido pelo usuário. A seguir, multiplique cada elemento da primeira e
da ultima linha da matriz pelo valor de X. Mostre a matriz resultante.*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int matriz[5][3], i, j, multiplicador;

	for(i = 0; i < 5; i++)
		for (j = 0; j < 3; j++) 
		{
			printf("Digite os valores da matriz [%d][%d]:  ", i, j);
			scanf_s("%i", &matriz[i][j]);
		}
	
	printf("Digite o numero para multiplicar a matriz:  ");
	scanf_s("%i", &multiplicador);

	for (i = 0; i < 1; i++)
		for (j = 0; j < 3; j++)
		{
			matriz[i][j] *= multiplicador;
			printf("Os valores da primeira multiplicados linha sao [%d][%d]:  %i\n",i, j,  matriz[i][j]);
		}
	for (i = 4; i < 5; i++)
		for (j = 0; j < 3; j++) 
		{
			matriz[i][j] *= multiplicador;
			printf("Os valores da ultima linha multiplicados sao [%d][%d]:  %i\n", i, j, matriz[i][j]);
		}
	
	system("pause");
}