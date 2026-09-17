#include <stdio.h>

int main (){

    int n = 5;

    printf("5 << 1 = %d (= 5*2)\n", n << 1);

    printf("5 << 3 = %d (= 5*8)\n", n << 3);

    printf("40 >> 3 = %d (= 40/8)\n", 40 >> 3);

#define BIT(n) (1u << (n))
unsigned char flags = 0;
flags |= BIT(2); // encender bit 2
flags |= BIT(5); // encender bit 5
printf("flags = 0x%02X\n", flags);
printf("bit 2 encendido? %d\n", (flags & BIT(2)) != 0);
printf("bit 3 encendido? %d\n", (flags & BIT(3)) != 0);
// 3. Apagar un bit
flags &= ~BIT(2);
printf("tras apagar bit 2: 0x%02X\n", flags);
// 4. Alternar (toggle) un bit
flags ^= BIT(5);
printf("tras toggle bit 5: 0x%02X\n", flags);
// 5. Intercambiar dos enteros sin variable auxiliar (XOR swap)
int x = 13, y = 27;
x ^= y; y ^= x; x ^= y;
printf("x=%d, y=%d\n", x, y);

return 0;
}
