/*13-	O perfil de uma pessoa é dado pelo seu ano de nascimento.
Exemplo: Se o ano é 1987, calculamos a soma 19+87, dividimos seu resultado 
por 5 e pegamos o resto.
Este resto indica o perfil da pessoa: 0 - tímido, 1 - sonhador, 
2 - paquerador, 3 - atraente, 4 - irresistível. Dado o ano de nascimento 
de uma pessoa, informe qual é o seu perfil.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
int n1, n2, resto;
printf("Digite os dois primeiros dígitos do ano de seu nascimento  ");
scanf("%d",&n1);
printf("Digite os dois últimos dígitos do ano de seu nascimento  ");
scanf("%d",&n2);
resto=(n1+n2)%5;
printf("Você é ");
switch (resto){
	case 0: printf("tímido");
	break;
	case 1: printf("sonhador");
	break;
	case 2: printf("paquerador");
	break;
	case 3: printf("atraente");
	break;
	case 4: printf("irresistível");
	break;
}
	getch();
	return 0;
}