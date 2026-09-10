#include <stdio.h>
#define MAX_ESTUDIANTES 5 // Constante preprocesador
int main() {
 // Variables
 char nombre[50];
 float nota1, nota2, nota3, promedio;
 int i;

 printf("=== SISTEMA DE CALIFICACIONES ===\n\n");

 // Bucle for para procesar estudiantes
 for (i = 0; i < MAX_ESTUDIANTES; i++) {
 printf("\n--- Estudiante %d ---\n", i + 1);

 // Limpiar buffer de entrada (solo a partir del segundo estudiante para evitar bloqueos)
 if (i > 0) {
 while (getchar() != '\n');
 }

 printf("Nombre: ");
 fgets(nombre, sizeof(nombre), stdin);

 // Eliminar el '\n' del final
 for (int j = 0; nombre[j] != '\0'; j++) {
 if (nombre[j] == '\n') {

nombre[j] = '\0';
 break;
 }
 }

 // Entrada de notas con validación
 do {
 printf("Nota 1 (0-100): ");
 scanf("%f", &nota1);
 } while (nota1 < 0 || nota1 > 100);

 do {
 printf("Nota 2 (0-100): ");
 scanf("%f", &nota2);
 } while (nota2 < 0 || nota2 > 100);

 do {
 printf("Nota 3 (0-100): ");
 scanf("%f", &nota3);
 } while (nota3 < 0 || nota3 > 100);

 // Calcular promedio
 promedio = (nota1 + nota2 + nota3) / 3;

 // Determinar estado
 char* estado;
 if (promedio >= 70) {
 estado = "APROBADO";
 } else if (promedio >= 50) {
 estado = "RECUPERACIÓN";
 } else {
 estado = "REPROBADO";
 }

 // Salida formateada
 printf("\n--- RESULTADOS ---\n");
 printf("Estudiante: %s\n", nombre);
 printf("Notas: %.1f, %.1f, %.1f\n", nota1, nota2, nota3);
 printf("Promedio: %.2f\n", promedio);
  printf("Estado: %s\n", estado);

 // Operador ternario para línea de separación
 printf("%s\n", (i < MAX_ESTUDIANTES - 1) ? "-------------------" : "==================");
 }

 printf("\n¡Procesamiento completado!\n");
 return 0;
}