#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>

int main(){
    char *nombre[6];
    int reng;
    for(reng = 0; reng <=5; reng++){
        fflush (stdin);
        gets(nombre[reng]);
    }
    for(reng = 0; reng <=5; reng++){
        puts(*(nombre+reng));
    }
    }