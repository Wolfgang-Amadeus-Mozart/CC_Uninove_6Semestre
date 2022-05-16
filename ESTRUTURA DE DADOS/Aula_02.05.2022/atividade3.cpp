/* 105- Crie um algoritmo que coloque em ordem decrescente pelo método de seleção o vetor que recebe 
os números: 96,02; 23,87; 48,54; 7,23; 63,04; 1,71; 52,09; 184,7 e imprima-os. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# define MAX 8

void ssort (float v[], int qtd){
	int i, j, min;
	float k;
	for (i=0;i<qtd-1;i++){
		min=i;
		for (j=i+1;j<qtd;j++){
			if(v[j]>v[min]){
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
	float vet[MAX]={96.02, 23.87, 48.54, 7.23, 63.04, 1.71, 52.09, 184.7};
	int i;
	ssort(vet,MAX);
	for (i=0;i<MAX;i++){
		printf("%.2f\t",vet[i]);
	}
	getch();
	return 0;
}
