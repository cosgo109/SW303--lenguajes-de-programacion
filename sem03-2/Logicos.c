// logicos.c
#include <stdio.h>
int main(void) {
    int a = 5, b = 0;

    if (a) printf("a=%d es verdadero\n", a);
    if (!b) printf("b=%d es falso, !b = %d\n", b, !b);

printf("5 > 3 = %d\n", 5 > 3);
printf("5 == 5 = %d\n", 5 == 5);

    int x = 0;
    if (b != 0 && a / b > 1) 
    { 
    printf("No se ejecuta\n");
    }else 
    {
    printf("Cortocircuito evito division por cero\n");
    }

    int r = 1 || 0 && 0; 
    printf("1 || 0 && 0 = %d\n", r);
    return 0;
}
