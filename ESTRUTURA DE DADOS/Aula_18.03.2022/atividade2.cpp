//*Faça um programa que leia e imprima uma palavra qualquer
//* Utilize o puts

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
    puts(palavra);
    return 0;

}