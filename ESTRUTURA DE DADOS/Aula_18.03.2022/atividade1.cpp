//*Faça um programa que leia e imprima uma palavra qualquer77

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    char palavra[47];

    printf("Digite uma palafra: ");
    gets(palavra);
    printf("\n");
    printf("A palavra digita foi: %s", palavra);
    return 0;

}