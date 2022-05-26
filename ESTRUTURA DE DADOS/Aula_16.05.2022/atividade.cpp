/*129-Crie um algoritmo que coloque em ordem crescente e realize a pesquisa sequencial de um número que possa ou não estar no 
vetor que recebe os números: 57, 17, 96, 41, 86, 25, 38, 74 e imprima-o.*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# define T 8

void bsort (int v[],int qtd){
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

int pesqseq ( int v [ ], int busca ) {
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
	int pesq, v[T]={57, 17, 96, 41, 86, 25, 38, 74};
	bsort (v,T);
    int opcao = 0;
	
	printf("Digite o valor a ser pesquisado \n ");
    scanf("%d",&pesq);


	do {
     
		printf("%d o valor nao seta no vetor tente outro numero \n",pesq);

        if (pesqseq(v,pesq) >= 0){
            printf("O valor foi encontrado, deseja pesquisa outro valor? S/N");
        }

        switch (opcao)
        {
        case 's':
            break;

        case 'n':
            break;
        }
	} while((pesqseq(v,pesq) < 0));

    printf("valor encontrado");
	
	getch();
	return 0;
}
