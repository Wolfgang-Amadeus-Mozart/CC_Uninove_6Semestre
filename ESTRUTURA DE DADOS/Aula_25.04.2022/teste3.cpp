#include <stdio.h>
#include <string.h>


char nome[7][20] =  {"Miriam","Sueli","Ana","Miguel","Daniel","Tales","Humberto"};

void ORDENA (){
    int x,y,r;
    char aux[70];
    for(x=0; x<=6; x++){
        for(y = x+1; y<=6; y ++){
            r = strcmp(nome[x], nome [y]);
            if(r > 0){
                strcpy(aux, nome[x]);
                strcpy(nome[x],nome[y]);
                strcpy(nome[y], aux);
            }
        }
    }
}
 int main()
{
    ORDENA();
    
    for(int i = 0; i < 7; i++){
        puts(nome [i]);
    }

    return 0;
}