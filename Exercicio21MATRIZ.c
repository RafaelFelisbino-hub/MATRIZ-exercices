/*Escreva um algoritmo que leia 6 n�meros inteiros digitados pelo usu�rio e
os armazene em um vetor chamado jogador. O algoritmo dever� sortear 10
n�meros inteiros e armazen�-los em um vetor chamado sorteados. Depois o
algoritmo dever� comparar os n�meros digitados pelo jogador com os
n�meros sorteados. Se encontrar 4 n�meros escreva a mensagem �Voc�
acertou 4 n�meros�, se encontrar 5 n�meros escreva a mensagem �Voc�
acertou 5 n�meros�, se encontrar 6 n�meros ent�o o algoritmo dever�
imprimir �Voc� acertou todos os n�meros�. Caso o algoritmo n�o encontre
nenhum n�mero ele dever� imprimir a mensagem �Voc� acertou menos
pontos�.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int jogador[6], sorteados[10], i, j, cont = 0;

	srand(time(NULL));

	for (i = 0; i < 6; i++)
	{
		printf("Digite os numeros de 0 a 9 [%d]:  ", i);
		scanf_s("%i", &jogador[i]);
	}
	
	for (j = 0; j < 10; j++)
	{
		sorteados[j] = rand() % 10;
		printf("Sorteados = [%d]\n", sorteados[j]);
	}

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++) 
			if (jogador[i] == sorteados[j])
				cont++;
		
	if (cont < 4)
		printf("Voce acertou menos pontos\n");
	if (cont == 4)
		printf("Parabens voce acertou 4 numeros\n");
	if (cont == 5)
		printf("Parabens voce acertou 5 numeros\n");
	if (cont == 6)
		printf("Parabens voce acertou todos os numeros\n");
	
	system("pause");
}