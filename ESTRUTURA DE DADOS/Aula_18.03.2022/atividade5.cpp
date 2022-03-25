# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
int i, j, m[4][5], somatorio, somatorio_Linha, somatorio_Coluna,l1[4],c1[5];
// i = linha
// j = coluna
for (i=0;i<4;i++){
	for(j=0;j<5;j++){
		printf("Digite um número (N) ");
		scanf("%d",&m[i][j]);
	}
}


for (i=0;i<4;i++){
	somatorio_Linha = 0;
	for(j=0;j<5;j++){
		somatorio_Linha+=m[i][j];
	}
	l1[i] = somatorio_Linha;
	printf("Soma %d\n", l1[i]);
}

for (j=0;j<5;j++){
	somatorio_Coluna = 0;
	for(i=0;i<4;i++){
		somatorio_Coluna+=m[i][j];
	}
	c1[j] = somatorio_Coluna;
	printf("Soma %d\n", c1[j]);
}

for (i=0;i<4;i++){
	for(j=0;j<5;j++){
		somatorio += m[i][j];
	}
}

printf("O Somatório é: %d ", somatorio);

	getch();
	return 0;
}