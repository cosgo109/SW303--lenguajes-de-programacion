#include <stdio.h>
#include "raiz_digital.h"

int main(void) {
    int n;
    printf("Ingrese n: ");
    
    if (scanf("%d", &n) != 1 || n < 0) {
        fprintf(stderr, "Entrada invalida\n");
        return 1;
    }
    imprimir_traza(n);
    
    printf("Raiz digital: %d\n", raiz_digital(n));
    return 0;
}