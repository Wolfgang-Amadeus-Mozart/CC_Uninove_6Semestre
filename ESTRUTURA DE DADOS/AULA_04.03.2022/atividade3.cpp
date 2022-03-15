/*
Faça um programa em C que receba dois valores reais correspondentes às coordenadas de um ponto P,
erifique e apresente na tela a qual quadrante pertence o ponto P, 
desconsiderando a possibilidade de esse ponto estar sobe um dos eixos ou na origem. *
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    float n1;
    float n2;
    
    printf("Digitnumero as coordenanas para x e y: \n");
    printf("coordenada para x:  \n");
    scanf("%f", &n1);
    printf("Coordenada para y: ");
    scanf("%f",& n2);

     if(n1 != 0 & n2 != 0){
            if(n1 > 0 & n2 > 0)
                printf("Primeiro quadrante\n");
            else if(n1 < 0 & n2 > 0)
                printf("Segundo quadrante\n");
            else if(n1 < 0 & n2 < 0)
                printf("Terceiro quadrante\n");
            else
                printf("Quarto quadrante\n");
}
}