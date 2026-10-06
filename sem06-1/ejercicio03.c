#include <stdio.h>

int main () {

    int *ptr;    //se define ptr como puntero
                // es una variable que opera con dirección de memoria
               // inicialmente apunta a algún lugar de la memoria
    int cantidad = 200;
            /* Regla: Si se crea el puntero se requiere inicializar su valor antes de usarlo, es decir:*/
    ptr = NULL; //Null es cero

    if( ptr == NULL){
        ptr = &cantidad;

        printf("Puntero inicializado, su direccion es %p y su valor es %d", ptr, *ptr);
    } else {
        printf("El puntero ya tiene memoria, no es necesario inicializar!\n");
    }
    return 0;
}