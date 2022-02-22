/*
Faça um programa que receba dois números inteiros quaisquer e verifique se o primeiro é múltiplo do segundo
*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int n1, n2;
printf("Digite um número inteiro ");
scanf("%i",&n1);
printf("Digite um número inteiro ");
scanf("%d",&n2);
if(n1%n2 == 0){
	printf("O número %d é múltiplo do número %d",n1,n2);
}
else{
	printf("O número %d não é múltiplo do número %d",n1,n2);
}
	getch();
	return 0;
}
