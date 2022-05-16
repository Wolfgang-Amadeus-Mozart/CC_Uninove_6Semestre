/* 97- Crie um programa que ordene, em ordem alfabética crescente 
pelo método bolha, um vetor que recebe as letras 'v', 'f' , 's' , 
'z' , 'a' . */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
#include  <string.h>
# define nome_Tam 20
# define vetor_TAM 7



void bsort_string (char v[][nome_Tam], int qtd){

    int i,j,k;
    char aux[vetor_TAM];
    for(i=0; i< qtd; i++){
        for(j = i+1; j< qtd; j++){
            k = strcmp(v[i], v[j]);
            if(k > 0){
                strcpy(aux, v[i]);
                strcpy(v[i],v[j]);
                strcpy(v[j], aux);
            }
        }
    }
}

int main()
{
    char nomes[7][20] =  {"Miriam","Sueli","Ana","Miguel","Daniel","Tales","Humberto"};

    bsort_string(nomes, vetor_TAM);
    
    for(int i = 0; i < vetor_TAM; i++){
        printf("%s\n", &nomes[i]);
    }

    return 0;
}