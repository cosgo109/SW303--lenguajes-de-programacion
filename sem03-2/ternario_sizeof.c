#include <stdio.h>
int main(void) {
    int a = 10, b = 20;
    int max = (a > b) ? a : b;
    printf("max = %d\n", max);

 int nota = 75;
 const char *cat = (nota >= 90) ? "A" :
 (nota >= 80) ? "B" :
 (nota >= 70) ? "C" : "D";
 printf("Categoria: %s\n", cat);

 printf("sizeof(char) = %zu\n", sizeof(char));
 printf("sizeof(int) = %zu\n", sizeof(int));
 printf("sizeof(a) = %zu\n", sizeof(a));
     printf("sizeof(a + 1.0)= %zu\n", sizeof(a + 1.0));
 printf("sizeof(int[10])= %zu\n", sizeof(int[10]));

 int arr[] = {1, 2, 3, 4, 5};
 printf("Elementos del arreglo: %zu\n", sizeof(arr) / sizeof(arr[0]));
 return 0;
}
