#include <stdio.h>

int ackermann(int m, int n){
    static int contador = 0;
    contador++;
    if (m == 0) return n+1;
    if (m > 0 && n == 0) return ackermann(m-1,1); 
    if (m > 0 && n > 0) return ackermann(m-1, ackermann(m,n-1)); 
}

int main (){

    printf("ackermann(3,4) = %d \n", ackermann(3,4));
    return 0;
}