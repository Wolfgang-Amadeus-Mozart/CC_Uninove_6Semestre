/* Crie um algoritimo que receba 15 numeros via teclado e ordene esses números em ordem crescente 
 usando o método bubble sort
*/



# include <stdio.h>
# include <stdlib.h>

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

    int vet[15];

    for (int i = 0; i < 15; i++){
        printf("Digite um número: ");
        scanf("%d", &vet[i]);
    }
    bsort(vet, 15);

     for (int i=0; i<15; i++){
          printf("%d \n",vet[i]);
     }
}