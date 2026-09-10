#include <stdio.h>
#include <stdlib.h>
int main() {
 // ERROR 1: Variable no inicializada
 int contador;
 printf("Contador: %d\n", contador); // Valor basura

 // ERROR 2: División por cero
 int a = 10, b = 0;
 int division = a / b; // ¡Error en tiempo de ejecución!

 // ERROR 3: Buffer overflow con scanf
 char nombre[10];
 printf("Ingrese su nombre: ");
 scanf("%s", nombre); // Si ingresa más de 10 caracteres...

 // ERROR 4: Formato incorrecto en printf
 float precio = 19.99;
 printf("Precio: %d\n", precio); // %d para float

 // ERROR 5: Olvidar el return
 // (No hay return 0; - warning)

 // ERROR 6: Variable no utilizada
 int variable_no_usada = 42;

 return 0;
}