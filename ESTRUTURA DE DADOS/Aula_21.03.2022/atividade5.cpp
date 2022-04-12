# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char n[30];
	int i, soma=0,t;
	float porc;
	printf("Digite um nome ");
	gets (n);
	t=strlen(n);
	for(i=0;i<t;i++){
		if(tolower(n[i])=='a'|| tolower(n[i])=='e' || tolower(n[i])=='i' || tolower(n[i])=='o' || tolower(n[i])=='u'){
//TOLOWER = transforma a letra em minúscula => usar a bilblioteca ctype.h
//TOUPPER = transforma a letra em maiúscula => usar a biblioteca ctype.h
			soma++;
		}
	}
	printf("O nome tem %d caracteres\n",t);
	printf("O nome tem %d vogais\n",soma);
	porc=soma*100/t;
	printf("%.2f%% são de vogais no nome %s.",porc,n);
	getch();
	return 0;
}
