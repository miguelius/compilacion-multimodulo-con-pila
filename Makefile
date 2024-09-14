all: lic-clasico severla

severla: severla.c pila.h pila.o
	gcc -o severla severla.c pila.o -g

pila.o: pila.h pila.c
	gcc -c pila.c -g

lic-clasico: lic-clasico.c pila.h pila.o
	gcc -o lic-clasico lic-clasico.c pila.o -g

clean:
	rm -rf *.o *.s severla lic-clasico a.out 
