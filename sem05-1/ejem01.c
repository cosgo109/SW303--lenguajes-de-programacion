#include <stdio.h>
#define ANIO_aCTUAL 2027

#ifndef __LINUX__
#define __SO__ "Windows"
#else
#define __SO__ "Linux"
#endif

void saludar();
int devolver_anio_actual();

int main () 
{
    saludar();
    return 0;
}


int devolver_anio_actual(){
    return 2026;
}

void saludar()
{
    printf("Bievenido a SW303 en este anio %d \n", devolver_anio_actual());
}
