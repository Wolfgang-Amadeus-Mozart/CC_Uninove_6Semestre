/*
Faça um programa que ordene, em ordem alfabética crescente, 
o vetor Nomes que contém os seguintes dados: Miriam, Sueli, Ana, Miguel, Daniel, Tales, Humberto.
 Utilize o método de ordenação por trocas. *
*/



# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <ctype.h>
# define MAX 7

void bsort (char v[][], int qtd){
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
	/*char vet[7][20] =  {{"Miriam"},
                        {"Sueli"},
                        {"Ana"},
                        {"Miguel"},
                        {"Daniel"},
                        {"Tales"},
                        {"Humberto"}};*/
    
    	char vet[7][20] =  {"Miriam","Sueli","Ana","Miguel","Daniel","Tales","Humberto"};
            
    
    for (int i = 0; i<7; i++){
         printf("%s \n", &vet[i]);
    }

  /*  bsort (vet, MAX);
		for(int i=0;i<MAX;i++){
			printf("%s\t",vet[i]);
		}*/
   
}
