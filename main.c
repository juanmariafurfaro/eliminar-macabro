#include <stdio.h>
#include "mibiblioteca.h"
int main() {
    lista * colacircular=newlista();
    lista *colareducida=newlista();
    encolar(colacircular, newnodo(3));
    encolar(colacircular, newnodo(6));
    encolar(colacircular, newnodo(8));
    encolar(colacircular, newnodo(2));
    encolar(colacircular, newnodo(200));
    printf("La maravillosa cola circular\n");
    imprimir(colacircular);
    printf("Cola sin un elemento\n");
    colareducida= eliminar(colacircular,200);
    imprimir(colareducida);
    return 0;
}
