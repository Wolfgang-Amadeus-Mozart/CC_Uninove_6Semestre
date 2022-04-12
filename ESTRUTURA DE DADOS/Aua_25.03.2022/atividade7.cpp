/*Escreva um programa em C para ler 10 palavras de no máximo 15 caracteres cada uma,
e apresente-as na tela na seguinte ordem: 1ª, 10ª, 2ª, 9ª, 3ª, 8ª, 4ª, 7ª, 5ª, 6ª. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	char palavras[15][10];
    int contador_reverso = 9;

    for (int i = 0; i < 10; i++){
        printf("Digite a palavras de número 1 até 15: ");
        gets(palavras[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("Palavras de posição %i é: %s \n",i, palavras[i]);
        printf("Palavras de posição %i é: %s \n", contador_reverso, palavras[contador_reverso]);
        contador_reverso -= 1;
}
}
