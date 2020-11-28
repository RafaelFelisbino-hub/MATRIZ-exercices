/*A empresa de taxi aéreo Linhas Modernas necessita de um sistema para controle de frota. Serão armazenados: Dados da aeronave: Prefixo, Capacidade, Autonomia.
Dados dos Pilotos: Registro, Nome, Horas de Voo. Dados dos Clientes: CPF, Nome, Destino.
Dados do Voo: Número do voo, Prefixo aeronave, Registro do Piloto, Destino, CPF Cliente.
Criar uma função pra validar o CPF. Criar as funções separadas para armazenamento de dados. Atribuir uma funcionalidade para impressão de relatório de voo.*/

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include <stdbool.h>

int  k = 0, j = 0, op, qtdDadosCliente, saida, inicial = 0, inicio = 0, inicioCliente = 0;
char dadosAeronave[200][200][200], procurarVoo[200];

// VARIAVEIS PARA VALIDAR O CPF

char cpf[12];
int icpf[12];
int i, somador = 0, digito1, result1, result2, digito2, valor;

void dadosClientes();
void relatorioDeVoo();
void cadastroVoo();
bool validadorDeCPF(char pCpf[12]);
void gotoxy(int x, int y);
void layout();
void cadastroLayout();
void layoutConsultaVoo();
void cor(int cor_letra);
void layoutConsultaCliente();
void layoutNumeroVoo();

int main()
{
	do {
		layout();
		gotoxy(20, 2);
		printf("DIGITE 1 PARA CADASTRO DE VOO");
		gotoxy(20, 6);
		printf("DIGITE 2 PARA CONSULTAR UM VOO");
		gotoxy(20, 10);
		printf("DIGITE 3 PARA CONSULTA CLIENTES");
		gotoxy(20, 14);
		printf("DIGITE 4 PARA SAIR DO PROGRAMA");
		gotoxy(59, 13);
		scanf_s("%i", &op);

		printf("\n\n\n");
		system("cls");

		switch (op)
		{
		case 1:
			cadastroVoo();
			system("cls");
			break;
		case 2:
			relatorioDeVoo();
			system("cls");
			break;
		case 3:
			dadosClientes();
			system("cls");
			break;
		case 4:
			return 0;
			break;

		}
	} while (op != 5);

	system("pause");
}

void cadastroVoo()
{
	int restante = 0;

	system("color 17");
	cadastroLayout();
	gotoxy(64, 1);
	printf("Digite a quantidade de cadastros:  ");
	scanf_s("%i", &qtdDadosCliente);

	if (qtdDadosCliente <= inicial)
		qtdDadosCliente += inicial;
	
	for (k = inicial; k < qtdDadosCliente; k++)
	{
		cadastroLayout();
		restante = qtdDadosCliente - k;
		if (k > 0) 
		{
			gotoxy(64, 1);
			printf("Cadastros restantes: %i", restante);
		}
		
		gotoxy(17, 0);
		printf("Digite o numero de voo:  ");
		gotoxy(27, 1);
		scanf_s("%s", &dadosAeronave[k][0], 200);
		getchar();

		gotoxy(1, 3);
		printf("Digite a capacidade da aeronave:  ");
		scanf_s("%s", &dadosAeronave[k][1], 200);
		getchar();

		gotoxy(1, 5);
		printf("Digite a autonomia da aeronave em KM:  ");
		scanf_s("%s", &dadosAeronave[k][2], 200);

		getchar();
		gotoxy(1, 7);
		printf("Digite o nome do piloto:  ");
		scanf_s("%[^\n]s", &dadosAeronave[k][3], 200);

		getchar();
		gotoxy(1, 9);
		printf("Digite as horas de voo do piloto:  ");
		scanf_s("%s", &dadosAeronave[k][4], 200);

		getchar();
		gotoxy(1, 11);
		printf("Digite o nome do cliente:  ");
		scanf_s("%[^\n]s", &dadosAeronave[k][5], 200);

		getchar();
		gotoxy(1, 13);
		printf("Digite o prefixo da aeronave:  ");
		scanf_s("%s", &dadosAeronave[k][6], 200);

		getchar();
		gotoxy(1, 15);
		printf("Digite o registro do piloto:  ");
		scanf_s("%s", &dadosAeronave[k][7], 200);

		getchar();
		gotoxy(1, 17);
		printf("Digite o destino do cliente:  ");
		scanf_s("%[^\n]s", &dadosAeronave[k][8], 200);
		getchar();

		gotoxy(1, 19);
		printf("Digite o cpf do cliente sem pontos e tracos: ");
		scanf_s("%s", &dadosAeronave[k][9], 200);

		while (!validadorDeCPF(dadosAeronave[k][9]))
		{
			gotoxy(1, 21);
			printf("CPF INVALIDO");
			gotoxy(1,19);
			printf("Digite o cpf do cliente sem pontos e tracos: ");
			gotoxy(46, 19);
			scanf_s("%s", &dadosAeronave[k][9], 200);
		}

		system("cls");
		inicial++;
		
	}
}

