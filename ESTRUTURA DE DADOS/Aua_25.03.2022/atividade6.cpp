/* 59- Faça um programa que contém uma variável como ponteiro para um número inteiro e realize
 a divisão por 5. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, *pn;
	pn=&n;
	printf("Digite um número inteiro ");
	scanf("%d",&n);
	*pn=*pn/5;
	printf("O valor é %d",*pn);
	getch();
	return 0;
}
