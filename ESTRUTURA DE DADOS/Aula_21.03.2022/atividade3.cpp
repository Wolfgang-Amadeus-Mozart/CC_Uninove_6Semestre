/*48) Faça um programa que contenha um vetor de strings que armazene o nome dos seus  cinco melhores
 amigos(inimigos) e imprima os nomes armazenados no vetor na ordem inversa de digitação.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	char n[5][25];
	int i;
	for(i=0;i<5;i++){
		printf("Digite o nome de seu amigo ");
		gets(n[i]);
	}
	printf("\nNomes na ordem inversa de digitação\n");
	for(i=4;i>=0;i--){
		printf("%s\n",n[i]);
	}
	getch();
	return 0;
}
