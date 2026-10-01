1. Predecir la salida de cada uno.
Programa A: global contador = 0
Programa B: global contador = 3


2. Compilar y verificar. ¿Sorpresa?
Programa A: local contador = 1
            local contador = 1
            local contador = 1
            global contador = 0

Programa B: global contador = 3

3. Refactorizar para eliminar la variable global: pasar el contador por parámetro y retornar el nuevo valor:
int incrementar(int contador) { return contador + 1; }
(En el código)


4. Discusión: ¿Por qué las variables globales son una mala práctica en Ingeniería de Software? Mencionar al menos
tres razones (acoplamiento, dificultad de testeo, condiciones de carrera en concurrencia).
Porque este puede causar errores de encapsulamiento, dificulta el testeo pues estas son dificiles de aislar y 
por último, esta puede ocasionar problemas de memoria y comportamientos no deterministas

