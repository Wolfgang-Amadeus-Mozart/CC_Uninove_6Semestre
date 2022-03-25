
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
 char f1[30], f2[30];
 printf("Digite o nome de uma fruta ");
 gets(f1);
 printf("Digite o nome de uma fruta ");
 gets(f2);
 if(strcmp(strupr(f1),strupr(f2))==0){ //* strcmp compara e strupr converte tudo em maiusculo
 	printf("\nÉ a mesma fruta.");
 }
 else{
 	printf("\nAs frutas são diferentes.");
 }
	getch();
	return 0;
}
