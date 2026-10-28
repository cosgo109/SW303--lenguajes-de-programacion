#include <stdio.h>

int main () {
    int numero = 100;
    int *ptr = &numero;
    int **pptr = &ptr;

    printf("numero = %d, direccion: %p\n", numero, &numero);
    printf("*ptr = %d, direccion: %p\n", *ptr, ptr);
    printf("**ptr = %d, direccion: %p\n", **pptr, pptr);

    **pptr = 200;
    printf("Nuevo numero = %d\n", numero);

    return 0;
}