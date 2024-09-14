#include <stdlib.h>
#include <assert.h>
#include "pila.h"

struct pila {
    t_elemento *base;
    t_elemento *tope;
    size_t quedan;
};

t_pila *CrearPila(size_t tamanio) {
    t_pila *la_pila = malloc(sizeof(struct pila));
    la_pila->quedan = tamanio + 1;
    la_pila->base = malloc(sizeof(t_elemento)*(tamanio + 1));
    la_pila->tope = la_pila->base;
    *la_pila->base = "$";
    return la_pila;
}

void LiberarPila(t_pila *la_pila) {
    free(la_pila->base);
    free(la_pila);
}

int Apilar(t_pila *pila, t_elemento cosa) {
    pila->tope++;
    pila->quedan--;
    assert(pila->quedan > 0);
    *(pila->tope) = cosa;    
}

t_elemento Desapilar(t_pila *pila) {
    t_elemento aux = *pila->tope;
    assert(pila->tope > pila->base);
    pila->tope--;
    pila->quedan++;
    return aux;
}

int PilaVacia(t_pila *pila) {
    return pila->base == pila->tope;
}

