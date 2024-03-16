// Ejemplo de uso del extern definicion de la funcion presentacion pag 31

#include <iostream>

// Se hace referencia a la variable global "count" de main_extern.cpp
extern int count;

// Definicion de la funcion write_extern
void write_extern(void) {
    std::cout << "Count is " << count << std::endl;
}