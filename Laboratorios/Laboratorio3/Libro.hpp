// Declaracion de la struct Libro

#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>

/* Esta estructura tiene 3 muembros generalmente. El cuarto miembro es un puntero que contendra
la direccion de memoria de otra estructura que es igual a ella misma.*/

// Creacion de una estructura
struct Libro {
    std::string titulo;
    std::string autor;
    std::string genero;
    Libro* siguiente;
};

#endif  // LIBRO_HPP
