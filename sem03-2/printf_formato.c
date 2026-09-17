#include <stdio.h>

int main(void) {

    printf("|%d|\n", 42);
    printf("|%5d|\n", 42); 
    printf("|%-5d|\n", 42); 
    printf("|%05d|\n", 42); 
    printf("|%+d|\n", 42); 
    printf("|%8.3f|\n", 3.14159);
    printf("|%-10.2f|\n", 2.5);
    printf("|%x|%X|%o|\n", 255, 255, 255); 
    printf("|%e|\n", 1234.5678);
    printf("|%c|%s|\n", 'A', "Hola");


    long l = 1234567890L;

    printf("%ld\n", l);

    size_t s = sizeof(int);

    printf("%zu\n", s);


    printf("100%%\n");

    return 0;
}
