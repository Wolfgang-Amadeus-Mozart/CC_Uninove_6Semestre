/*
131-Crie um programa que ordene, em ordem alfabética crescente, realize a pesquisa sequencial do vetor Nomes que contém os dados:
 Maria, Sérgio, Carlos, Rita, Zulema e  pergunte ao usuário após a primeira pesquisa, se ele quer continuar., 
 . Utilize o método de ordenação por inserção.
*/


# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>
# define MAX 5

char v[MAX][100] = {"Maria", "Sérgio", "Carlos", "Rita", "Zulema"};
char busca[100];

void isort () { -*
     int i, j;
     char k[MAX]; 
     for ( i = 1; i < MAX; i++) { 
               strcpy(k, v[ i ]); 
               j = i - 1 ;
               while ( j >= 0   &&    strcmp(v[j], k) > 0) { 
                         strcpy (v [ j +1 ], v [ j ]);
                         j--;
               }
               strcpy(v [ j + 1 ], k);
     }
}

int pesqseq () {
     int i ;
     for ( i = 0; i <MAX; i++ ) {
             if ( strcmp( v[i], busca) > 0){
                      return i ;
}
             else
                      if ( v [ i ] > busca ){
                              return -1 ;
}
     }
     return -1 ;
}



int main(){
	setlocale(LC_ALL, "Portuguese");
	isort();
	char opc;


	do{
	printf("Digite o valor a ser pesquisado ");
	scanf("%s",&busca);

	if (pesqseq()!=-1){
		printf("%s está no vetor",busca);
	}
	else{
		printf("%s não está no vetor.", busca);
	}
	printf("\nPesquisar outro valor? S-sim/N-não: \n");
	opc=getch();
}
while (opc == 'S'|| opc == 's');
	getch();
	return 0;
}
