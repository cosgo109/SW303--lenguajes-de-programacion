#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Alumno {
    int codigo;
    char nombre[20];
    int edad;
    };

void mostrar(struct Alumno a){
    printf("Codigo: %d\n", a.codigo);
    printf("Nombre: %s\n", a.nombre);
    printf("Edad: %d\n\n", a.edad);

}

int main (){
    struct Alumno *ptr;
    ptr = NULL;
    
    ptr = (struct Alumno *)malloc(sizeof(struct Alumno));

    if(ptr == NULL){
        printf("No hay memoria!!!");
        return 0;
    }

    ptr->codigo = 9999;
    strcpy(ptr->nombre, "Abel");
    ptr->edad = 22;

    mostrar(*ptr);

    free(ptr);

    return 0;
    
}