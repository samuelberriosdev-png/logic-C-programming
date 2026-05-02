#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct nodo 
{
    int dato;
    struct nodo *next;
}Nodo;

int main(void)
{

    Nodo *head = (Nodo*)malloc(sizeof(Nodo));
    Nodo *segundo = (Nodo*)malloc(sizeof(Nodo));
    Nodo *tercero = (Nodo*)malloc(sizeof(Nodo));

    head->dato = 30;
    head->next = segundo;

    segundo->dato = 40;
    segundo->next = tercero;

    tercero->dato = 50;
    tercero->next = NULL;

    printf("the date for next is: %d\n", head->next->dato);

    free(head);
    free(segundo);
    free(tercero);

    return 0;
}