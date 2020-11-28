/*Criar um algoritmo para uma empresa de pesquisa, onde serão lidos os seguintes dados: Nome entrevistado, sexo, idade, canal de tv preferido, canal de tv malquisto.
Serão 20 entrevistados que devem ter todos os dados armazenados. Ao final imprimir a média de idade das pessoas do canal mais votado como preferido,
a média de idade das pessoas do canal mais votado como malquisto, o número de pessoas de cada sexo de cada canal de tv.
Imprimir também todos os dados lidos em forma de tabela.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <Windows.h>

void gotoxy(int x, int y);

int main()
{
	char nomeEntrevistado[20][30], sexo[20][20];
	int idade[20], canalTvPreferido[20], canalTvOdiado[20], masculino = 0, feminino = 0, i, j = 0;
	int canalPreferido1 = 0, canalPreferido2 = 0, canalPreferido3 = 0, canalOdiado1 = 0, canalOdiado2 = 0, canalOdiado3 = 0, canalPreferido = 0, canalOdiado = 0;
	int masculino1 = 0, masculino2 = 0, masculino3 = 0, feminino1 = 0, feminino2 = 0, feminino3 = 0;
	float mediaIdadeCanalPreferido, mediaIdadeCanalOdiado, somaIdade = 0, somaIdade2 = 0, somaIdade3 = 0, somaIdade4 = 0, somaIdade5 = 0, somaIdade6 = 0;

	for (i = 0; i < 20; i++)
	{
		printf("Digite o seu nome:  ");
		scanf_s("%s", &nomeEntrevistado[i][j], 20);
		getchar();

		printf("Digite seu sexo (M) ou (F):  ");
		scanf_s("%s", &sexo[i], 20);
		sexo[i][j] = toupper(sexo[i][j]);

		printf("Digite sua idade:  ");
		scanf_s("%i", &idade[i]);

		printf("Digite o numero do canal de tv preferido (1) (2) ou (3):  ");
		scanf_s("%i", &canalTvPreferido[i]);

		printf("Digite o numero do canal de tv odiado (1) (2) ou (3):  ");
		scanf_s("%i", &canalTvOdiado[i]);

		if (canalTvPreferido[i] == 1)
			canalPreferido1++;
		if (canalTvPreferido[i] == 2)
			canalPreferido2++;
		if (canalTvPreferido[i] == 3)
			canalPreferido3++;

		if (canalPreferido1 > canalPreferido2 && canalPreferido1 > canalPreferido3)
		{
			canalPreferido = 1;
			if (canalTvPreferido[i] == 1)
				somaIdade += idade[i];
		}

		if (canalPreferido2 > canalPreferido1 && canalPreferido2 > canalPreferido3)
		{
			canalPreferido = 2;
			if (canalTvPreferido[i] == 2)
				somaIdade2 += idade[i];
		}
		if (canalPreferido3 > canalPreferido1 && canalPreferido3 > canalPreferido2)
		{
			canalPreferido = 3;
			if (canalTvPreferido[i] == 3)
				somaIdade3 += idade[i];
		}

		if (canalTvOdiado[i] == 1)
			canalOdiado1++;
		if (canalTvOdiado[i] == 2)
			canalOdiado2++;
		if (canalTvOdiado[i] == 3)
			canalOdiado3++;

		if (canalOdiado1 > canalOdiado2 && canalOdiado1 > canalOdiado3)
		{
			canalOdiado = 1;
			if (canalTvOdiado[i] == 1)
				somaIdade4 += idade[i];
		}
		if (canalOdiado2 > canalOdiado1 && canalOdiado2 > canalOdiado3)
		{
			canalOdiado = 2;
			if (canalTvOdiado[i] == 2)
				somaIdade5 += idade[i];
		}
		if (canalOdiado3 > canalOdiado1 && canalOdiado3 > canalOdiado2)
		{
			canalOdiado = 3;
			if (canalTvOdiado[i] == 3)
				somaIdade6 += idade[i];
		}

		if (canalTvPreferido[i] == 1 && sexo[i][j] == 'M')
			masculino1++;
		if (canalTvOdiado[i] == 1 && sexo[i][j] == 'M')
			masculino1++;
		if (canalTvPreferido[i] == 2 && sexo[i][j] == 'M')
			masculino2++;
		if (canalTvOdiado[i] == 2 && sexo[i][j] == 'M')
			masculino2++;
		if (canalTvPreferido[i] == 3 && sexo[i][j] == 'M')
			masculino3++;
		if (canalTvOdiado[i] == 3 && sexo[i][j] == 'M')
			masculino3++;

		if (canalTvPreferido[i] == 1 && sexo[i][j] == 'F')
			feminino1++;
		if (canalTvOdiado[i] == 1 && sexo[i][j] == 'F')
			feminino1++;
		if (canalTvPreferido[i] == 2 && sexo[i][j] == 'F')
			feminino2++;
		if (canalTvOdiado[i] == 2 && sexo[i][j] == 'F')
			feminino2++;
		if (canalTvPreferido[i] == 3 && sexo[i][j] == 'F')
			feminino3++;
		if (canalTvOdiado[i] == 3 && sexo[i][j] == 'F')
			feminino3++;
		system("cls");

	}
	if (canalPreferido == 1)
		mediaIdadeCanalPreferido = somaIdade / canalPreferido1;
	if (canalPreferido == 2)
		mediaIdadeCanalPreferido = somaIdade2 / canalPreferido2;
	if (canalPreferido == 3)
		mediaIdadeCanalPreferido = somaIdade3 / canalPreferido3;
	if (canalOdiado == 1)
		mediaIdadeCanalOdiado = somaIdade4 / canalOdiado1;
	if (canalOdiado == 2)
		mediaIdadeCanalOdiado = somaIdade5 / canalOdiado2;
	if (canalOdiado == 3)
		mediaIdadeCanalOdiado = somaIdade6 / canalOdiado3;

	gotoxy(0, 0); printf("%c", 218);
	for (i = 1; i <= 8; i++)
	{
		gotoxy(0, i); printf("%c", 179);
	}
	gotoxy(0, 8); printf("%c", 192);
	for (i = 1; i <= 65; i++)
	{
		gotoxy(i, 0); printf("%c", 196);
	}
	gotoxy(66, 0); printf("%c", 191);
	for (i = 1; i <= 8; i++)
	{
		gotoxy(66, i); printf("%c", 179);
	}
	gotoxy(66, 8); printf("%c", 217);
	for (i = 1; i <= 65; i++)
	{
		gotoxy(i, 8); printf("%c", 196);
	}
	for (i = 1; i <= 65; i++)
	{
		gotoxy(i, 2); printf("%c", 196);
	}
	for (i = 1; i <= 65; i++)
	{
		gotoxy(i, 4); printf("%c", 196);
	}
	for (i = 1; i <= 65; i++)
	{
		gotoxy(i, 6); printf("%c", 196);
	}

	gotoxy(2, 1);
	printf("Canal preferido: %i. Canal odiado: %i\n", canalPreferido, canalOdiado);
	gotoxy(2, 3);
	printf("Masculino canal 1: %i. Masculino canal 2: %i. Masculino canal 3: %i\n", masculino1, masculino2, masculino3);
	gotoxy(2, 5);
	printf("Feminino canal 1: %i. Feminino canal 2: %i. Feminino canal 3: %i\n", feminino1, feminino2, feminino3);
	gotoxy(2, 7);
	printf("Media idade canal favorito %.2f. Media Idade canal odiado %.2f", mediaIdadeCanalPreferido, mediaIdadeCanalOdiado);
	printf("\n\n\n\n\n\n\n");
	system("pause");
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}