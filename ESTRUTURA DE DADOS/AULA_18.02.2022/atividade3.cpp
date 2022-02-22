/* Faça um programa que converta C° para F° e K°

F = (9C+160)/5 K = C+ 273

C - Celcius
F - Fahrenheit
K - Kelvin
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float C;

    printf("Digite a temperatura em celcisuas: ");
    scanf("%f", &C);

    printf("Em Fahrenheit é: %.2f", (9*C+160)/5);
    printf("\n");
    printf("Em Kelvin é: %.2f", C+273);
    return 0;
}