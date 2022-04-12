/*Crie uma função que calcule e retorne o ponto médio e o baricentro de um triângulos cujos vértices são os pontos:
 A( x1, y1); B(x2, y2) e C(x3,y3). Todos os números e valores de retorno devem ser do tipo float. *
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    
    float x1, x2, x3, y1, y2, y3;

    printf("Entre com os valores do ponto A (x1, y1): \n");
    scanf("%f %f", &x1, &y1);

    printf("Entre com os valores do ponto A (x2, y2): \n");
    scanf("%f %f", &x2, &y2);

    printf("Entre com os valores do ponto A (x3, y3): \n");
    scanf("%f %f", &x3, &y3);

    printf("O baricentro é (%f, %f)", (x1+x2+x3)/3, (y1+y2+y3)/3);
    printf("O ponto médio é Xm:%f Ym:%f", (x1+x2)/2, (y1+y2)/2);


    getch();
	return 0;
}