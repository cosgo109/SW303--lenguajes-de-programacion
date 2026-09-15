#include <stdio.h>

int main () {
    int a = 25;
    float b = 7.5;
    double c = 6.022e23;
    char d = 'A';
    char *nombre = "UNI";

    printf("a = %d ocupa %d bytes\n", a, sizeof(a));
    printf("b = %f ocupa %d bytes\n", b, sizeof(b));
    printf("c = %lf ocupa %d bytes\n", c, sizeof(c));
    printf("d = %c ocupa %d bytes\n", d, sizeof(d));
    printf("*nombre = %s ocupa %d bytes y tiene %d caracteres\n", nombre, sizeof(nombre), sizeof(*nombre));


    return 0;
}