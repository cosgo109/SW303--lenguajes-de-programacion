#include <stdio.h>
void imprimir_binario(unsigned char n) {
    for (int i = 7; i >= 0; i--) {
    putchar((n >> i) & 1 ? '1' : '0');
    }
    putchar('\n');
}
int main(void) {
    unsigned char a = 0b11001010; // 202
    unsigned char b = 0b10110100; // 180
    printf("a = "); imprimir_binario(a);
    printf("b = "); imprimir_binario(b);
    printf("a & b = "); imprimir_binario(a & b); // AND
    printf("a | b = "); imprimir_binario(a | b); // OR
    printf("a ^ b = "); imprimir_binario(a ^ b); // XOR
    printf("~a = "); imprimir_binario(~a); // NOT
    printf("a << 2 = "); imprimir_binario(a << 2); // Desplazamiento izq.
    printf("a >> 2 = "); imprimir_binario(a >> 2); // Desplazamiento der.
    return 0;
}
