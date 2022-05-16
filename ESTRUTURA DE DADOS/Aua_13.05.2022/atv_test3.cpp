# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    
    char texto[1][100];
	
    printf("Digite seu texto: ");
  
    scanf("%[a-z ][A-Z][0-9]s", &texto[0]);
    printf("%s", texto[0]);

}