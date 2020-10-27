/*Escreva um algoritmo que leia 6 números inteiros digitados pelo usuário e
os armazene em um vetor chamado jogador. O algoritmo deverá sortear 10
números inteiros e armazená-los em um vetor chamado sorteados. Depois o
algoritmo deverá comparar os números digitados pelo jogador com os
números sorteados. Se encontrar 4 números escreva a mensagem “Você
acertou 4 números”, se encontrar 5 números escreva a mensagem “Você
acertou 5 números”, se encontrar 6 números então o algoritmo deverá
imprimir “Você acertou todos os números”. Caso o algoritmo não encontre
nenhum número ele deverá imprimir a mensagem “Você acertou menos
pontos”.*/

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