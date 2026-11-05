#include<stdio.h>

int main (void){
    FILE *archivo;
    char linea[100];

    archivo = fopen("datos.txt", "r");

    if (archivo==NULL){
        printf("Error al abrir el archivo\n");
        return 1;
    }

    while (fgets(linea, sizeof(linea), archivo)!=NULL){
        printf("%s", linea);
    }

    fclose(archivo);

    return 0;
}