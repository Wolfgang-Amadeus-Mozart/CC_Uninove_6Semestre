/*63) Escreva um programa que pergunte um nome e apresente na tela que deve possuir uma função 
sem retorno : "Olá, nome" e o elogio "Bonito nome!".  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

char nome[30];

void elogio(){
	printf("Olá, %s\n\nBonito nome!",nome);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite seu primeiro nome ");
	gets(nome);
	elogio();
	// elogio
	getch();
	return 0;
}