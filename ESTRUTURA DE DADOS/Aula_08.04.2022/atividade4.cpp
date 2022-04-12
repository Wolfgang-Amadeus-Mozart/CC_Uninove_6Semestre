/*Crie um programa que solicite 10 números inteiros ao usuário e imprima para cada um o seu correspondente módulo.
 Para obter o valor do módulo do número utilize a função com retorno e com passagem de parâmetro por referência.
 */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int absoluto(int n){
	if(n < 0){
 		return n*-1;
 	}
 	return n;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num[10];

    for (int i = 0; i < 10; i++){
        printf("Digite 10 números inteiros : [%d] ", i+1);
        scanf("%d", &num[i]);
    }

 	for(int i = 0; i < 10; i++){
 		printf("Valor absoluto do número de posição %d: %d\n", i+1, absoluto(num[i]));
 	}
    
	getch();
	return 0;
}