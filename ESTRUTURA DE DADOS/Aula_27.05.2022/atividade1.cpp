/*
O programa a seguir contém um vetor que armazena sete números do tipo int, 
o segundo vetor armazena sete números dados do tipo float. 7
O terceiro vetor dever armazenar em cada índice o resultado da soma dos valores dos índices correspondentes do primeiro e do segundo vetor.
Utilizando uma função de ordenação (Seleção ou Inserção) ordene os dados contidos no terceiro vetor.
Após a ordenação, o programa deverá verificar se existe no terceiro vetor o número 33.7 utilizando a função de pesquisa binária.
ATENÇÃO!!! Você deverá completar o programa para que ele atenda o enunciado acima,
 substituindo as linhas de comentários (linhas 4, 12, 13, 17, 25 e 26 ) pelos comandos correspondentes.
*/

#include <stdio.h>
#include <conio.h>
#define MAX 7

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

int pesqbin ( float v [ ], int busca ) {
     int inicio, fim, meio ;
     inicio = 0 ;
     fim = MAX - 1 ;
     while (inicio <= fim){
               meio=(inicio + fim)/2 ;
               if (v[meio]==busca){
                         return meio;
    }
               if ( busca < v [ meio ] ){
                         fim = meio - 1 ;
     }
               else{
                         inicio = meio + 1 ;
    }
     }
     return -1 ;
}


int main(){
    int i, v1 [MAX] = {13, 5, 7, 21, 77, 43, 11};
    float v2[MAX] = {21.7, 13.1, 5.9, 33.7, 7.5, 3.13, 1.21};
    float v3[MAX];
        // COMANDO PARA GERAR DADOS PARA O 3o vetor
        for (i = 0; i<MAX; i++){
            v3[i] = v1[i] + v2 [i];
        }
    //COMANDO PARA CHAMAR A FUNÇÃO DE ORDENAÇÃO
    ssort(v3, MAX);
    
    printf("Valores ordenados no 3o vetor:\n");
    for (i =0; i < MAX; i++){
        printf("  %.2f\n", v3[i]);
    }

    
    if(pesqbin(v3,33.7)==-1){
        printf("\n\nNão Achou");
    }else{
        printf("\n\nAchou");
    }

    getch();
    return 0;
}