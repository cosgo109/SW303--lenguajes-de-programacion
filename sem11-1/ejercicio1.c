#include <stdio.h>  
#include <string.h>

struct Alumno {
    int codigo;
    char nombre[20];
    int edad;
};

int main () {

    struct Alumno a1;
    struct Alumno a2[5];
    struct Alumno a3 = {1250, "Abel", 18};
    struct Alumno a4 = {.edad = 22, .codigo = 999};
    
    a1.codigo = 123;
    strcpy(a1.nombre, "Jhonny");
    a1.edad = 25;

    printf("Codigo: %d\n", a1.codigo);
    printf("Nombre: %s\n", a1.nombre);
    printf("Edad: %d\n\n", a1.edad);

    printf("Codigo: %d\n", a3.codigo);
    printf("Nombre: %s\n", a3.nombre);
    printf("Edad: %d\n\n", a3.edad);

    printf("Codigo: %d\n", a4.codigo);
    printf("Nombre: %s\n", a4.nombre);
    printf("Edad: %d\n\n", a4.edad);

    for(int i = 0; i<5; i++){
        a2[i].codigo = 100 + i;
        a2[i].edad = 1 + i;
    }
    for (int i = 0; i<5; i++){
    
    printf("Codigo: %d\n", a2[i].codigo);
    printf("Nombre: %s\n", a2[i].nombre);
    printf("Edad: %d\n\n", a2[i].edad);
    
    }
    return 0;
}