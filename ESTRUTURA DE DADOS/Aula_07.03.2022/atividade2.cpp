/*
Crie um programa que leia uma quantidade de valores para um vetor de tamanho de posições 
definido pelo usuário e depois calcule a média dos valores acessando o vetor
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");

    int positions;

    printf("Insira a quantidade de posições do vetor: ");
    scanf("%d", &positions);

    positions = positions - 1;

    float vector[positions];
    int width = sizeof(vector)/sizeof(vector[0]);

    printf("%d", width);

    for (int i = 0; i < width; i++){
        printf("defina o valor inteiro para a posição de numero %d do vetor: ", i);
        scanf("%f", &vector[i]);
    }
    
    float somatorio;

    for (int i = 0; i < width; i++ ){
        printf("%.2f \n", vector[i]);
    }

    printf("%.2f", somatorio);

    return 0;
    }