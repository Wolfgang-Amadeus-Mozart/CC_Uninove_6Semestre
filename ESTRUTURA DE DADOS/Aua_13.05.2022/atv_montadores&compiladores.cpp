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

int main(){
	setlocale(LC_ALL, "Portuguese");
    
    char texto[1][100];
	char alfabeto[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int contador = 0;
  
	
    printf("Digite seu texto: ");
    fgets(texto[0], 100, stdin);

    int caracteres = contaCaracter(texto[0]);

    for (int i=0; i<25; i++){
        for (int j = 0; j<caracteres; j++){
            if (toupper(texto[0][j]) != alfabeto[i]){
                contador+=1;
            }
        }
    }
    
  
    printf("%d-", contador);
    printf("%c", alfabeto[25]);
	getch();
	return 0;
}

