/* 97- Crie um programa que ordene, em ordem alfabética crescente 
pelo método bolha, um vetor que recebe as letras 'v', 'f' , 's' , 
'z' , 'a' . */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# define nome_Tam 20
# define vetor_TAM 7

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
	char vet[7][20]={"Miriam","Sueli","Ana","Miguel","Daniel","Tales","Humberto"};
	int i;

	//*bsort(vet,7);

	for (i=0;i<7;i++){
		printf("%s \n",vet[i]);
	}

	getch();
	return 0;
}
