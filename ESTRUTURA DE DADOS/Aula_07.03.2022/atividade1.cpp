# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float v[3], media, soma=0;
	for(i=0;i<3;i++){
		//i=0
		//0+1=1 i=1
		//1+1=2 i=2
		//1+2=3 i=3 => sai da repetição
		printf("Digite um número ");
		scanf("%f",&v[i]);
		// Digite um número: 6
		// Digite um número: 9
		// Digite um número: 10
		soma=soma+v[i];
		//soma= 0 + 6 = 6
		//soma= 6 + 9 =15
		//soma= 15 + 10=25
	}
	media=soma/3;
	//media=25/3=8,33
	printf("A média dos três elementos do vetor é %.2f",media);
	getch();
	return 0;
}
