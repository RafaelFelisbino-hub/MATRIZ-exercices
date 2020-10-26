/*Faça um algoritmo que carregue:
a. Um vetor com os nomes de 5 produtos;
b. Uma matriz 5x4 com os preços dos 5 produtos em 4 lojas diferentes
(cada linha da matriz corresponde a uma loja);

 Diante disso, faça uma segunda matriz 5x4 com os valores dos impostos
destes produtos a partir da seguinte regra:

Preço até 50,00 = 5% imposto
Preço entre 50,00 e 100 = 10% imposto
Preço acima de 100 = 20% imposto

 Imprima ainda, qual o nome do produto mais caro na loja 3 (terceira linha
da matriz).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char nomesProdutos[5][100], nomeCaro[100];
	float lojaProduto[4][5], matrizImpostos[4][5], maisCaro = 0;
	int i, j;

	for (i = 0; i < 5; i++)
	{
		printf("Digite os nomes dos produtos [%d]:  ", i);
		scanf_s("%[^\n]s", &nomesProdutos[i], 100);
		getchar();
	}
	
	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++) 
		{
			printf("Digite o preco dos produtos [%d] loja [%d] produto:  ", i, j);
			scanf_s("%f", &lojaProduto[i][j]);
		}

	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
		{
			if (lojaProduto[i][j] <= 50) 
				matrizImpostos[i][j] = lojaProduto[i][j] * 5 / 100 + lojaProduto[i][j];
			if(lojaProduto[i][j] > 50 && lojaProduto[i][j] <= 100)
				matrizImpostos[i][j] = lojaProduto[i][j] * 10 / 100 + lojaProduto[i][j];
			if (lojaProduto[i][j] > 100)
				matrizImpostos[i][j] = lojaProduto[i][j] * 20 / 100 + lojaProduto[i][j];
		}

	for (i = 3; i < 4; i++)
		for (j = 0; j < 5; j++) 
		{
			if (matrizImpostos[i][j] > maisCaro) 
			{
				maisCaro = matrizImpostos[i][j];
				nomeCaro[99] = strcpy_s(nomeCaro, 99, nomesProdutos[i]);
			}
		}

	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
		{
			printf("A matriz com os impostos [%d][%d]:  %.2f\n", i, j, matrizImpostos[i][j]);
		}

	printf("O produto mais caro da 3 linha e %s\n", nomeCaro);

	system("pause");
}