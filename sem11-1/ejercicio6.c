#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int valor;
    struct nodo *next;
};


int main(){
    //Definicion de la lista
    struct nodo *lista= NULL;
    struct nodo *head= NULL;
    struct nodo *aux = NULL;
    //primer elemento
    lista = (struct nodo *)malloc(sizeof(struct nodo));
    if(lista != NULL){
        lista->valor = 10;
        lista->next = NULL;
    }
    else {
        printf("No hay memoria");
        return 1;
    }

    //segundo elemento
    head = lista;
    head->next = malloc(sizeof(struct nodo));
    if(head->next != NULL){
        head = head->next;
        head -> valor = 100;
        head->next = NULL;
    }
    else {
        printf("No hay memoria");
        return 1;
    }

    //tercer elemento
    head->next = malloc(sizeof(struct nodo));
    if(head->next != NULL){
        head = head->next;
        head -> valor = 1000;
        head->next = NULL;
    }
    else {
        printf("No hay memoria");
        return 1;
    }

    //mostrar los valores
    head = lista; // apunta al inicio de la lista
    while(head != NULL){
        printf("Valor : %d\n", head->valor);
        aux = head;
        head = head->next;
        free(aux);
    }
    free(lista);
    free(head);

    return 0;
}