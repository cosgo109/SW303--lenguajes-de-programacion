#include <stdio.h>

typedef struct Configuracion {
    unsigned int flag : 1;
    unsigned int modo : 2;
    unsigned int nivel : 3;
    unsigned int prioridad : 4;
} Confi;

int main (void) {
    Confi c1;

    c1.flag = 1;
    
    printf("El flag es %d\n", c1.flag);
    printf("c1 ocupa %d bytes", sizeof(Confi));

    return 0;

}