void relatorioDeVoo()
{
	system("color 17");
	layoutNumeroVoo();
	gotoxy(1, 1);
	printf("Digite o numero de voo:  ");
	scanf_s("%s", &procurarVoo, 200);
	printf("\n");
	inicio = 0;
	
	for (k = 0; k < qtdDadosCliente; k++)
	{	
		saida = strcmp(procurarVoo, dadosAeronave[k][0]);
		if (saida == 0)
		{
			layoutConsultaVoo();
			gotoxy(1, 4 + inicio);
			printf("Prefixo Aeronave: %s\n", dadosAeronave[k][6]);
			gotoxy(1, 5 + inicio);
			printf("Registro Piloto: %s\n", dadosAeronave[k][7]);
			gotoxy(1, 6 + inicio);
			printf("Destino: %s\n", dadosAeronave[k][8]);
			gotoxy(1, 7 + inicio);
			printf("Nome do cliente(a): %s\n", dadosAeronave[k][5]);
			gotoxy(1, 8 + inicio);
			printf("CPF do Cliente: %s\n\n", dadosAeronave[k][9]);
			gotoxy(1, 9 + inicio);
			printf("\n");
			inicio += 8;
		}		
	}
	printf("\n\n");
	system("pause");
}

bool validadorDeCPF(char pCpf[12])
{
	for (i = 0; i < 11; i++)
		icpf[i] = pCpf[i] - 48;

	for (i = 0; i < 9; i++)
		somador += icpf[i] * (10 - i);

	result1 = somador % 11;

	if ((result1 == 0) || (result1 == 1))
		digito1 = 0;

	else
		digito1 = 11 - result1;

	somador = 0;

	for (i = 0; i < 10; i++)
		somador += icpf[i] * (11 - i);

	valor = (somador / 11) * 11;
	result2 = somador - valor;

	if ((result2 == 0) || (result2 == 1))
		digito2 = 0;

	else
		digito2 = 11 - result2;

	if ((digito1 != icpf[9]) && (digito2 != icpf[10]))
		return false;
	else
		return true;
}

void dadosClientes()
{
	inicioCliente = 0;
	for (k = 0; k < qtdDadosCliente; k++)
	{
		layoutConsultaCliente();
		gotoxy(1, 1+inicioCliente);
		printf("Numero do voo: %s\n", dadosAeronave[k][0]);
		gotoxy(1, 2 + inicioCliente);
		printf("Nome: %s\n", dadosAeronave[k][5]);
		gotoxy(1, 3 + inicioCliente);
		printf("Destino: %s\n", dadosAeronave[k][8]);
		gotoxy(1, 4 + inicioCliente);
		printf("CPF: %s\n", dadosAeronave[k][9]);
		gotoxy(1, 5 + inicioCliente);
		printf("\n");
		inicioCliente += 6;
	}
	system("pause");
}

