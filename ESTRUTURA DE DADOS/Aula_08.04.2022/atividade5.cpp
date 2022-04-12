/* Faça um programa que tenha três vetores de 5 elementos cada, sabendo que cada um deverá armazenar respectivamente 
os nomes de cinco vendedores, as horas trabalhadas no mês e o valor a receber, e que a hora de trabalho corresponde
a R$ 20,75. O programa deverá calcular o valor do salário de cada funcionário e mostrar o conteúdo dos três vetores.
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char vendedor[5][25];
	int horas[5];
	float salarioTotal[5];
	
	for(int i = 0; i<5; i++){
	    printf("Digite o nome do vendedor #%d\n", (i + 1));
	    gets(vendedor[i]);
	    printf("Digite as horas trabalhadas do vendedor #%d\n", (i + 1));
	    scanf("%d", &horas[i]);
	    salarioTotal[i] = 20.75 * horas[i];
	}

    for(int i = 0; i<5; i++){
        printf("Vendedor: %s\n", vendedor[i]);
        printf("Horas trabalhadas: %d", horas[i]);
        printf("Salário total: %.2f", salarioTotal[i]);
    }
    
	getch();
	return 0;
}