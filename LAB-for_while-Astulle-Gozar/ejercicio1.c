#include <stdio.h>

int main () {
    int num;
    do {
        printf("Introduzca un numero positivo: \n");
        scanf("%d",&num);
    } while (num<=0);
    
    while (num>9) {
        int n=num;
        int suma=0;
        int r;
        while (n!=0) {
            r = n%10;
            suma=suma+r;
            n=n/10;
        }    
        printf("%d -> ",num);
        num=suma;
    }
    
    printf("%d\n",num);
    printf("Raiz Digital = %d",num);
    
    return 0;
}