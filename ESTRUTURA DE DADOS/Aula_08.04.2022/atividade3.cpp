/*
Faça um programa que solicite ao usuário 5 números inteiros positivos e crie uma função que com passagem de parâmetro por referência 
para cada número informado e retorne a soma de seus divisores. *
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

void funcao(unsigned int n, unsigned int *soma) {   
   int divisor;
  *soma = 0;  
  for (divisor = 1; divisor < n; divisor++){
    if (n % divisor == 0){
	
      *soma = (unsigned int)(*soma + divisor);
  }
  } 

}

int main() {
  unsigned int n[5], soma,  divisor;      

for(int i = 0; i < 5; i++) {
printf("Digite 5 números inteiros positivos [%d]: ", i+1);
scanf("%d", &n[i]);
}

for(int i = 0; i < 5; i++){
  funcao((unsigned int)n[i],&soma);
  printf("A soma do divisor %d eh %i \n", n[i], soma);

}

  getch();
  return 0;
}