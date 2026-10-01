#include <stdio.h>

    
    int incrementar_global(int contador) {

        return contador + 1;
    }
    int main(void) {
        
        int contador = 0;
        contador = incrementar_global(contador);   
        contador = incrementar_global(contador);
        contador = incrementar_global(contador);

    printf("global contador = %d\n", contador);
 return 0;
}
