#include <stdio.h>
int main () {
    printf("Introduzca los elementos de la matriz: \n");
    int m[3][4];
    for (int i=0;i<3;i++) {
        for (int j=0;j<4;j++) {
            scanf("%d",&m[i][j]);
        }
    }
    
    
    int suma_total=0;
    for (int i=0;i<3;i++) {
        int suma_fila=0;
        for (int j=0;j<4;j++) {       
            suma_fila=suma_fila+m[i][j];
            printf("%4d ",m[i][j]);
        }
        suma_total=suma_total+suma_fila;
        printf("| suma fila = %d",suma_fila);
        printf("\n");
    }
    printf("-------------------\n");
    
    for (int j=0;j<4;j++) {
        int suma_columna=0;
        for (int i=0;i<3;i++) {
            suma_columna=suma_columna+m[i][j];
        }
        printf("%4d ",suma_columna);
    }
    printf("(sumas de columnas)\n");
    printf("Suma total: %d\n",suma_total);
    
    int t[4][3];
    printf("Transpuesta 4x3: \n");
    for (int i=0;i<4;i++) {
        for (int j=0;j<3;j++) {
            t[i][j]=m[j][i];
            printf("%4d",t[i][j]);
        }
        printf("\n");
    }
    
    int escalar;
    printf("Escalar: ");
    scanf("%d",&escalar);
    for (int i=0;i<3;i++) {
        for (int j=0;j<4;j++) {
            printf("%4d",escalar*m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}