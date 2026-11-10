#include <stdio.h>
struct Fecha {
    int dia;
    int mes;
    int anio;
};

struct Persona {
    char nombre[50];
    int edad;
    struct Fecha nacimiento;
};

struct Estudiante {
    int codigo;
    struct Persona datos;
    float promedio;
};

int main() {
struct Estudiante e = {
    .codigo = 1001,
    .datos = {
        .nombre = "Carlos",
        .edad = 20,
        .nacimiento = {15, 5, 2006}
    },
    .promedio = 17.5
};

    printf("Codigo: %d\n", e.codigo);
    printf("Nombre: %s\n", e.datos.nombre);
    printf("Fecha de nacimiento: %02d/%02d/%d\n",
    e.datos.nacimiento.dia,
    e.datos.nacimiento.mes,
    e.datos.nacimiento.anio);

return 0;
}