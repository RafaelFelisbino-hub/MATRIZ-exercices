/*Utilizando uma matriz 3x3 construa um algoritmo que preencha a matriz e:
a. Mostre os elementos da diagonal principal (linha = coluna)
b. Calcule a média dos elementos da matriz;
c. Calcule quantos valores da matriz estão acima da média calculada.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float matriz[3][3] = { {10,20,30}, {40,50,60}, {70,80,90} }, media, acimaMedia = 0, somaMedia = 0, repeticao = 0;
	int i, j;
	
	
	printf("Os elementos da diagonal sao :  %.0f\n",  matriz[0][0]);
	printf("Os elementos da diagonal sao :  %.0f\n",  matriz[1][1]);
	printf("Os elementos da diagonal sao :  %.0f\n",  matriz[2][2]);
		
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) 
		{
			somaMedia += matriz[i][j];
			repeticao++;
		}
	
	media = somaMedia / repeticao;
	
	printf("\nA media dos elementos e:  %.2f", media);

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) 
		{
			if (matriz[i][j] > media)
				acimaMedia++;
		}
	
	printf("\nExistem %.0f valores acima da media\n",acimaMedia);
	
	system("pause");
}