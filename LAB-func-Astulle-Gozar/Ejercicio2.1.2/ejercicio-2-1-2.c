#include <stdio.h>
int incrementar (int x) {
    x = x + 1;
    printf("Dentro de incrementar: x = %d\n", x);
    return x;
}

int main(void) {
    int n = 10;
    n=incrementar(n);
    printf("Despues de llamar: n = %d\n", n);
    return 0;
}