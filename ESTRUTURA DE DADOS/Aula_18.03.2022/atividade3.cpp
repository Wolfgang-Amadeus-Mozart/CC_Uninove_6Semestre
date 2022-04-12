//* Faça um programa que leia dois nomes, compare-os e imprima se sao iguais ou diferentes

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char nome1[50], nome2[50];
    
    printf("Digite um nome ");
    gets(nome1);
    printf("Digite outro nome nome ");
    gets(nome2);

    if (strcmp (nome1, nome2)  == 0){
        printf("NOme iguais");
    }else {
        printf("nome diferentes");
    }
    


}