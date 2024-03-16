// Ejemplo de uso del extern funcion main presentacion pag 31

#include <iostream>

// Declarar variable global count
int count;

// Se hace referencia a la funcion write_extern() en el archivo write_extern.cpp
extern void write_extern();

main() {
    count = 5;
    write_extern();
}
