/*
Crie uma função que, dado um número real passado como parâmetro por valor, 
retorne o produto da parte inteira pela parte fracionária desse número.
*/
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


void separador_fracionario(float num, int *x, float *y) {
    *x = (int)num;
    *y = num - *x;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num, frac;
    int inteira;
    printf("Digite um número que contenha uma parte fracionária: ");
    scanf("%f", &num);
    separador_fracionario(num, &inteira, &frac);
    printf(" Numero digitado: %f, parte inteira: %i, parte fracionada: %f \n", num, inteira, frac);
    printf("O produto da parte inteira pela parte fracionada é: %f", (inteira*frac));
    
	getch();
	return 0;
}