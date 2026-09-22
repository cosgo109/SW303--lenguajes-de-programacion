#include <stdio.h>

int main () {
    //mostrar los multiplos de 3 que hay en los 
    //primeros 25 numeros enteros
    int hasta = 25;
    //for(inicializar contador; limitar contador; variacion)
    for (int desde = 1; desde <=hasta; desde++){
        
        if(desde % 3 == 0)
        {
            printf("%d\n", desde);
        }
    }

    return 0;
}