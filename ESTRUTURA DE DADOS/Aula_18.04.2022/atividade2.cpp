/* Crie um programa que ordene, em ordem alfabética crescente 
pelo método bolha, um vetor que recebe as letras 'v', 'f' , 's' , 
'z' , 'a' . */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# define MAX 5

void bsort (char v[], int qtd){
     int i, j;
     char aux;
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

int main(){
	setlocale(LC_ALL, "Portuguese");
	char vet[MAX]={'v','f','s','z','a'};
	int i;
	bsort(vet,MAX);
	for (i=0;i<MAX;i++){
		printf("%c\t",vet[i]);
	}
	getch();
	return 0;
}
