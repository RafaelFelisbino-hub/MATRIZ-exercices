/*Em uma cidade do interior, sabe-se que, durante 31 dias do mês de
outubro, foi feita a coleta de temperatura diariamente pela manhã.
Elabore um algoritmo que leia os dados e que calcule e escreva:
● A temperatura média
● Quantos dias a temperatura foi inferior à temperatura média;
● Quais os dias do mês nos quais a temperatura foi superior à
temperatura média;*/

#include <stdio.h>
#include <stdlib.h>  


int main() 
{
	int i,somaTemperatura = 0, diaInferior = 0;
	float media, temperaturasOutubro[31];

	for (i = 0; i < 10; i++) 
	{
		printf("Digite as temperaturas:  ");
		scanf_s("%f", &temperaturasOutubro[i]);
		somaTemperatura += temperaturasOutubro[i];
	}

	media = somaTemperatura / i;
	printf("\nA temperatura media e:  %.2f\n\n", media);
	
	for (i = 0; i < 10; i++)
	{
		if (temperaturasOutubro[i] < media)
		{
			diaInferior++;
		}
		if (temperaturasOutubro[i] > media)
		{
			printf("Temperatura maior que a media no dia %i = %.2f Graus Celsius\n\n", i, temperaturasOutubro[i]);
		}
	}
	
	printf("\nQuantidade de dias com a temperatura inferior a media:  %i\n", diaInferior);
	
	system("pause");
}