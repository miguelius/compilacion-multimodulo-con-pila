#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"

int es_palabra(const char *palabra) {
    size_t longitud_maxima = strlen(palabra);
    t_pila *pila = CrearPila(longitud_maxima); /* defino una pila lo suficientemente grande */

    for (int i = 0; i < longitud_maxima; ++i) {
        switch(palabra[i]) {
            case 'a':
                Apilar(pila, "R");
                break;
            case 'b':
                if (!PilaVacia(pila)) {
                    Desapilar(pila);
                } else {
                    return 0; /* más bs que as */
                }
                break;
            default:
                /* vino un simbolo que no pertenece al alfabeto { a, b } */
                return 0; 
        }
    }

    int quedo_vacia = PilaVacia(pila);
    LiberarPila(pila);

    return quedo_vacia;
}

void imprimir_uso() {
    puts("uso: ./lic-clasico cadena1 cadena2 .. cadenan");
    puts("");
    puts("\tImprime las cadenas que son palabra de S -> aSb | ab.");
    puts("");    
}

int main(int argc, char **argv) {
    if (argc == 1) {
        imprimir_uso();
        return EXIT_SUCCESS;
    }
   
    for (int i = 1; i < argc; ++i) {
        if (es_palabra(argv[i]))
            puts(argv[i]);      
    }

    return 0;
}
