#include <stdio.h>
#include "racional.h"

int main (){
    int n1, n2, d1, d2;
    printf("Ingrese el numerador para la primera fraccion\n");
    scanf("%d",&n1);

    printf("Ingrese el denominador para la primera fraccion\n");
    scanf("%d",&d1);

    printf("Ingrese el numerador para la segunda fraccion\n");
    scanf("%d",&n2);

    printf("Ingrese el denominador para la segunda fraccion\n");
    scanf("%d",&d2);

    int n_res = 0, d_res = 0;

    sumar(n1,d1,n2,d2, &n_res, &d_res);

    printf("Resultado simplificado: %d/%d \n", n_res, d_res);
    return 0;
}