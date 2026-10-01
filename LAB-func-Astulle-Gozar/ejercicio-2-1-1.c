#include <stdio.h>

int suma_digitos(int n);
int raiz_digital(int n);
void imprimir_traza(int n); 

int main () {
    int num;
    do {
        printf("Introduzca un numero positivo: \n");
        scanf("%d",&num);
    } while (num<=0);
    
    imprimir_traza(num);
    printf("Raiz Digital = %d",raiz_digital(num));
    
    return 0;
}

int suma_digitos (int n) {
    int suma=0;
    int r;
    while (n!=0) {
        r = n%10;
        suma=suma+r;
        n=n/10;
    }
    
    return suma;
}

int raiz_digital (int n) {
    while (n>9) {
        n=suma_digitos(n);
    }
    return n;
}

void imprimir_traza (int n) {
    printf("%d",n);
    while (n>9) {
        n=suma_digitos(n);
        printf(" -> %d",n);
    }
    printf("\n");
}