/*69) Elabore um programa que realize a conversão de um valor em real para o correspondente em 
dólar, libra, euro e franco. O programa deverá conter um menu com as opções e retornar os 
resultados para o programa principal, encarregado da exibição dos resultados.   */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

float real;

float dolar(){
	return real/4.77;
}

float libra(){
	return real/6.24;
}

float euro(){
	return real/5.24;
}

float franco(){
	return real/5.11;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite o valor em reais que você deseja converter ");
	scanf("%f",&real);
	printf("\n\nOpções:\n1-Dolar\n2-Libra\n3-Euro\n4-Franco\n\n");
	printf("Digite a opção desejada ");
	scanf("%d",&n);
	switch (n){
		case 1: printf("O valor de R$ %.2f em dólares é US$ %.2f",real,dolar());
		break;
		case 2: printf("O valor de R$ %.2f em libras é %.2f",real,libra());
		break;
		case 3: printf("O valor de R$ %.2f em euros é %.2f",real,euro());
		break;
		case 4: printf("O valor de R$ %.2f em francos é %.2f",real,franco());
		break;
		default: printf("Opção inválida");		
	}
	getch();
	return 0;
}
