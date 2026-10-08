a)¿Cómo se relaciona datos[i] con *(datos + i)? Probar ambas formas y
confirmar que dan el mismo resultado.
Ambas expresiones significan lo mismo, su relación es en base a los punteros y a la definicion
del operador index ( [] ).

b)¿Qué pasa si imprimen sizeof(datos) / sizeof(datos[0])? ¿Y si datos fuera un parámetro de función?
Si se hace lo primero, entonces obtendriamos como resultado el tamaño del arreglo, y si datos fuera 
un parámetro de una función, esta se degradaría a un puntero.