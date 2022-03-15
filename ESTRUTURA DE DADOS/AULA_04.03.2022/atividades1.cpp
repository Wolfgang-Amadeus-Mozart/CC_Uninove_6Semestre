/* 24-	Faça um programa que receba 10 valores aleatórios do tipo inteiro. O programa deve verificar
 e mostrar na tela: (Utilize: for)

"	O total de números que estão entre 15 e 35.
"	O total de números que estão fora do intervalo acima.
  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, qtdfora=0, qtddentro=0, cont;
	for (cont=0;cont<10;cont++){
		printf ("Digite um número inteiro ");
		scanf("%d",&n);
		if (n>15 && n<35){
			qtddentro+=1;
		}
		else{
			qtdfora+=1;
		}
	}
	 printf("O total de números digitados que está no intervalo de 15 a 35 é %d.\n",qtddentro);
	printf("O total de números digitados que está fora do intervalo de 15 a 35 é %d.\n",qtdfora);
	getch();
	return 0;
}
