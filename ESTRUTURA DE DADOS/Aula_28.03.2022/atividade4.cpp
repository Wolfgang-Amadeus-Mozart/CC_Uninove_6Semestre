/*66) Faça um programa que calcule a soma de dois números utilizando o conceito de função que 
devolve valor. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

float n1, n2;

float adicao(){
	return n1+n2;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o primeiro número ");
	scanf("%f",&n1);
	printf("Digite o segundo número ");
	scanf("%f",&n2);
	printf("A soma entre %.2f e %.2f é %.2f",n1,n2,adicao());
	getch();
	return 0;
}
