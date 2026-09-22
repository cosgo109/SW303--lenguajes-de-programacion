#include<stdio.h>

int main (void){
    int mes;
    mes=8;

    switch(mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10: 
        case 12: printf("Tiene 31\n");break;

        case 4:
        case 6:
        case 9:
        case 11: printf("Tiene 30\n");break;
        case 2: printf("Tiene 28\n");break;
    }



    return 0;
}