/* Crie um programa que receba as quatro médias do ano e as faltas que estão na tabela,
calcule a média final de 20 alunos, apresente as médias deles em ordem decrescente usando o
método Insertion Sort e, ao lado da média e faltas, se o aluno está aprovado ou reprovando,
considerando que para estar aprovado, deve obter uma nota maior ou igual a 6 e reprovado,
menor do que 6 ou mais de 50 faltas ao ano*/


# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# define MAX 20

void isort ( char v[ ], int qtd ) { 
     int i, j, k ; 
     for ( i = 1; i < qtd; i++) { 
               k = v [ i ] ; 
               j = i - 1 ;
               while ( j >= 0   &&    v [ j ] > k ) { 
                         v [ j +1 ] = v [ j ] ; 
                         j--;
               }
               v [ j + 1 ] = k ;
     }
}

int main(){
	setlocale(LC_ALL, "Portuguese");

    char v[MAX];

    for (int i = 0; i < MAX; i++){
        printf("digite uma letra: %d \n", i);
        scanf("%s", &v[i]);
    }

	isort(v,MAX);

	for (int i=0;i<MAX;i++){
		printf("%c\t",v[i]);
	}

	getch();
	return 0;
}