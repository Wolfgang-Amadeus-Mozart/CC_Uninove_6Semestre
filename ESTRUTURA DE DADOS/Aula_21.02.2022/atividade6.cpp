/*14-Faça um programa que verifique qual a estação climática correspondente 
a um mês fornecido. O programa deve imprimir a estação: primavera, 
verão, outono ou inverno, considerando que são estações no Hemisfério Sul, 
conforme dados abaixo: 
	Primavera: setembro/ outubro/ novembro
	Verão: dezembro/ Janeiro/ Fevereiro
	Outono: março/ abril/ maio
	Inverno: junho/ julho/ agosto
  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
int mes;
printf("Digite um número de 1 a 12 que represente o mês que você quer consultar ");
scanf("%d",&mes);
switch (mes){
case 9: case 10: case 11: printf("Primavera");
break;
case 12: case 1: case 2: printf("Verão");
break;
case 3: case 4: case 5: printf("Outono");
break;
case 6: case 7: case 8: printf("Inverno");
break;
default: printf ("opção inválida");
}
	getch();
	return 0;
}
