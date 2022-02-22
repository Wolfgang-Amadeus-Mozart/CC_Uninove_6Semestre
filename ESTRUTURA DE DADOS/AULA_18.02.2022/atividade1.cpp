/* Faça um programa que leia dois numeros
e, exiba o resto da divisão do primeiro pelo segundo */


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, resto;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    resto = n1 % n2;

    printf("O resto da divisão é: %d", resto);
    return 0;
}