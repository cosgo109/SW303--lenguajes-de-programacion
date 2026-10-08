a) ¿Por qué printf("%p", p) requiere el cast (void *)? 
Es por portabilidad y por las reglas de variadic functions.

b) ¿Qué diferencia hay entre int *p e int* p? ¿Y entre int *p, q y int *p, *q?
int *p e int* p son lo mismo cuando se usa para una variable, para más variables int* p, q, r declarara 
todas las variables como punteros, int *p, q crea la primera variable como un puntero y la segunda 
como un int común, en cambio, int *p, *q crea ambas variables como punteros.
