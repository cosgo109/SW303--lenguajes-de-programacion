#include <stdio.h>

int main() {
    
    unsigned char byte=115;

    if ((byte>>5)&1) {
    
        printf("El quinto bit esta prendido");
    } else {
    
        printf("El quinto bit no esta prendido");
    }
    
    return 0;
}