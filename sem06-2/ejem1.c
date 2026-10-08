#include <stdio.h>

void agregar_uno(int n){
    n++;
    printf("Dentro de la funcion, el valor de n es %d\n",n);
}

void agregar_uno2(int *n){ //n es refenrecia (direccion de memoria)
    (*n)++;
    printf("Dentro de la funcion, el valo de n es %d\n", *n); // *n es desreferencia
}

int main () {

    int n = 5;
    printf("-----------Sin usar referencia-----------\n");
    printf("Antes de entrar a la función, el valor de n es %d\n", n);
    agregar_uno(n);
    printf("Despues de entrar a la funcion, el valor de n es %d\n", n);
    printf("-----------Usando referencia-----------\n");
    printf("Antes de entrar a la funcioxn, el valor de n es %d\n", n);
    agregar_uno2(&n);
    printf("Despues de entrar a la funcion, el valor de n es %d\n", n);




    return 0;
}