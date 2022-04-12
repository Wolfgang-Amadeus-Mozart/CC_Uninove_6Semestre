/* 55- Faça um programa que verifique o endereço da memória da variável de tipo inteira b=10, 
atribua a variável a um ponteiro e imprima na tela o endereço de memória do ponteiro e seu valor.
  */


# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int b=10, *pont;
	//ponteiro aponta para o endereço de memória da variável b
	pont=&b;
	//ponteiro recebe o conteúdo da variável b
	*pont=b;
	printf("O endereço de memória do ponteiro é %x\n\n",pont);
	printf("O conteúdo do ponteiro é %d",*pont);
	getch();
	return 0;
}
