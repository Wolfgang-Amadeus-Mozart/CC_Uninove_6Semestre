/*67 Escreva um programa que calcule o quadrado de um numero com funcao*/

#include <stdio.h>
#include <math.h>

float n1;

void quadrado (){
    printf("o Quadrado do número digitado é: %.2f", pow(n1, 2));
}

int main (){

    printf("Digite um número: ");
    scanf("%f", &n1);

    quadrado();
}