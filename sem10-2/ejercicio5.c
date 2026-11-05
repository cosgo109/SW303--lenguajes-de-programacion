#include<stdio.h>

int main(void) {
    FILE *archivo;
    char linea[100];
    archivo = fopen("datos.txt", "r+");
 
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
 // Leer el contenido
    fgets(linea, sizeof(linea), archivo);
    printf("Contenido original: %s\n", linea);
 // Posicionarse al inicio
    fseek(archivo, 0, SEEK_SET);
 // Sobrescribir los primeros caracteres
    fprintf(archivo, "XYZ");
    fclose(archivo);
 
    return 0;
}