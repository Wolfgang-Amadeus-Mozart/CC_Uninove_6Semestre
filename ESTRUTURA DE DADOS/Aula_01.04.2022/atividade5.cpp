# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main (){
    int *x, *y, *z ;

    x = (int *) malloc (sizeof(int));
    y = (int *) malloc (sizeof(int));
    *x = 27;
    *y = 43;

    z = y;

    printf("x=%d", &z);


}