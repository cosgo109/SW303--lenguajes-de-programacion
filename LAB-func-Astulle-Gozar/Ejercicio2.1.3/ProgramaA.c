#include <stdio.h>

    int contador = 0; 
    
    void incrementar_local(void) {
    
        int contador = 0; // LOCAL — oculta la global
        contador++;
        printf("local contador = %d\n", contador);
    
    }
    int main(void) {

        incrementar_local();
        incrementar_local();
        incrementar_local();
        printf("global contador = %d\n", contador);
    return 0;
}