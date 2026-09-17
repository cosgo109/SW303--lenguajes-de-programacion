#include <stdio.h>
int main(void) {
int i = 5, j;
    j = i++; printf("j = i++ -> i=%d, j=%d\n", i, j); 
    i = 5;
    j = ++i; printf("j = ++i -> i=%d, j=%d\n", i, j); 

    i = 5;
    int k = i++ + i++; 
    printf("i++ + i++ = %d (comportamiento NO especificado)\n", k);
    return 0;
}