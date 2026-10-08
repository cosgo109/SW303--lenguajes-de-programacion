#include <stdio.h>

int main () {

    int v[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int *p = v;
    printf("*p = %d\n", *p);
    printf("*(p+1) = %d\n", *(p+1));
    printf("*(p+7) = %d\n", *(p+7));
    printf("p[3] = %d\n", p[3]);
    printf("3[p] = %d\n", 3[p]);
    printf("(p+5) - p = %lld\n", p+5 -p);
    printf("sizeof(int) = %llu\n ",sizeof(int) );
    int suma = 0;
    printf("Recorrido forward: ");
    for (size_t i = 0; i<8; i++ ) {
        printf("%d ",*(p+i));
        suma = suma + *(p+i);
    }
    printf("\nSuma: %d \n", suma);
    p = &v[7];
    printf("Recorrido reverse: ");
    for (size_t i = 0; i<8; i++){
        printf("%d ", *(p-i));

    }
    p = v;
    printf("\n %lld \n", (char *)p);
    printf("%lld \n", (char *)(p+5));
    printf("%lld \n", (char *)(p+5) - (char *)p );
    return 0;
}