#include <stdio.h>
int main () {
    char *c="Hola, mundo";
    char s2[]="Hola, mundo";
    
    int cont=0;
    *c='h';
    while (*c != '\0') {
        putchar(*c);
        c++;
        cont++;
    }
    printf("\ncontador: %d\n\n",cont);
    int i=0;
    cont=0;
    s2[0]='h';
    while (s2[i]!='\0') {
        putchar(s2[i]);
        cont++;
        i++;
    }
    
    printf("\ncontador: %d\n",cont);
    
    return 0;
}