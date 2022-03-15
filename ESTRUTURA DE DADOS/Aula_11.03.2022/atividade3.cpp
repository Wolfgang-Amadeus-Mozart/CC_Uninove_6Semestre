/*
Faça um programa em C que tenha um vetor de 20 elementos do tipo real,
 receba os dados, calcule e mostre na tela o resultado da expressão da figura abaixo.  
*/



# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    float vetor[20];

    for ( int i = 0 ; i< 20; i++){
        printf("Insira o numero %d: ", i);
        scanf("%f", &vetor[i]);
    }

    float resultado = 0;
    int contador = 19;

    for ( int i = 0; i<10; i++){
        resultado += pow((vetor[i] - vetor[contador]), 2);
        contador--;
    }

   
    printf(" Para a expressao (n1 - n2 )² + (n2 - 19)² .... (n10 - n11)² temos : %f", resultado);

}
