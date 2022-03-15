/*
Grande parte da receita de uma emissora de televisão vem da venda de horários de propagandas.
O preço de cada minuto é baseado na audiência do canal de TV.
Uma cidade do interior foi escolhida para servir de amostra para um teste de uma nova pesquisa de audiência. Para tanto, 
foram visitadas 1000 residências, que informaram qual o canal sintonizado (2, 4, 5, 7, 9, 11, 13) e o número de telespectadores.
 Faça um programa em C que receba os dados coletados, calcule e apresente na tela o porcentual de audiência de cada emissora. *
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

    int qtdeCasas = 1000;
    int seletor = 0;
    int contador = 0;
    int qtdeEspectadores = 0 ;
    int emissora_2 = 0;
    int emissora_4 = 0;
    int emissora_5 = 0;
    int emissora_7 = 0;
    int emissora_9 = 0;
    int emissora_11 = 0;
    int emissora_13 = 0;

    for(int i = 0; i<=qtdeCasas; i++){
        printf("Digite o nmero da emissora assistida na casa de numero %d: ", i);
        scanf("%d", &seletor);
      
        switch (seletor){
        case 2:
            printf("digite o numero de espectadores da emissora 2");
            scanf("%d", &emissora_2);
            emissora_2 += emissora_2
        break;
        
        case 4:
            printf("digite o numero de espectadores da emissora 4: ");
            scanf("%d", &emissora_4);
        break;

        case 5:
            printf("digite o numero de espectadores da emissora 5: ");
            scanf("%d", &emissora_5);
        break;

        case 7:
            printf("digite o numero de espectadores da emissora 7: ");
            scanf("%d", &emissora_7);
        break;

        case 9:
            printf("digite o numero de espectadores da emissora 9: ");
            scanf("%d", &emissora_9);
        break;

        case 11:
            printf("digite o numero de espectadores da emissora 11: ");
            scanf("%d", &emissora_11);
        break;

        case 13:
            printf("digite o numero de espectadores da emissora 13");
            scanf("%d", &emissora_13);
        break;


        default:
            break;
        }

        }
    int total = emissora_2 + emissora_4 + emissora_5 + emi
    }