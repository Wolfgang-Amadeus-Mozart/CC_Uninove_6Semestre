/*
Fazer um programa que calcule uma equação do 2º Grau e determine se suas raízes são reais e diferentes, reais ou iguais, ou, não possui raizes 
*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, delta, x1, x2;
    printf("Digite o valor de a ");
    scanf("%f",&a);
    printf("Digite o valor de b ");
    scanf("%f",&b);
    printf("Digite o valor de c ");
    scanf("%f",&c);
    delta=pow(b,2)-4*a*c;
    x1=(-b-sqrt(delta))/2*a;
    x2=(-b+sqrt(delta))/2*a;
    if (delta>0){
    	printf("O valor de x1 é %.2f e x2 é %.2f",x1,x2);
    }
    else 
        if (delta == 0){
         printf("O valor de x1 é %.2f e x2 é %.2f",x1,x2);
               }
        else{   
	        printf("Não possui raízes reais");
            }
	getch();
	return 0;

}