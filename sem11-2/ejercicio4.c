#include <stdio.h>

typedef float Precio;
typedef char *Nombre_ptr;
typedef char Mensaje[50];

struct Alumno__ {
    int codigo ;
    char nombres[50];
};

typedef struct Alumno__ Alumno;

typedef struct obrero {
    int codigo;
    int antiguedad;
} Obrero;

int main() {
	Precio precio_venta, precio_compra;
    Nombre_ptr n1;
    Mensaje m1;
    Alumno a1;
    Obrero o1;

	precio_venta = 25.50;

	printf("Precio de venta es %f\n", precio_venta);

	return 0;
}