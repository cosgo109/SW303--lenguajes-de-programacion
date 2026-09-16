#include <stdio.h>
int main(void) {

 printf("C version: %ld\n", __STDC_VERSION__);
 printf("int: %zu bytes | long: %zu bytes | float: %zu | double: %zu\n",
 sizeof(int), sizeof(long), sizeof(float), sizeof(double));
 return 0; 
 
}