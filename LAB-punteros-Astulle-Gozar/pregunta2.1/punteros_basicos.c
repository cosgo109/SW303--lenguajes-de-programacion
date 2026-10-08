#include <stdio.h>
int main () {

    int x = 42; int *p = &x; int **pp = &p;

    printf("valor de x: %d \n", x);
    printf("valor de *p: %d \n", *p);
    printf("valor de **p: %d \n", **pp);
    printf("\n");
    printf("direccion de x: %p \n",(void *)&x);
    printf("valor de p: %d \n", *p);
    printf("direccion de p: %p \n",(void *) &p );
    printf("\n");
    printf("%p\n", (void *) pp);

    *p = 20;
    x = *p;
    printf("%d\n", x);
    **pp = 100;
    x = *p;
    printf("%d", x);

    return 0;
}