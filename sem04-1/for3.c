#include <stdio.h>
#include <math.h>

int main () {
    
    float y;
    float error = 0.1;    

    for( float x = 5; x > -5; x-= 0.1 ) {
        y = x*x - 6*x + 9;

        if(fabs(y) < error )
        {
            printf("Una solucion aproximada es: %.4f \n", x);
        }
    }

    return 0;
}