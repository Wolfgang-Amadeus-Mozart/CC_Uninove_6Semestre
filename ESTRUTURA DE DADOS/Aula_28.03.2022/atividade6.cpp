/*68) Faça um programa que realize as quatro operações aritméticas (soma, subtração, multiplicação,
 divisão). O programa deverá conter um menu com as opções e retornar os resultados para o 
 programa principal, encarregado da exibição dos resultados.   */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

float n1, n2;

float adicao(){
	return n1+n2;
}

float subtracao(){
	return n1-n2;
}

float multiplicacao(){
	return n1*n2;
}

float divisao(){
	return n1/n2;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um número ");
	scanf("%f",&n1);
	printf("Digite um número ");
	scanf("%f",&n2);
	printf("Opções:\n1-Adição\n2-Subtração\n3-Multiplicação\n4-Divisão\n\n");
	printf("Digite a opção desejada ");
	scanf("%d",&n);
	switch (n){
		case 1: printf("A soma entre %.2f e %.2f é %.2f",n1, n2, adicao());
		break;
		case 2: printf("A subtração entre %.2f e %.2f é %.2f",n1, n2, subtracao());
		break;
		case 3: printf("A multiplicação entre %.2f e %.2f é %.2f",n1, n2, multiplicacao());
		break;
		case 4: printf("A divisão entre %.2f e %.2f é %.2f",n1, n2, divisao());
		break;
		default: printf("Opção inválida");
	}
	getch();
	return 0;
}
