# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
int i,n, v[5],fat,vfat[5];

printf("digite apenas numeros no intrevalo de 1 ate 10\n");
	for(i=0;i<5;i++){ // valores do v
		printf("Digite um número:");
		scanf("%d",&v[i]);
		n=v[i];
		for(fat = 1; n > 1; n = n - 1){
        fat = fat * n;
        }
    
        vfat[i]=fat;
    
	}
printf("vetor normal\n");
for(i=0;i<5;i++){
printf("%d\t",v[i]);
}
printf("\nvetor fatorial\n");
for(i=0;i<5;i++){
printf("%d\t",vfat[i]);
}

	getch();
	return 0;
}