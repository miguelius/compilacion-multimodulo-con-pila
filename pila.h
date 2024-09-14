#ifndef __PILA_H__
#define __PILA_H__
#include <stddef.h>

typedef void* t_elemento;
typedef struct pila t_pila;

t_pila *CrearPila(size_t);

void LiberarPila(t_pila *);

int Apilar(t_pila *, t_elemento);

t_elemento Desapilar(t_pila *);

int PilaVacia(t_pila *);

#endif
