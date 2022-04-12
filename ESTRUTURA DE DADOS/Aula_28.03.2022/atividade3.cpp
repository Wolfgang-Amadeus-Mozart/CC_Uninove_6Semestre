/*65) Faça um programa que calcule o produto dos números 2 e 110 utilizando o conceito de função 
que devolve valor.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int n1=2, n2=110;

int produto(){
	return n1*n2;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	//int prod;
	//prod=produto();
	printf("O produto entre 2 e 110 é %d",produto());
	getch();
	return 0;
}