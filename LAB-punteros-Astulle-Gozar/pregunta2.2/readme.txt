b) ¿Por qué p[i] es exactamente *(p + i)? ¿Qué dice el estándar C al respecto?
Esto se debe a la forma en la que el estandar define el operador de indexación de arreglos
como una operación matemática de punteros.

c) ¿Por qué 3[p] compila? Explicar la conmutatividad de + y la definición de [].
Esto se explica gracias a la definición de [] y a la conmutatividad de la suma, pues [] esta definido
como una suma de punteros ( p[3] = *(p+3) ), entonces gracias a la conmutatividad de la suma 
podemos reescribir esto a 3[p] (3[p] = *(3 + p ) = *(p + 3) = p[3] )

d) Trampa: ¿qué pasa con p + 8 (uno más allá del último elemento)? ¿Es válido crearlo? 
¿Se puede desreferenciar?
La creación de este es valido, pero al intentar referenciarlo se provoca un comportamiento indefinido
