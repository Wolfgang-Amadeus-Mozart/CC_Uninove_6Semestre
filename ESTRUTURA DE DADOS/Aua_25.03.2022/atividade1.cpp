/*53- Faça um programa que verifique o endereço da memória em número hexadecimal da variável 
de tipo inteira a=10.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int a=10;
	printf("O valor da variável é %d\n\n",a);
	printf("O endereço de memória na forma decimal da variável é %d\n\n",&a);
	printf("O endereço de memória na forma hexadecimal da variável é %p\n\n",&a);
	printf("O endereço de memória na forma hexadecimal da variável é %x",&a);
	getch();
	return 0;
}
