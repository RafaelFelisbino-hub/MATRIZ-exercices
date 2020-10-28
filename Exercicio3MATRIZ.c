/*Elabore um algoritmo que leia uma matriz 3x3 de números reais e calcule a
média dos valores de cada linha da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    float matriz[3][3], vetor[3];

    for (i = 0; i < 3; i++)
    {
        vetor[i] = 0;
        for (j = 0; j < 3; j++)
        {
            printf("Digite os numeros: %d linha, %d coluna:  ", i+1, j+1);
            scanf_s("%f", &matriz[i][j]);
            
            vetor[i] += matriz[i][j];
        }
        
        vetor[i] /= 3;
    }
   
    for (i = 0; i < 3; i++)
          printf("As medias da linha %d :  %.2f\n", i+1, vetor[i]);
    
    system("pause");
}