void layout() 
{
	int i;
	system("color 17");
	// LAYOUT GLOBAL
	gotoxy(0, 0); printf("%c", 218);
	for (i = 1; i <= 69; i++)
	{
		gotoxy(i, 0); printf("%c", 196);
	}
	gotoxy(70, 0); printf("%c", 191);
	for (i = 1; i <= 15; i++)
	{
		gotoxy(0, i); printf("%c", 179);
	}
	for (i = 1; i <= 15; i++)
	{
		gotoxy(70, i); printf("%c", 179);
	}
	gotoxy(0, 16); printf("%c", 192);
	gotoxy(70, 16); printf("%c", 217);
	for (i = 1; i <= 69; i++)
	{
		gotoxy(i, 16); printf("%c", 196);
	}
	//CADASTRO CLIENTES
	gotoxy(19, 1); printf("%c", 218);
	for (i = 20; i <= 50; i++)
	{
		gotoxy(i, 1); printf("%c", 196);
	}
	gotoxy(51, 1); printf("%c", 191);
	gotoxy(19, 2); printf("%c", 179);
	gotoxy(51, 2); printf("%c", 179);
	gotoxy(19, 3); printf("%c", 192);
	gotoxy(51, 3); printf("%c", 217);
	for (i = 20; i <= 50; i++)
	{
		gotoxy(i, 3); printf("%c", 196);
	}
	// CONSULTA VOO
	gotoxy(19, 5); printf("%c", 218);
	for (i = 20; i <= 50; i++)
	{
		gotoxy(i, 5); printf("%c", 196);
	}
	gotoxy(51, 5); printf("%c", 191);
	gotoxy(19, 6); printf("%c", 179);
	gotoxy(51, 6); printf("%c", 179);
	gotoxy(19, 7); printf("%c", 192);
	gotoxy(51, 7); printf("%c", 217);
	for (i = 20; i <= 50; i++)
	{
		gotoxy(i, 7); printf("%c", 196);
	}
	//DADOS CLIENTES
	gotoxy(19, 9); printf("%c", 218);
	for (i = 20; i <= 50; i++)
	{
		gotoxy(i, 9); printf("%c", 196);
	}
	gotoxy(51, 9); printf("%c", 191);
	gotoxy(19, 10); printf("%c", 179);
	gotoxy(51, 10); printf("%c", 179);
	gotoxy(19, 11); printf("%c", 192);
	gotoxy(51, 11); printf("%c", 217);
	for (i = 20; i <= 50; i++)
	{
		gotoxy(i, 11); printf("%c", 196);
	}
	// SAIR DO PROGRAMA
	gotoxy(19, 13); printf("%c", 218);
	for (i = 20; i <= 50; i++)
	{
		gotoxy(i, 13); printf("%c", 196);
	}
	gotoxy(51, 13); printf("%c", 191);
	gotoxy(19, 14); printf("%c", 179);
	gotoxy(51, 14); printf("%c", 179);
	gotoxy(19, 15); printf("%c", 192);
	gotoxy(51, 15); printf("%c", 217);
	for (i = 20; i <= 50; i++)
	{
		gotoxy(i, 15); printf("%c", 196);
	}

	// TAXI AEREO
	gotoxy(6, 3); printf("%c", 218);
	gotoxy(7, 3); printf("%c", 196);
	gotoxy(8, 3); printf("%c", 191);
	for (i = 4; i <= 13; i++)
	{
		gotoxy(6, i); printf("%c", 179);
	}
	for (i = 4; i <= 13; i++)
	{
		gotoxy(8, i); printf("%c", 179);
	}
	gotoxy(6, 14); printf("%c", 192);
	gotoxy(7, 14); printf("%c", 196);
	gotoxy(8, 14); printf("%c", 217);
	gotoxy(7, 4); printf("T");
	gotoxy(7, 5); printf("A");
	gotoxy(7, 6); printf("X");
	gotoxy(7, 7); printf("I");
	gotoxy(7, 9); printf("A");
	gotoxy(7, 10); printf("E");
	gotoxy(7, 11); printf("R");
	gotoxy(7, 12); printf("E");
	gotoxy(7, 13); printf("O");
	//NOME EMPRESA

	gotoxy(0, 17); printf("%c", 218);
	for (i = 1; i <= 69; i++)
	{
		gotoxy(i, 17); printf("%c", 196);
	}
	gotoxy(70, 17); printf("%c", 191);
	gotoxy(0, 18); printf("%c", 179);
	gotoxy(70, 18); printf("%c", 179);
	gotoxy(0, 19); printf("%c", 192);
	gotoxy(70, 19); printf("%c", 217);
	for (i = 1; i <= 69; i++)
	{
		gotoxy(i, 19); printf("%c", 196);
	}
	gotoxy(1, 18);
	printf("TAXI AEREO FELISBINO| RUA FELIZARDO| NUMERO 876| MINAS GERAIS| BRASIL");

	//DESTINOS

	gotoxy(75, 0); printf("%c", 218);
	for (i = 76; i <= 105; i++)
	{
		gotoxy(i, 0); printf("%c", 196);
	}
	gotoxy(106, 0); printf("%c", 191);
	for (i = 1; i <= 15; i++)
	{
		gotoxy(75, i); printf("%c", 179);
	}
	for (i = 1; i <= 15; i++)
	{
		gotoxy(106, i); printf("%c", 179);
	}
	gotoxy(75, 16); printf("%c", 192);
	gotoxy(106, 16); printf("%c", 217);
	for (i = 76; i <= 105; i++)
	{
		gotoxy(i, 16); printf("%c", 196);
	}
	for (i = 76; i <= 105; i++)
	{
		gotoxy(i, 2); printf("%c", 196);
	}
	gotoxy(87, 1); printf("DESTINOS");
	gotoxy(84, 4); printf("GOIANIA");
	gotoxy(84, 5); printf("SAO PAULO");
	gotoxy(84, 6); printf("RIO DE JANEIRO");
	gotoxy(84, 7); printf("SAO TOME DAS LETRAS");
	gotoxy(84, 8); printf("FLORIANOPOLIS");
	gotoxy(84, 9); printf("MANAUS");
	gotoxy(84, 10); printf("BRASILIA");
	gotoxy(84, 11); printf("MACEIO");
	gotoxy(84, 12); printf("VITORIA");
	gotoxy(84, 13); printf("CUIABA");
	gotoxy(84, 14); printf("CURITIBA");
	gotoxy(84, 15); printf("SALVADOR");

	//CNPJ

	gotoxy(75, 17); printf("%c", 218);
	for (i = 76; i <= 105; i++)
	{
		gotoxy(i, 17); printf("%c", 196);
	}
	gotoxy(106, 17); printf("%c", 191);
	gotoxy(75, 18); printf("%c", 179);
	gotoxy(106, 18); printf("%c", 179);
	gotoxy(75, 19); printf("%c", 192);
	gotoxy(106, 19); printf("%c", 217);
	for (i = 76; i <= 105; i++)
	{
		gotoxy(i, 19); printf("%c", 196);
	}
	gotoxy(77, 18); printf("CNPJ: 45.955.759/0001-66");

	//AVIAO

	gotoxy(54, 6); printf("   ____       _");
	gotoxy(54, 7); printf("| __/_/_o____/_|");
	gotoxy(54, 8); printf("<[___/_/_-----<");
	gotoxy(54, 9); printf("|  o'");

	// SCANF

	gotoxy(58, 12); printf("%c", 218);
	gotoxy(59, 12); printf("%c", 196);
	gotoxy(60, 12); printf("%c", 191);
	gotoxy(58, 13); printf("%c", 179);
	gotoxy(60, 13); printf("%c", 179);
	gotoxy(58, 14); printf("%c", 192);
	gotoxy(60, 14); printf("%c", 217);
	gotoxy(59, 14); printf("%c", 196);
}

