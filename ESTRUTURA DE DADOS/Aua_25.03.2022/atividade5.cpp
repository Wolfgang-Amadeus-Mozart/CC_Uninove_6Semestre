/* Faça um programa que contém duas variáveis como ponteiros para dois número reais e realize a soma */

#include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
float *ponteiro1, *ponteiro2, numero1, numero2;

printf("Digite um número real: ");
scanf("%f", &numero1);

printf("Digite outro número real: ");
scanf("%f", &numero2);

ponteiro1=&numero1;
ponteiro2=&numero2;

printf("A soma dos número é %.2\f", (*ponteiro1 + *ponteiro2));

}