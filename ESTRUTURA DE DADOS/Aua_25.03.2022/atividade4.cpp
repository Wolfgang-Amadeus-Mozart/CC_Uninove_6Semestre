/*56- Faça um programa que contém um ponteiro para um número do tipo inteiro, o aloque 
 dinamicamente e imprima o valor atribuído a ele.  */


# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int *ponteiro;
    float numero;
    ponteiro = (int *) malloc(sizeof(int)); //Malloc aloca dinamicamente

    printf("Digite um número natural: ");
    scanf("%f", &numero);
    ponteiro=&numero;
    printf("o valor digitado por você é %d", *ponteiro);
    free(ponteiro); //Libera o endereçço de memoria armazenado
    
}