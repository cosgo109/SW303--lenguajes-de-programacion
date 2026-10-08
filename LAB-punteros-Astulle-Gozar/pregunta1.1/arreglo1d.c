#include <stdio.h>

int main () {

    int datos[10];
    int suma = 0;
    int maximo = 0, maxind = 0; 
    int pares = 0, impares = 0;
    for(size_t f = 0; f < 10; f++){
        printf("Escriba el valor %lld: \n", f);
        scanf("%d",&*(datos+f));

        if(datos[f] % 2 == 0){
            pares++;
        } else impares++;
    }
    int minimo = datos[0], minind = 0;
    int original[10]; 
    for(size_t f = 0; f < 10; f++) {
        original[f] = datos[f];

        suma = suma + datos[f];

        if(datos[f] > maximo) {
            maximo = datos[f];
            maxind = f;
        }
        if (datos[f] < minimo){
            minimo = datos[f];
            minind = f;
        }
    }
    double promedio = suma/10.0;
    int temp;

    for (size_t f = 0; f < 5; f++){
        temp = datos[f];
        datos[f] = datos[9-f];
        datos[9-f] = temp;
    }
    printf("Suma: %d\n", suma);
    printf("Promedio: %f\n",promedio);
    printf("Maximo: %d (indice %d)\n",maximo, maxind);
    printf("Minimo: %d (indice %d)\n ",minimo, minind);
    printf("Numeros pares: %d y Numeros impares: %d\n", pares, impares);
    printf("Arreglo original: ");
    for (size_t f = 0; f < 10; f++){
        printf("%d ", original[f]);
    }
    printf("\nArreglo invertido: ");
    for (size_t f = 0; f < 10; f++){
        printf("%d ", datos[f]);
    }
    printf("\n");

    printf("%lld\n", sizeof(datos));
    printf("%lld", sizeof(datos[0]));

    return 0;
}