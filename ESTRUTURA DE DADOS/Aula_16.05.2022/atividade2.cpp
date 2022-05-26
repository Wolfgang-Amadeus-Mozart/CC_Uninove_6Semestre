/*
130- Crie um algoritmo que coloque em ordem crescente e realize a pesquisa sequencial de uma letra que possa ou não estar no vetor
 que recebe as letras: 'o','c','x','s','n','r','p','e','m','j' e imprima-o perguntando após a primeira pesquisa se o usuário quer
  continuar.
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# define T 10

void bsort (char v[],int qtd){
     int i, j;
     int aux;
     for (i=1;i<qtd;i++){
          for (j=0;j<qtd-i;j++){
               if (v[j]>v[j+1]){
			         aux=v[j];
                     v[j]=v[j+1];
                     v[j+1]=aux;
               }
          }
     }
}

int pesqseq ( char v [ ], char busca ) {
     int i ;
     for ( i = 0; i <T; i++ ) {
             if ( v [ i ] == busca ){
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
	char pesq, v[T]={'o','c','x','s','n','r','p','e','m','j'};
	char opc;
	bsort (v,T);
	do{
	printf("Digite o valor a ser pesquisado ");
	scanf("%c",&pesq);
	if (pesqseq(v,pesq)!=-1){
		printf("%c está no vetor",pesq);
	}
	else{
		printf("%c não está no vetor.", pesq);
	}
	printf("\nPesquisar outro valor? S-sim/N-não: \n");
	opc=getch();
}
while (opc == 'S'|| opc == 's');
	getch();
	return 0;
}
