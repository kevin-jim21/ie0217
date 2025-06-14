// En este archivo se declara la clase Libro, necesaria para el programa "Biblioteca"

#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


/* Esta es la clase mediante la cual se van a crear todos los libros de la biblioteca*/
class Libro {
public:
    std::string titulo;
    std::string autor;
    int anioPublicacion;

    Libro(std::string t, std::string a, int anio);  // Para ingresar un libro, se necesita especificar su titulo, autor y anio

    bool operator<(const Libro& l) const;  // Compara libros por los anios de publicacion, necesario para el metodo ordenarLibrosPorAnio de Biblioteca
};

#endif  // LIBRO_HPP
