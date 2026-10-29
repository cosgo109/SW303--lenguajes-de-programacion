#include <stdio.h>
#include <stdlib.h>

int minimo(const int *v, int n, int *salida){
    if (v == NULL || n <= 1 || salida == NULL){
        *salida = 0;
        return 0;
    }
    int temp = (int)*v;
    *salida = temp;

    for (int i = 0; i < n; i++){
        if (v[i] < *salida){
            *salida = v[i];
        }
    }
    return 1;

}
int maximo(const int *v, int n, int *salida){
    if (v == NULL || n <= 1 || salida == NULL){
        *salida = 0;
        return 0;
    }
    *salida = 0;
    for (int i = 0; i < n; i++){
        if (v[i] > *salida){
            *salida = v[i];
        }
    }

    return 1;

}

long long suma(const int *v, int n, long long int *salida){
    if (v == NULL || n<=1 || salida == NULL){
        *salida = 0;
        return 0;
    }
    *salida = 0;
    for (int i = 0; i< n; i++){
        *salida += v[i];
    }
    return 1;
}

int promedio(const int *v, int n, double *salida){
    if (v == NULL || n<=1 || salida == NULL){
        *salida = 0;
        return 0;
    }

    int suma = 0;
    for(int i = 0; i < n; i++){
        suma += v[i];
    }

    *salida = (double )suma/n;
    return 1;
}

int main (){
    int n = 0;
    do{
        printf("Ingrese un numero entre 1 y 100: \n");
        scanf("%d",&n);
    }while(n<1 || n>100);

    int *arreglo = (int *)calloc(n,sizeof(int));

    for (int i = 0; i<n; i++){
        
        printf("Ingrese el numero entero en la posicion %d :\n", i);
        scanf("%d",&arreglo[i]);

    }
    int min, max;
    long long sum = 0;
    double prom;

    //VERIFICANDO CASO BORDE: SI TODOS LOS ELEMENTOS SON IGUALES
    int contador = 1;
    for (int i = 1; i<n; i++){
        if(arreglo[i-1] == arreglo[i]){
            contador++;
        }
    }
    if(contador == n && contador !=1){
        printf("CASO BORDE: Todos los elementos son iguales");
        return 0;
    }
    // FIN VERIFICACION
    
    minimo(arreglo,n,&min);
    maximo(arreglo,n,&max);
    suma(arreglo,n,&sum);
    promedio(arreglo,n,&prom);

    //VERIFICANDO CASO BORDE: n = 1
    if(n == 1){
        printf("CASO BORDE: n = 1\n");
    }
    //FIN VERIFICACION

    printf("Minimo: %d \n",min);
    printf("Maximo: %d \n",max);
    printf("Suma: %d \n", sum);
    printf("Promedio %.2f \n", prom);

    return 0;
}