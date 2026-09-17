#include <stdio.h>

int main(void) {

    int edad;

    char inicial;

    char nombre[50];

    printf("Edad: ");
    scanf("%d", &edad);
    printf("Inicial: ");
    scanf(" %c", &inicial); 
    printf("Nombre: ");
    scanf("%49s", nombre); 
    printf("-> %d, %c, %s\n", edad, inicial, nombre);

    int n;
    char cadena[50];
    printf("Numero: ");
    scanf("%d", &n);
    printf("Cadena: ");
    scanf("%s", cadena); 
    printf("n=%d, cadena=%s\n", n, cadena);

    return 0;
}
