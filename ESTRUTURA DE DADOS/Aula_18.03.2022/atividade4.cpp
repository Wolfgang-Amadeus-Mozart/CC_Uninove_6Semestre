/*
Faça um programa em C que receba um número inteiro (X) entre 1 e 10.
 A partir do número digitado, atribua a uma matriz de 3x5 valores a partir das seguintes características:
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, matriz[3][5];

    puts("Digite um número ");
    scanf("%d", n1);

    matriz[0][0] = n1;

    for (int i = 0; i < 3; i++){
        for (int j = 1; j < 5; j++){
            do {
            matriz [i][j] = matriz [i][j - 1] + 10;
            }while(i == 0);

            do {
            matriz [i][j] = matriz [i - 1][j - 1] / 9;
            }while(i == 1);

            do {
            matriz [i][j] = pow(matriz[i - 2][j - 1], 2);
            }while(i == 2);
    }
    }
     for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            printf("%d", matriz[i][j]);
        }
     }
}


