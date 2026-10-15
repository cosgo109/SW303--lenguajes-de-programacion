#include <stdio.h>

int mcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mcd(b, a % b);
}

static int es_primo(int n){

    int contador = 0;
    for (int i = 1; i<=n; i++){
    
        if(n%i == 0){
        contador ++;
        }
    }
    if (contador == 2){
        return 1;
    } else return 0;
}

void simplificar(int *num, int *den){
    if (es_primo(*num) == 1 && es_primo(*den) == 1 ){
        return;
    }
    *num = *num / mcd(*num, *den);
    *den = *den / mcd(*num, *den);

}

void sumar (int n1, int d1, int n2, int d2, int *n_res, int *d_res){
    *n_res = n1*d2 + n2*d1;
    *d_res = d1*d2;

    simplificar(n_res, d_res);
}