#include <stdio.h>

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

    struct Alumno a1 = {999, "Abel", 18};
    struct Alumno *ptr;

    ptr = &a1;
    mostrar(*ptr);


    (*ptr).edad = 33;
    mostrar(*ptr);

    return 0;
}