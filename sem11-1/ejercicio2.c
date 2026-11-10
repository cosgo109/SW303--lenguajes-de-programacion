#include <stdio.h>
#include <string.h>

struct Alumno { 
    int codigo; // Atributos
    char nombre[20];
    int edad;
};

void mostrar(struct Alumno a){
     printf("Codigo: %d\n", a.codigo);
    printf("Nombre: %s\n", a.nombre);
    printf("Edad: %d\n\n", a.edad);

}

int main(){
    struct Alumno a1 = {999, "Abel", 18};
    struct Alumno *ptr; //Se crea un apuntador al tipo alumno
    ptr = &a1;    //ptr toma la direccion de a1

    mostrar(*ptr);
    //Cambio
    ptr->edad = 33;
    
    mostrar(*ptr);

    return 0;
}
