//
// Created by furfa on 21/6/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include "mibiblioteca.h"

lista *newlista() {
    lista * aux= malloc(sizeof(lista));
    aux->nodos=NULL;
    aux->tamanio=0;
    return aux;
}

nodo *newnodo(int namber) {
    nodo *  aux= malloc(sizeof(nodo));
    aux->sig=NULL;
    aux->numero=namber;
    return aux;
}

void encolar(lista *lista1, nodo *nodoAinsertar) {
    nodo * aux=lista1->nodos;
    if(aux==NULL)
    {
        lista1->nodos=nodoAinsertar;
    } else{
        for (; aux->sig!=NULL ; aux=aux->sig) {}
        aux->sig=nodoAinsertar;
    }
    lista1->tamanio++;
}

void imprimir(lista *cola) {
    nodo * aux=cola->nodos;
    for (;aux!=NULL;aux=aux->sig)
        printf("%d-",aux->numero);
    printf("\n");
}

lista *eliminar(lista *cola, int n) {
    lista * aux=newlista();
    nodo * auxi =cola->nodos;
    for (;auxi!=NULL ; auxi=auxi->sig) {
        if(auxi->numero!=n)
        {
            encolar(aux, newnodo(auxi->numero));
        }
    }
    liberar(cola);
    return aux;
}

void liberar(lista *cola) {
    nodo *aux = cola->nodos;
    if(aux!=NULL)
    {
        while (aux!=NULL)
        {
            nodo * sig=aux->sig;
            free(aux);
            aux=sig;
        }
        free(cola);
    }
}
