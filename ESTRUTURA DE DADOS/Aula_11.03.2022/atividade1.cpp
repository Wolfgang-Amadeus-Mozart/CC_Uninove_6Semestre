/*Faça um programa que leia 15 dados do tipo inteiro, armazeneos em um vetor, calcule, e
mostre na tela os valores que estão no intervalo  0<vetor[i]<10 . */


# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");

    int vetor[15], i;
    

    for (int i=0; i < 15; i++){
        printf("Insira o número de número %d: ", i);
        scanf("%d", &vetor[i]);
        
    }
        printf("Os valor que estão no intervalor 0 < vet[i] < 10 sao : \n");

        for (i=0; i<=15; i++){
            if(vetor[i] > 0 && vetor[i] < 10){
                printf("%d ", vetor[i]);
            }
        }

}