void cadastroLayout() 
{
	// LAYOUT CADASTRO CLIENTES

	gotoxy(0, 0); printf("%c", 218);
	for (i = 1; i <= 60; i++)
	{
		gotoxy(i, 0); printf("%c", 196);
	}
	gotoxy(61, 0); printf("%c", 191);
	for (i = 1; i <= 21; i++)
	{
		gotoxy(0, i); printf("%c", 179);
	}
	for (i = 1; i <= 21; i++)
	{
		gotoxy(61, i); printf("%c", 179);
	}
	gotoxy(0, 22); printf("%c", 192);
	gotoxy(61, 22); printf("%c", 217);
	for (i = 1; i <= 60; i++)
	{
		gotoxy(i, 22); printf("%c", 196);
	}
	for (i = 1; i <= 60; i++)
	{
		gotoxy(i, 2); printf("%c", 196);
	}
	for (i = 1; i <= 60; i++)
	{
		gotoxy(i, 4); printf("%c", 196);
	}
	for (i = 1; i <= 60; i++)
	{
		gotoxy(i, 6); printf("%c", 196);
	}
	for (i = 1; i <= 60; i++)
	{
		gotoxy(i, 8); printf("%c", 196);
	}
	for (i = 1; i <= 60; i++)
	{
		gotoxy(i, 10); printf("%c", 196);
	}
	for (i = 1; i <= 60; i++)
	{
		gotoxy(i, 12); printf("%c", 196);
	}
	for (i = 1; i <= 60; i++)
	{
		gotoxy(i, 14); printf("%c", 196);
	}
	for (i = 1; i <= 60; i++)
	{
		gotoxy(i, 16); printf("%c", 196);
	}
	for (i = 1; i <= 60; i++)
	{
		gotoxy(i, 18); printf("%c", 196);
	}
	for (i = 1; i <= 60; i++)
	{
		gotoxy(i, 20); printf("%c", 196);
	}
	//QUANTIDADE DE CADASTROS
	gotoxy(62, 0); printf("%c", 218);
	for (i = 63; i <= 100; i++)
	{
		gotoxy(i, 0); printf("%c", 196);
	}
	gotoxy(62, 1); printf("%c", 179);
	gotoxy(101, 1); printf("%c", 179);
	gotoxy(101, 0); printf("%c", 191);
	gotoxy(62, 2); printf("%c", 192);
	gotoxy(101, 2); printf("%c", 217);
	for (i = 63; i <= 100; i++)
	{
		gotoxy(i, 2); printf("%c", 196);
	}
}

