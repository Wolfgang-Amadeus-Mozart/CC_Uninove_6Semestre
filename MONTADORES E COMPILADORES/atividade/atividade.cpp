/* 
Desenvolver um programa que receba um texto e, a partir desse texto, 
exibir cada palavra por linha e a no final a quantidade palavras nesse texto. 
As palavras exibidas não devem conter caracteres especiais ao final delas, por exemplo:
exclamação, interrogação, ponto final, dois pontos, virgula, três pontos entre outros.

 */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int contaCaracter (char string[]){
    int contachars = 0;

    while(string[contachars] !=  '\0'){
        contachars += 1;
    }
    contachars -= 1;
    return contachars;
}

char* troca_letra(char* str, char procura, char troca){
    char *current_pos = strchr(str,procura);
    while (current_pos) {
        *current_pos = troca;
        current_pos = strchr(current_pos,procura);
    }
    
    return str;
    
}

int main(){
	setlocale(LC_ALL, "Portuguese");
    
    char texto[1][100];
    int contador = 0;
   
	printf("Insir uma frase qualquer:");
    scanf("%[a-z ][A-Z][0-9]s", &texto[0]);

    int caracteres = contaCaracter(texto[0]);
    
    for (int j = 0; j<caracteres; j++){
        if (texto[0][j] == ' '){
             contador+=1;
            }
        }
    
    printf("A quantidade de palavras é : %d \n", contador+1);
    troca_letra(texto[0], ' ', '\n');
    printf("%s", texto[0]);
	getch();
	return 0;
}
