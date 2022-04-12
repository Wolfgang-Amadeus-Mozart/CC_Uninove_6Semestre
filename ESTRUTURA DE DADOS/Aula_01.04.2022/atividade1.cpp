/*73) Crie um procedimento que receba um número real, passe por parâmetro esse valor, calcule o seu dobro 
e imprima na tela seu resultado.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

void dobro (float n){
	printf("O dobro do valor digitado é %.2f",n*2);	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float x;
	printf("Digite um número ");
	scanf("%f",&x);
	dobro(x);
	getch();
	return 0;
}
