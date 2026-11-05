#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("estudiantes.txt", "w");
    
    if (archivo == NULL) {
        printf("Error al crear el archivo.\n");
        return 1;
    }
    
    for (int i = 0; i < 5; i++)
    {
        fprintf(archivo, "001,Juan,18,%d\n",i+5);
        fprintf(archivo, "002,Pedro,16,%d\n",i+4);
        fprintf(archivo, "003,Maria,19,%d\n",i+3);
    }
    

    
    
    fclose(archivo);
    
    printf("Archivo creado correctamente.\n");
    
    return 0;
}