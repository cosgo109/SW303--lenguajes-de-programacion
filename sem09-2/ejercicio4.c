#include <stdio.h>

int main (){ 

    long long numeros[5] = {10,20,30,40,50};
    char *ptr;
    ptr = (char *)numeros;
    for(int i = 0; i < 30 ; i++){

        printf("Valor %d, direccion %p \n", *(ptr+i), (ptr+i));
    
    }

    return 0;
}