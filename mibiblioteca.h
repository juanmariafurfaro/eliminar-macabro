//
// Created by furfa on 21/6/2022.
//

#ifndef INC_1_21_JUANMARIAFURFARO_MIBIBLIOTECA_H
#define INC_1_21_JUANMARIAFURFARO_MIBIBLIOTECA_H
typedef struct Nodo{
    int numero;
    struct Nodo * sig;
}nodo;
typedef struct Lista{
    int tamanio;
    nodo * nodos;
}lista;
lista * newlista();
nodo * newnodo(int namber);
void encolar(lista * lista1, nodo* nodoAinsertar);
void imprimir(lista * cola);
lista * eliminar(lista * cola, int n);
void liberar(lista * cola);
#endif //INC_1_21_JUANMARIAFURFARO_MIBIBLIOTECA_H
