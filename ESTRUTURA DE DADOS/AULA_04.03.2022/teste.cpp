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
            printf("digite o numero de espectadores da emissora 2: ");
            scanf("%d", &contador);
            emissora_2 += contador;
        break;
        
        case 4:
            printf("digite o numero de espectadores da emissora 4: ");
            scanf("%d", &contador);
            emissora_4 += contador;
        break;

        case 5:
            printf("digite o numero de espectadores da emissora 5: ");
            scanf("%d", &contador);
            emissora_5 += contador;
        break;

        case 7:
            printf("digite o numero de espectadores da emissora 7: ");
            scanf("%d", &contador);
            emissora_7 += contador;
        break;

        case 9:
            printf("digite o numero de espectadores da emissora 9: ");
            scanf("%d", &contador);
            emissora_9 += contador;
        break;

        case 11:
            printf("digite o numero de espectadores da emissora 11: ");
            scanf("%d", &contador);
            emissora_11 += contador;
        break;

        case 13:
            printf("digite o numero de espectadores da emissora 13");
            scanf("%d", &contador);
        break;


        default:
            break;
        }

        }
    
    int total = emissora_2 + emissora_4 + emissora_5 + emissora_7+ emissora_9 + emissora_11 + emissora_13;
    float percenual_emissora2 = (emissora_2 / total) * 100;
    float percenual_emissora4 = (emissora_4 / total) * 100;
    float percenual_emissora5 = (emissora_5 / total) * 100;
    float percenual_emissora7 = (emissora_7 / total) * 100;
    float percenual_emissora9 = (emissora_9 / total) * 100;
    float percenual_emissora11 = (emissora_11 / total) * 100;
    float percenual_emissora13 = (emissora_13 / total) * 100;

    printf("Percentual de espectadora da emissora 2: %f \n", percenual_emissora2);
    printf("Percentual de espectadora da emissora 4: %f \n", percenual_emissora4);
    printf("Percentual de espectadora da emissora 5: %f \n", percenual_emissora5);
    printf("Percentual de espectadora da emissora 7: %f \n", percenual_emissora7);
    printf("Percentual de espectadora da emissora 9: %f \n", percenual_emissora9);
    printf("Percentual de espectadora da emissora 11: %f \n", percenual_emissora11);
    printf("Percentual de espectadora da emissora 13: %f \n", percenual_emissora13);

    }