// temperatura.c
#include <stdio.h>
int main() {
 float celsius, fahrenheit;
 char opcion;

 printf("=== CONVERSOR DE TEMPERATURAS ===\n");
 printf("C - Celsius a Fahrenheit\n");
 printf("F - Fahrenheit a Celsius\n");
 printf("Seleccione una opción: ");
 scanf(" %c", &opcion);

 switch(opcion) {
 case 'C':
 case 'c':
 printf("Ingrese temperatura en Celsius: ");
 scanf("%f", &celsius);
 fahrenheit = (celsius * 9/5) + 32;
 printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);
 break;
 case 'F':
 case 'f':
 printf("Ingrese temperatura en Fahrenheit: ");
 scanf("%f", &fahrenheit);
 celsius = (fahrenheit - 32) * 5/9;
 printf("%.2f°F = %.2f°C\n", fahrenheit, celsius);
 break;
 default:
 printf("Opción inválida\n");
 }

 return 0;
}