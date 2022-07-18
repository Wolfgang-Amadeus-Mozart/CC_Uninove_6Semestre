/*Faça um programa que solicite ao usuário o nome,
 a nota e a quantidade de faltas para cinco pessoas e armazene esses dados em uma estrutura (STRUCT). 
 Em seguida, o usuário escolhe uma opção de ordenação em ordem crescente ou por nome ou por faltas ou por notas e 
 imprime na tela os dados coletados.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

typedef struct Pessoa
{
  char nome[50];
  float nota;
  int faltas;
} Pessoa;

void ordena_nota(Pessoa *Pessoas, int qtd)
{
  int i, j;
  Pessoa aux;
  for (i = 0; i < qtd; i++)
  {
    for (j = i + 1; j < qtd; j++)
    {
      if (Pessoas[i].nota > Pessoas[j].nota)
      {
        aux = Pessoas[i];
        Pessoas[i] = Pessoas[j];
        Pessoas[j] = aux;
      }
    }
  }
}

void ordena_faltas(Pessoa *Pessoas, int qtd)
{
  int i, j;
  Pessoa aux;
  for (i = 0; i < qtd; i++)
  {
    for (j = i + 1; j < qtd; j++)
    {
      if (Pessoas[i].faltas > Pessoas[j].faltas)
      {
        aux = Pessoas[i];
        Pessoas[i] = Pessoas[j];
        Pessoas[j] = aux;
      }
    }
  }
}

void ordena_nome(Pessoa *Pessoas, int qtd)
{
  int i, j;
  Pessoa aux;
  for (i = 0; i < qtd; i++)
  {
    for (j = i + 1; j < qtd; j++)
    {
      if (strcmp(Pessoas[i].nome, Pessoas[j].nome) > 0)
      {
        aux = Pessoas[i];
        Pessoas[i] = Pessoas[j];
        Pessoas[j] = aux;
      }
    }
  }
}
int main()
{
  setlocale(LC_ALL, "Portuguese");
  
  Pessoa Pessoas[MAX];
  int i;
  for (i = 0; i < MAX; i++)
  {
    printf("Digite o nome: ");
    scanf("%s", Pessoas[i].nome);
    printf("Digite a nota: ");
    scanf("%f", &Pessoas[i].nota);
    printf("Digite as faltas: ");
    scanf("%d", &Pessoas[i].faltas);
  }


  int opcao;
  printf("\n1 - Ordenar por nome\n");
  printf("2 - Ordenar por faltas\n");
  printf("3 - Ordenar por nota\n");
  printf("Digite a opcao: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    ordena_nome(Pessoas, MAX);
    break;
  case 2:
    ordena_faltas(Pessoas, MAX);
    break;
  case 3:
    ordena_nota(Pessoas, MAX);
    break;
  default:
    printf("Opcao invalida\n");
    break;
  }

  for (i = 0; i < MAX; i++)
  {
    printf("\nNome: %s\n", Pessoas[i].nome);
    printf("Nota: %.2f\n", Pessoas[i].nota);
    printf("Faltas: %d\n", Pessoas[i].faltas);
    printf("------------------\n");
  }

  return 0;
}