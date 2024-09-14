#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main(int argc, char **argv) {
    if (argc == 1) {
        puts("uso: ./severla secuencia de palabras a invertir");
        return EXIT_SUCCESS;
    }

    t_pila *pila = CrearPila(argc); /* defino una pila lo suficientemente grande */
    
    for (int i = 1; i < argc; ++i) {
        Apilar(pila, argv[i]);      /* apilo cada elemento del vector */
    }

    while (!PilaVacia(pila)) {
        puts((const char *)Desapilar(pila)); /* desapilo e imprimo */
    }

    LiberarPila(pila);              /* libero los recursos tomados por la pila */

    return EXIT_SUCCESS;
}
