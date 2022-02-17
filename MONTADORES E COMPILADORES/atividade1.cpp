#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main() {       
bool retorno = false;
    
char nome[50] = "filipe";
char texto[50] = "asfd";

int tamanhoTexto1 = 0;
int tamanhoTexto2 = 0;


tamanhoTexto1 = strlen(nome);
tamanhoTexto2 = strlen(texto);
printf("%d  | %d", tamanhoTexto1, tamanhoTexto2 );
printf("\n");

/*
Foi criado um metodo para contar os caracteres utilizando a biblioteca string
Isso serve para que os espaços em brancos nao serao contados, evitando problemas no codigo
*/
    
    for (int i = 0; i <= tamanhoTexto1 - 1; i ++){
        for (int j = 0; j <= tamanhoTexto2 - 1; j++){
            if (nome[i] == texto[j]) {
                retorno = true;
            }
        }
    }
            
    if(retorno == true){
       printf("existem letras iguais"); 
    }else{
       printf("não existem letras iguais");
    }
}