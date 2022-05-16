/*
Crie um programa que receba as quatro médias do ano e as faltas que estão na tabela,
calcule a média final de 20 alunos, apresente as médias deles em ordem decrescente usando o
método Insertion Sort e, ao lado da média e faltas, se o aluno está aprovado ou reprovando,
considerando que para estar aprovado, deve obter uma nota maior ou igual a 6 e reprovado,
menor do que 6 ou mais de 50 faltas ao ano.
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# define MAX 2
# define MAX_2 4

void isort ( float v[ ], int qtd ) { 
     int i, j, k ; 
     for ( i = 1; i < qtd; i++) { 
               k = v [ i ] ; 
               j = i - 1 ;
               while ( j >= 0   &&    v [ j ] > k ) { 
                         v [ j +1 ] = v [ j ] ; 
                         j--;
               }
               v [ j + 1 ] = k ;
     }
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float vet[MAX][MAX_2];
     float media[MAX];
     float somatorio[MAX];
     int faltas[MAX];

     for (int i =0; i < MAX; i++){
          printf("Insira as notas do Aluno %d: ", i);
          printf("\n");
          for (int j=0; j < MAX_2; j++){
               scanf("%f", &vet[i][j]);
          }
     }
     
     for (int i =0; i < MAX; i++){
          for(int j = 0; j < MAX_2; j++){
               somatorio[i] += vet[i][j];
          }
     }

      for (int i =0; i < MAX; i++){ 
           printf("soma %d", i);
           media[i] = somatorio[i] / 4;
      }
     
     
     for (int i =0; i < MAX; i++){ 
          printf("Media do aluno %d: %f \n", i, media[i]);
     }
     
     for (int i =0; i < MAX; i++){
          printf("insira as faltas do aluno %d: ", i);
          scanf("%d", &faltas[i]);
     }
     
     for (int i =0; i < MAX; i++){
          if (media[i] > 6 && faltas[i] < 50){
               printf("O aluno %d foi aprovado \n", i);
          }else {
               printf("O aluno %d foi reprovado \n", i);
          }
     }
	//* foi o mehor que eu consegui fazer....

	getch();
	return 0;
}


