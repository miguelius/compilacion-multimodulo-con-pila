# Severla

Programa en C que recibe una lista de palabras por argumento y la imprime invertida.

Si bien este programa se puede escribir sin usar una pila, la idea es que veamos las características de C de modularizar nuestros programas.

- pila.h -> interfaz de la pila
- pila.c -> módulo de pila usando un vector
- lic-clasico.c -> programa que reconoce el lenguaje generado por las producciones S -> aSb | ab.
- severla.c -> programa
- Makefile -> script para compilar todo rapidito.

## Compilación manual

```bash
gcc severla.c pila.c
```

La salida será el archivo a.out. 

```bash
./a.out hola mundo
```

## Compilación usando Makefiles

```bash
make
```

La salida será el archivo severla (severla.exe en windows)

```bash
./severla hola mundo
```
## Haciendo cosas raras para gente normal

Si queremos ver la salida del preprocesador:

```bash
gcc -E pila.c
```

Si queremos ver la salida de nuestro código en Assembler:

```bash
gcc -S pila.c
```

