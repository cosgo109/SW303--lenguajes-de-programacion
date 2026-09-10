#include <stdio.h>
int main() {
 // Constantes
 const float PI = 3.14159;

 // Variables
 int num1, num2;
 float resultado;

 printf("--- CALCULADORA BÁSICA ---\n");
 printf("Ingrese dos números enteros:\n");

 // Entrada de datos
 printf("Primer número: ");
 scanf("%d", &num1); // Leer entero

 printf("Segundo número: ");
 scanf("%d", &num2);

 // Operaciones
 printf("\n--- RESULTADOS ---\n");
 printf("%d + %d = %d\n", num1, num2, num1 + num2);
 printf("%d - %d = %d\n", num1, num2, num1 - num2);
 printf("%d * %d = %d\n", num1, num2, num1 * num2);
 resultado = (float)num1 / num2; // Casting
 printf("%d / %d = %.2f\n", num1, num2, resultado);

 // Módulo (resto)
 printf("%d %% %d = %d\n", num1, num2, num1 % num2);

 // Operadores de incremento
 printf("\n--- OPERADORES ESPECIALES ---\n");
 int x = num1;
 printf("x = %d\n", x);
 printf("x++ = %d\n", x++); // Post-incremento
 printf("Después de x++: x = %d\n", x);
 printf("++x = %d\n", ++x); // Pre-incremento

 return 0;
}
