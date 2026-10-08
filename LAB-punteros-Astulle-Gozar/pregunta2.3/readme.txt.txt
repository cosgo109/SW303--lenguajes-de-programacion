Apellidos: Astulle-Gozar
a) ¿Cuál es la diferencia entre char *s = "..." y char s[] = "..." en términos de memoria?
El primero guarda la cadena introducida de forma que no se puede modificar, por lo que el puntero lo único que puede hacer es apuntar pero no acceder a lo guardado. El segundo copia la cadena y lo guarda en el arreglo.
b)  ¿Por qué intentar modificar un literal de cadena es comportamiento no definido?
El espacio de memoria que se quiere modificar con el puntero está protegido, no es accesible.
c) ¿Cuándo conviene cada declaración?
Si la cadena que se introduce no se debe modificar, usar los punteros es lo ideal, pero si la cadena será cambiada los arreglos son la opción indicada.