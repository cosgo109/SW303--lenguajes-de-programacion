#include <stdio.h>

int main(void) {
 
    int i = 3;
 
    double d = i / 2.0;

    printf("i / 2.0 = %.2f\n", d);
    
double pi = 3.14159;
 int entero = pi; 
printf("pi -> int: %d\n", entero);
 // Casting +
printf("(int)3.99 = %d\n", (int)3.99);
printf("(double)3/2 = %.2f\n", (double)3 / 2);

unsigned int u = 1;
int neg = -1;
    if (neg > u) {
printf("Inesperado\n");
} else {
printf("neg > u es falso (conversion implicita a unsigned)\n");

}
  return 0;
}