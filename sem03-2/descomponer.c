#include <stdio.h>
int main () {
    int n = 4728;

    printf("Miles: %d \n",(n / 1000) %10);

    printf ("Centenas: %d \n",(n / 100) %10);

    printf("DeCENAS: %d \n",(n / 10) %10 );
    
    printf("Unidades: %d \n", n % 10);


}