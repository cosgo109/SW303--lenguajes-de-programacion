#include <stdio.h>

int main (){

    int contador = 0;
    int n;
    int mayor = 0;
    int generador;
    for(int i = 1; i<=10000; i++){

        n = i;
        while(n!=1){
                
            if(n % 2 == 0){
                n = n/2;
            }
            else if( n % 2 != 0 && n != 1){
                n = 3*n + 1;
            }
            contador++;
                }

        if( contador > mayor) {
            mayor = contador;
            generador = i;
        }
        contador = 0;
    }

    printf("Generador: %d, mayor semilla: %d",generador, mayor);

    return 0;
}