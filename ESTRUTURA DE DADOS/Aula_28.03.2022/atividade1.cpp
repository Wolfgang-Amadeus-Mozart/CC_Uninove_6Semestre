/*60- Qual é o valor de y que será impresso ao final do programa abaixo? Adicione comentários nas 
linhas 10, 12, 16, 18, 20 e 22
  */
# include <stdio.h>
main() {
  
    int y, *p, x;
  
    y = 0;
    p = &y;
  	// p está apontando para o endereço de memória de y. Logo, *p=0
    x = *p;
  	// x recebe o conteúdo do ponteiro p. Logo, x=0
    x = 5;
  
   *p = *p + 1;
   //*p=0+1=1
       x--;
   //x = 5-1 = 4
   *p = *p + x;
    //*p = 1 + 4 = 5
    printf("y = %d\n", y);
    //y = 5
    }
