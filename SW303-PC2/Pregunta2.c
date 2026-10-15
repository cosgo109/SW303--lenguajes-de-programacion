#include <stdio.h>

int misterio(int n, int *profundidad) {

    (*profundidad)++;
    printf("Llamada %d: n=%d\n", *profundidad, n);

    if (n == 0) return 0;
    if (n == 1) return 1;

    int resultado = misterio(n-1, profundidad) + misterio(n-2,profundidad);
    return resultado;
}

int main() {

    int prof = 0;
    int r = misterio(8,&prof);
    printf("Resultado: %d\n", r);

    return 0;
}
