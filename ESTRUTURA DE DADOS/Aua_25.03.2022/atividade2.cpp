/*54- Faça um programa que verifique o endereço da memória em número decimal e hexadecimal 
de uma variável qualquer do tipo float. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float a;
	printf("Digite um número ");
	scanf("%f",&a);
	printf("O valor da variável é %.2f\n\n",a);
	printf("O endereço de memória na forma decimal da variável é %d\n\n",&a);
	printf("O endereço de memória na forma hexadecimal da variável é %p\n\n",&a);
	printf("O endereço de memória na forma hexadecimal da variável é %x",&a);
	getch();
	return 0;
}
