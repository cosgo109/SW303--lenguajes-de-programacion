#include <stdio.h>

int contador() {
    static  int clave = 0;
    int k = 10;
    clave++;
    return clave;
}

int contador2() {
    int clave2 = 0;
    clave2++;
    return clave2;
}
int clave3 = 20;
int contador3 () {
        clave3++;
        return clave3;
    }
int main () {
    printf("Se registra el alumno %d\n", contador());
    printf("Se registra el alumno %d\n", contador());
    printf("Se registra el alumno %d\n", contador());
    printf("Se registra el alumno %d\n", contador());

    printf("Contador 3 es %d", contador3());

    return 0;   
}