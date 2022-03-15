#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(void) {

  float v[5];
  int vetFat[0], i;

  for (int i = 0; i < 5; i++) {
    printf("Digite um número entre 1 e 10:  ");
    scanf("%f", & v[i]);

  }
  if (v[i] >= 1 && v[i] <= 10) {
    for (int i = 0; i < 5; i++) {
      for (vetFat[i] = 1; v[i] > 1; v[i]--) {
        vetFat[i] *= v[i];
      }
      printf("%d\n", vetFat[i]);
    }
  } else {
    printf("Digite apenas numeros entre 1 e 10!");
  }

return 0;
}