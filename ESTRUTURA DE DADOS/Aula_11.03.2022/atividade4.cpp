/*
Faça um programa que receba valores entre 1 e 10 e armazene num vetor de 5 elementos. 
O programa deverá ter outro vetor que receba valores correspondentes ao cálculo do fatorial de seus elementos,
conforme demonstrado na figura abaixo. Ao final, apresente os valores armazenados nos dois vetores. *
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

int fatorial(int n){
        int fat;
        for(fat = 1; n > 1; n = n - 1){
        fat = fat * n;
        }
        return fat;
    }

int main(){
	setlocale(LC_ALL, "Portuguese");
    int vetor[5];
    int fatorias_dos_valores[5];
    int valor_digitado;

    for (int i= 0; i < 5; i++){
        printf("Digite um valor entre 1 e 10: ");
        scanf("%d", &valor_digitado);

        while (valor_digitado < 0 or valor_digitado > 10 )
        {
          printf("O valor nao é valido");
          valor_digitado = 0;
          i--; 
        }
        
        vetor[i] = valor_digitado;
        }

        for(int i = 0 ; i < 5; i++){
            fatorias_dos_valores[i] = fatorial(vetor[i]);
        }
        printf("o valores que você escolheu foram: ");
        for (int i = 0; i < 5; i++){
            printf("%d, ", vetor[i]);
        } 

        printf("E os seus respectivos fatoriais são: ");

        for (int i = 0; i < 5; i++){
            printf("%d, ", fatorias_dos_valores[i]);
        } 

        return 0;
    }

  