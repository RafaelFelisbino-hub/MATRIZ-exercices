/*Criar um algoritmo para uma faculdade, ler o nome, registro do aluno, turma (A, B ou C) e média das notas.
Ao final imprimir relatórios com o número de alunos lidos, a média de notas da
faculdade, a média de notas de cada turma. Imprimir também o registro e a turma do aluno com a maior média da faculdade.
Deverá ser lido 1000 alunos ou até que o usuário digite “sair” no
local referente ao nome do aluno.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char nomeAluno[1000][30], turma[1000][30], sair[30] = { "sair" };
	int i, registroAluno[1000], a = 0, b = 0, c = 0, registroAlunoMaiorMedia = 0, comparador = 0, j = 0;
	float mediaFaculdade, mediaNotas, somaNotas = 0, mediaTurmaA = 0, mediaTurmaB = 0, mediaTurmaC = 0, maiorMedia = 0;

	for (i = 0; i < 1000; i++)
	{
		printf("Digite o nome do aluno(a) ou sair para terminar:  ");
		scanf_s("%s", &nomeAluno[j], 1000);
				
		if (nomeAluno[i][j])
			comparador = strcmp(nomeAluno, sair);
		if (comparador == 0)
			break;
		
		printf("Digite o registro do aluno(a):  ");
		scanf_s("%i", &registroAluno[i]);

		printf("Digite a turma do aluno(a) (A) (B) ou (C):  ");
		scanf_s("%s", &turma[i], 1000);
		turma[i][j] = toupper(turma[i][j]);

		printf("Digite a media de notas do aluno %i :  ", registroAluno[i]);
		scanf_s("%f", &mediaNotas);

		somaNotas += mediaNotas;

		if (turma[i][j] == 'A')
		{
			a++;
			mediaTurmaA += mediaNotas;
		}
		if (turma[i][j] == 'B')
		{
			b++;
			mediaTurmaB += mediaNotas;
		}
		if (turma[i][j] == 'C')
		{
			c++;
			mediaTurmaC += mediaNotas;
		}
		if (mediaNotas > maiorMedia)
		{
			maiorMedia = mediaNotas;
			registroAlunoMaiorMedia = registroAluno[i];
			turma[0][0] = turma[i][j];
		}
		fflush(stdin);
		system("cls");
	}

	mediaFaculdade = somaNotas / i;
	mediaTurmaA /= a;
	mediaTurmaB /= b;
	mediaTurmaC /= c;

	printf("O numero de alunos lidos e:  %i\n", i);
	printf("A media de notas da faculdade e:  %.2f\n", mediaFaculdade);
	printf("A media da turma A e: %.2f da turma B e %.2f e da C %.2f\n", mediaTurmaA, mediaTurmaB, mediaTurmaC);
	printf("O aluno com a maior media possui o registro %i e faz parte da turma %s\n", registroAlunoMaiorMedia, turma);

	system("pause");

}
