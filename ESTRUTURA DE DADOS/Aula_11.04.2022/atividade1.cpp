/*  
100 80 70 10    
*/

#include <stdio.h>

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

int main (){

int vet[4] = {100,80,70,10};

bsort(vet, 4);

for (int i =0; i<4; i++){
    printf("%d \n", vet[i]);
}

}