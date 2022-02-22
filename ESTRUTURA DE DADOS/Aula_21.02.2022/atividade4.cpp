/*12-Faça um programa que controle o caixa de um hotel para recebimento 
de pagamento das diárias de seus hóspedes. Para o cálculo do valor a 
pagar, sabe-se que a diária é de R$ 95,00 e a taxa de serviços é 
estipulada de acordo com o número de diárias, conforme o descrito abaixo:
	15% por dia, se o número de diárias for menor do que 10.
	10% por dia, se o número de diárias for igual a 10.
	5% por dia, se o número de diárias for maior que 10.
O programa deverá receber o número de dias de hospedagem de um cliente,
 calcular e apresentar na tela o valor da taxa e o total a ser pago.
  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int n;
float d=95, vtotal,taxa;
printf("Digite o número de diárias ");
scanf("%d",&n);
if(n<10){
	taxa=0.15*n*d;
}
else
if(n==10){
	taxa=0.10*n*d;
}
else{
	taxa=0.05*n*d;
}
vtotal=n*d+taxa;
printf("O valor da taxa a ser pago por %d diárias é R$ %.2f\n\n",n,taxa);
printf("O valor total a ser pago é R$ %.2f",vtotal);
	getch();
	return 0;
}
