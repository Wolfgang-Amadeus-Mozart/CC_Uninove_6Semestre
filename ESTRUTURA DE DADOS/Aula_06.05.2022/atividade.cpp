/*
Um determinado curso precisa emitir a lista dos dez alunos aprovados em ordem decrescente de RAs. 
O programa abaixo deve conter dois vetores, um com o primeiro nome de cada aluno e outro com seus respectivos RAs. Neste programa, 
o usuário poderá escolher o método de ordenação (Bubble Sort ou Selection Sort) que irá mostrar a lista com base nos RAs.
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# define MAX 10

void bsort (int v[],int qtd){
     int i, j;
     int aux;
     for (i=1;i<qtd;i++){
          for (j=0;j<qtd-i;j++){
               if (v[j]<v[j+1]){
			         aux=v[j];
                     v[j]=v[j+1];
                     v[j+1]=aux;
               }
          }
     }
}


void ssort (int v[], int qtd){
	int i, j, min;
	int k;
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

    char vetor_nome[10][30]= {"Filipe","Lucas","Nailda","Eric","Nara","Daniela","Robsvaldo","Cloroquino","Ricardonevson", "Neyoceano"};
    int vetor_Ras[10] = {951756851,321654987,147258239,741828596,159337852,456789123,987321654,951753456,357241698,987196761};
    int opcao;

    printf("Software de ordenação \n");
    printf("Digite o numero do metodo de ordenação desejado \n 1 Para Bubble sort \n 2 Para selection sort \n Digite a opcao: ");
    scanf("%d", &opcao);

    switch (opcao){
    case (1):
        printf("Ordenacao Bubble sort\n ");
        bsort(vetor_Ras,MAX);
	    for(int i=0;i<MAX;i++){
		    printf("%d - %s \n",vetor_Ras[i], vetor_nome[i]);
	}
    break;
        
    case (2):
        printf("Ordenacao selection sort\n");
        ssort(vetor_Ras,MAX);
	    for (int i=0;i<MAX;i++){
		    printf("%d - %s \n",vetor_Ras[i], vetor_nome[i]);
        }
    break;

    default:
        printf("opção invalida, tente novamente");
        break;
    }

    system("exit");
	return 0;

}