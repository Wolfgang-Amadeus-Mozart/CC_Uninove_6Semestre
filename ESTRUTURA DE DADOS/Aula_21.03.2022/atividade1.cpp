/*Faça um programa que leia em duas variáveis seu nome e sobrenome e imprima-os juntos.
(com espaço)*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char n1[30],n2[30];
	printf("Digite seu nome ");
	gets(n1);
	printf("Digite seu nome ");
	gets(n2);
	strcat(n1," ");
	strcat(n1,n2);
	printf("Seu nome é %s ",n1);
	getch();
	return 0;
}
