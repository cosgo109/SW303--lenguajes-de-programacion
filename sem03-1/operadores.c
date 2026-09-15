#include<stdio.h>

int main (){
    int a = 25,b = 7 ,c = 129;

    printf("Operadores aritmeticos\n");
    printf("La suma de %d + %d es %d\n", a, b, a + b);
    printf("La resta de %d - %d es %d\n", a, b, a - b);
    printf("La multiplicacion de %d * %d es %d\n", a, b, a * b);
    printf("La division entera de %d / %d es %d\n", a, b, a / b);
    printf("La division real de %d / %d es %.2f\n", a, b, (float)a / b);
    printf("La resto (%%) de dividir %d / %d es %d\n", a, b, a % b);

    printf("Operadores de comparacion\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("¿%d > %d? es %d\n", a, b, a > b);
    printf("¿%d  %d? es %d\n", b, c, b > c);
    printf("%d > %d y %d > %d es %d\n", a,b,b,c, (a>b) && (b>c));
    printf("%d > %d o %d > %d es %d\n", a,b,b,c, (a>b) || (b>c));

    return 0;
}