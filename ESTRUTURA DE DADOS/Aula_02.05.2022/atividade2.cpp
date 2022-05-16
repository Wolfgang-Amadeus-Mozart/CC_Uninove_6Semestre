/*
Crie um algoritmo que coloque em ordem decrescente pelo metoco de selecao o vetor que recebe os numeros:
96,02; 23,87; 48;54; 7,83; 63,04; 1,71; 52,09; 184.7 e imprimaos  
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# define MAX 8

void ssort (int v[], int qtd){
	int i, j,k, min;
	for (i=0;i<qtd-1;i++){
		min=i;
		for (j=i+1;j<qtd;j++){
			if(v[j]<v[min]){
				min=j;
			}
		}
		if(i!=min){
			k=v[i];
			v[i]=v[min];
			v[min]=k;
		}
	}
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vet[MAX]={86, 17, 96, 45, 23, 59, 34, 71};
	ssort(vet,MAX);
		for(i=0;i<MAX;i++){
			printf("%d\t",vet[i]);
		}
	getch();
	return 0;
}
