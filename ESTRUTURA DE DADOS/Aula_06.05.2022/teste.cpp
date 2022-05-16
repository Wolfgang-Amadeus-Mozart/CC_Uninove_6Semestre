#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TOTAL 8
#define TOTAL_CHAR 10
 
int main()
{
  char nome[TOTAL][TOTAL_CHAR] = {
      "Miriam", "Sueli", "Ana", "Miguel", "Daniel", "Tales", "Humberto", "Juan"};
  int ra[TOTAL] = {3, 2, 1, 8, 5, 6, 7, 4};
  int opcao;
  int i, ii;
  printf("Escolha o tipo de ordenação: \n");
  printf("1 - Bubble Sort \n");
  printf("2 - Selection Sort \n");
 
  char aux[TOTAL_CHAR];
  do
  {
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
      for (i = 0; i < TOTAL - 1; i++)
      {
        for (ii = 0; ii < TOTAL - 1; ii++)
        {
          if (ra[ii] > ra[ii + 1])
          {
            strcpy(aux, nome[ii]);
            strcpy(nome[ii], nome[ii + 1]);
            strcpy(nome[ii + 1], aux);
 
            int aux2 = ra[ii];
            ra[ii] = ra[ii + 1];
            ra[ii + 1] = aux2;
          }
        }
      }
      break;
    case 2:
      for (i = 0; i < TOTAL - 1; i++)
      {
        int min = i;
        for (ii = i + 1; ii < TOTAL; ii++)
        {
          if (ra[ii] < ra[min])
          {
            min = ii;
          }
        }
        strcpy(aux, nome[i]);
        strcpy(nome[i], nome[min]);
        strcpy(nome[min], aux);
 
        int aux2 = ra[i];
        ra[i] = ra[min];
        ra[min] = aux2;
      }
      break;
    default:
      printf("Opção inválida! \n");
      break;
    }
  } while (opcao != 1 && opcao != 2);
 
  printf("\n");
  printf("Nome \t-\t RA \n");
  printf("\n");
  for (i = 0; i < TOTAL; i++)
  {
    if (!ra[i] > 0)
      continue;
    printf("%s \t-\t %d \n", nome[i], ra[i]);
  }
  return 0;
}