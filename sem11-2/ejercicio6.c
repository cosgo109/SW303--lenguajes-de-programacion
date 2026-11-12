#include <stdio.h>
#include <math.h>

double seno(double x) {
    return sin(x);
}

double balistica(double x) {
    return -x*x;
}

double cubica(double x) {
    return x*x*x + 3*x*x -2*x + 5;
}

void graficar(double xmin, double xmax, double (* funcion) (double)) {
    for(double dx = xmin; dx < xmax; dx += 0.1) {
        funcion(dx);
        printf(".");
    }
}

int main (void) {
    printf("Grafico del seno\n");
    graficar(-3.14, 3.14, seno);
    printf("\n");

    printf("Grafico del movimiento de una bala\n");
    graficar(0, 25, balistica);
    printf("\n");


    printf("Grafico del movimiento de una funcion cubica\n");
    graficar(0, 5, cubica);
    printf("\n");

    return 0;
}