/*47) Faça um programa que leia a variável "UNINOVE", mostre a quantidade de caracteres e o 
tamanho do vetor.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char n1[]={"UNINOVE"};
	printf("O conteúdo da variável é %s\n",n1);
	printf("A quantidade de caracteres é %d\n",strlen(n1));
	printf("o tamanho do vetor é %d\n",strlen(n1)+1);
	getch();
	return 0;
}
