// errores_corregido.c
#include <stdio.h>
int main() {
 // CORRECCIÓN 1: Inicializar variable
 int contador = 0;
 printf("Contador: %d\n", contador);

 // CORRECCIÓN 2: Verificar división por cero
 int a = 10, b = 2;
 if (b != 0) {
 int division = a / b;
 printf("División: %d\n", division);
 } else {
 printf("Error: División por cero\n");
 }

 // CORRECCIÓN 3: Usar fgets en lugar de scanf
 char nombre[10];
 printf("Ingrese su nombre: ");
 fgets(nombre, sizeof(nombre), stdin);
 printf("Nombre: %s", nombre);

 // CORRECCIÓN 4: Formato correcto
 float precio = 19.99;
 printf("Precio: %.2f\n", precio);

 // CORRECCIÓN 5: Return adecuado
 return 0;
}