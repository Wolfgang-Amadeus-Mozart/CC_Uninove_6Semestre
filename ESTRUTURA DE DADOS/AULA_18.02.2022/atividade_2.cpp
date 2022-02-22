/*Faça um que calcule a velocidade de um veiculo 
vm = (sf-si) / (tf-ti)

vm = velocidade media
sf = espaço final
si = espaço inicial
tf = tempo final
ti = tempo inicial
*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float vm, sf, si, tf, ti;

    /* Considero que  espaço (S) em quilômetros e tempo (t) em horas. 
       Pois a professora nao especifiou as unidades
    */

    printf("Informe o espaço final: ");
    scanf("%f", &sf);

     printf("Informe o espaço inicial: ");
    scanf("%f", &si);

    printf("Informe o tempo final (horas): ");
    scanf("%f", &tf);

    printf("Informe o tempo inicial: ");
    scanf("%f", &ti);

    
    vm = (sf-si) / (tf-ti);

    printf("a velocidade média era de: %f", vm);

    return 0;
}