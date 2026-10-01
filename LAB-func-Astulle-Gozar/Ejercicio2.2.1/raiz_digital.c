#include <stdio.h>
#include "raiz_digital.h"

int suma_digitos(int n) {
    int suma = 0;
    
    while (n > 0) {
    
        suma += n % 10;
    
        n /= 10;
        }
    return suma;
    }

int raiz_digital(int n) {
    
        if (n == 0) return 0;
    while (n >= 10) {

    n = suma_digitos(n);
        }   

    return n;
    }
void imprimir_traza(int n) {
    printf("%d", n);
    
    while (n >= 10) {
        n = suma_digitos(n);
        printf(" -> %d", n);
    }

    printf("\n");
}