# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>
# define MAX 10
char teste[30] = {"filipe"};

char v[MAX][20];

void isort () { 
     int i, j;
     char k[MAX]; 
     for ( i = 1; i < MAX; i++) { 
               strcpy(k, v[ i ]); 
               j = i - 1 ;
               while ( j >= 0   &&    strcmp(v[j], k) > 0) { 
                         strcpy (v [ j +1 ], v [ j ]);
                         j--;
               }
               strcpy(v [ j + 1 ], k);
     }
}

int main(){
	setlocale(LC_ALL, "Portuguese");

    insere_nomes();
	isort();

	for (int i=0;i<MAX;i++){
		printf("%s\n",v[i]);
	}

	getch();
	return 0;
}