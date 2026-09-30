#include <stdio.h>
#define convergencia 0.693147

int main () {
    float suma=0.0;
    int N=1;
    float fraccion;
    int iteraciones=0;
    printf("Tolerancia: 1e-6\n");
    
    do {
        fraccion=1.0/N;
        
        if (N%2==0) {
            suma=suma-fraccion;
        } else {
            suma=suma+fraccion;
        }
        
        N++;
        iteraciones++;
        
    } while (fraccion>1e-6);
    
    printf("Iteraciones: %d\n",iteraciones);
    printf("Suma calculada: %f\n",suma);
    printf("ln(2) esperado: %f\n",convergencia);
    
    float error=suma-convergencia;
    if (error<0.0) {
        error=error*-1.0;
    }
    
    printf("Error Absoluto: %f\n",error);
    
    return 0;
}