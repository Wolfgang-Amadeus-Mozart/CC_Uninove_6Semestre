/*74) Crie uma função receba dois valores inteiros, passe por parâmetro esses valores e retorne o resultado 
do primeiro número elevado pelo segundo para o programa principal.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

int potencia(int a, int b){
	return pow(a,b);
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	int x, y;
	printf("Digite um número ");
	scanf("%d",&x);
	printf("Digite um número ");
	scanf("%d",&y);
	printf("O número %d elevado a %d é %d",x,y,potencia(x,y));
	getch();
	return 0;
}