void layoutConsultaVoo() 
{
	//LAYOUT CONSULTA VOO

	gotoxy(0, 3 + inicio); printf("%c", 218);
	for (i = 1; i <= 40; i++)
	{
		gotoxy(i, 3 + inicio); printf("%c", 196);
	}
	for (i = 4; i <= 9; i++)
	{
		gotoxy(0, i + inicio); printf("%c", 179);
	}
	for (i = 3; i <= 9; i++)
	{
		gotoxy(41, i + inicio); printf("%c", 179);
	}
	gotoxy(41, 3 + inicio); printf("%c", 191);
	gotoxy(0, 10 + inicio); printf("%c", 192);
	gotoxy(41, 10 + inicio); printf("%c", 217);
	for (i = 1; i <= 40; i++)
	{
		gotoxy(i, 10 + inicio); printf("%c", 196);
	}
}

void layoutNumeroVoo() 
{
	//DIGITE O NUMERO DO VOO
	gotoxy(0, 0); printf("%c", 218);
	for (i = 1; i <= 40; i++)
	{
		gotoxy(i, 0); printf("%c", 196);
	}

	gotoxy(0, 1); printf("%c", 179);
	gotoxy(41, 1); printf("%c", 179);

	gotoxy(41, 0); printf("%c", 191);
	gotoxy(0, 2); printf("%c", 192);
	gotoxy(41, 2); printf("%c", 217);
	for (i = 1; i <= 40; i++)
	{
		gotoxy(i, 2); printf("%c", 196);
	}
}

void layoutConsultaCliente() 
{
	//CONSULTA CLIENTE
	gotoxy(0, 0+inicioCliente); printf("%c", 218);
	for (i = 1; i <= 40; i++)
	{
		gotoxy(i, 0 + inicioCliente); printf("%c", 196);
	}
	gotoxy(41, 0 + inicioCliente); printf("%c", 191);
	for (i = 1; i <= 5; i++)
	{
		gotoxy(0, i + inicioCliente); printf("%c", 179);
	}
	for (i = 1; i <= 5; i++)
	{
		gotoxy(41, i + inicioCliente); printf("%c", 179);
	}
	gotoxy(0, 5 + inicioCliente); printf("%c", 192);
	gotoxy(41, 5 + inicioCliente); printf("%c", 217);
	for (i = 1; i <= 40; i++)
	{
		gotoxy(i, 5 + inicioCliente); printf("%c", 196);
	}
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void cor(int cor_letra)
{
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOut, cor_letra);
}