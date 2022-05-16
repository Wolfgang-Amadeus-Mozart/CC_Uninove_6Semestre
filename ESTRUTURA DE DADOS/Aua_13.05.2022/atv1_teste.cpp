/* Crie um algoritmo que coloque em ordem crescente pelo método de inserção o vetor que recebe os 
números: 86, 17, 96, 45, 23, 59, 34, 71 e imprima-os.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# define MAX 8

void isort ( int v[ ], int qtd ) { 
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
	int i, v[MAX]={86, 17, 96, 45, 23, 59, 34, 71};
	isort (v,MAX);
	for (i=0;i<MAX;i++){
	printf("%d\t",v[i]);	
	}
	
	getch();
	return 0;
}

