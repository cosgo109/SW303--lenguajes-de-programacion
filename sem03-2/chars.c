#include <stdio.h>

int main() {
 
    int c; // ¡int, no char! Porque getchar() devuelve int (para EOF)
 
    int contador = 0;
 
    printf("Escribe texto (Ctrl+Z + Enter para terminar en Windows):\n");
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A'; 
            }
        putchar(c);
        contador++; 
    }
    printf("\nTotal caracteres leidos: %d\n", contador);

    return 0;
}
