#ifndef RAIZ_DIGITAL_H
#define RAIZ_DIGITAL_H
/*
* raiz_digital.h
* Modulo de calculo de raiz digital de un entero posit
ivo. Sin arreglos, sin punteros.
*/
/**
* @brief Suma los digitos de n (en base 10).
* @param n Entero no negativo.
* @return Suma de sus digitos.
*/
int suma_digitos(int n);
/**
* @brief Calcula la raiz digital de n aplicando suma_d
igitos iterativamente.
* @param n Entero no negativo.
* @return Digito entre 0 y 9.
*/
int raiz_digital(int n);
/**
* @brief Imprime la traza del colapso de n por stdout.
* @param n Entero no negativo.
*/
void imprimir_traza(int n);
#endif /* RAIZ_DIGITAL_H */