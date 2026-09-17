#include <stdio.h>

#include <ctype.h>

int main(void) {
 
    char linea[256];
 
    printf("Ingrese una linea: ");
 
    if (!fgets(linea, sizeof(linea), stdin)) return 1;
 
    int vocales = 0, consonantes = 0, digitos = 0, espacios = 0;
 
    for (int i = 0; linea[i] != '\0'; i++) {
        char c = linea[i];
        
        if (c == '\n') continue;
        
        if (isspace((unsigned char)c)) espacios++;
        
        else if (isdigit((unsigned char)c)) digitos++;
        
        else if (isalpha((unsigned char)c)) {
            
            char l = tolower((unsigned char)c);
            
            if (l=='a'||l=='e'||l=='i'||l=='o'||l=='u') vocales++;
            
            else consonantes++;
        }
    }

    printf("\n%-12s | %5s\n", "CATEGORIA", "TOTAL");
    printf("------------+------\n");
    printf("%-12s | %5d\n", "Vocales", vocales);
    printf("%-12s | %5d\n", "Consonantes", consonantes);
    printf("%-12s | %5d\n", "Digitos", digitos);
    printf("%-12s | %5d\n", "Espacios", espacios);
    return 0;
}
