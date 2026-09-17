#include <stdio.h>

int main(void) {

    unsigned int n;

    printf("Numero: ");

    if (scanf("%u", &n) != 1) return 1;

    printf("Binario : ");

    for (int i = 31; i >= 0; i--) {

        putchar((n >> i) & 1 ? '1' : '0');
        if (i % 4 == 0 && i) putchar(' ');

    }

    putchar('\n');

    unsigned int t = n;

    int unos = 0;

    while (t) { 
        t &= (t - 1); unos++; 
    }

    printf("Hex : 0x%08X\n", n);
    printf("Octal : 0%o\n", n);
    printf("Unos : %d\n", unos);
 return 0;
}