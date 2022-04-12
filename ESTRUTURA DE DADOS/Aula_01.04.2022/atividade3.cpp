/*75) Crie um procedimento que receba um número inteiro, passe por parâmetro esse valor, calcule o seu 
valor acrescido de 1 e imprima na tela seu resultado.   */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

void atualiza(int x){
	printf("O novo valor acrescido de 1 é %d",x+1);
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um número inteiro ");
	scanf("%d",&n);
	atualiza(n);
	getch();
	return 0;
}
