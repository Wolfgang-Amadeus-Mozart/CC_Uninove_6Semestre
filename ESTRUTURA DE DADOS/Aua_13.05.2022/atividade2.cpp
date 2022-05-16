/*Crie um programa que receba 20 letras via teclado e as ordene em ordem alfabética
crescente pelo método de seleção..*/

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

