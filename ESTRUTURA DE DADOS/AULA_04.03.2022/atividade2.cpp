/*
Sabendo que um tabuleiro de xadrez é composto de 64 quadros,
 faça um programa em C que identifique a quantidade de botões, 
 atendendo o seguinte critério: o primeiro quadrado recebe um botão e os seguintes devem receber o dobro do quadrado anterior.
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");


  float n=0;
  int v=0;
      
  for(n=1;n>=0 && v!=64;n=n+n){
   v++;
    printf("%i° Quad. tem %.0f quadros\n",v,n );
  }
  return 0;
}