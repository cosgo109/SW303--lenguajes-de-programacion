1.- ¿Qué contiene el .h y qué no debe contener?
El .h contiene los prototipos de las funciones y este no debe incluir las deficiones de estas


2. ¿Por qué el .h no debe tener definiciones de funciones (salvo static inline en casos avanzados)?
Esto podría ocasionar error por múltiples definiciones, pues puede que definamos una funciona en el .h y definamos
la misma en un .c, por otro lado, C no tiene problemea con "static inline", pues este tiene una manera para manejar
la duplicidad sin causar errores.


3. ¿Para qué sirven las directivas (#ifndef/#define/#endif)? Probar incluir el mismo .h dos veces en main.c y ver qué pasa con y sin guardas.
"#ifned" significa "if not defined" y sirve para abrir un bloque en caso falte definir una palabra clave, #define se usa
para la definicion de palabras claves y "endif" se usa para cerrar el bloque generado por #ifndef.


4. ¿Por qué main.c solo necesita incluir raiz_digital.h y no raiz_digital.c?
Por qué estos son enlazados en un proceso posterior llamado linkedin, al compilar main.c y raiz_digital.h, estos
crean el archivo main.o y a la par se crea el archivo raiz_digital.o (de la compilacion de raiz_digital.c).
Una vez llegado a este punto se realiza el proceso final en el cual el archivo logra reconocer las definiciones 
de las funciones contenidas en raiz_digital.o .