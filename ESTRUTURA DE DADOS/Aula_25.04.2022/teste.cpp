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

char nome[7][20] =  {"Miriam","Sueli","Ana","Miguel","Daniel","Tales","Humberto"};

void bsort_string (){

    int i,j,k;
    char aux[nome_Tam];
    for(i=0; i<vetor_TAM; i++){
        for(j = i+1; j<vetor_TAM; j ++){
            k = strcmp(nome[i], nome [j]);
            if(k > 0){
                strcpy(aux, nome[i]);
                strcpy(nome[i],nome[j]);
                strcpy(nome[j], aux);
            }
        }
    }
}

int main()
{
    bsort_string();
    printf("Nomes bsort_stringdos: \n");
    
    for(int i = 0; i < vetor_TAM; i++){
        puts(nome [i]);
    }

    return 0;
}