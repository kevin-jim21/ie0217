// En este archivo se define la clase Biblioteca, necesaria para el programa "Biblioteca"

#ifndef  BIBLIOTECA_HPP
#define  BIBLIOTECA_HPP

#include "Libro.hpp"

class Biblioteca {
private:
    std::vector<Libro> libros;  // Crear contenedor para almacenar libros

public:
    void agregarLibro(const Libro& libro);  // Metodo para agregar libro a la bilbioteca
    void mostrarLibros();  // Metodo para mostrar todos los libros de la biblioteca
    void ordenarLibrosPorAnio();  // Ordenar los libros de la biblioteca por anio de publicacion
    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo);  // Buscar un libro en la biblioteca por titulo
    std::vector<Libro>::iterator end();  // Iterador para buscar un libro en el contenedor
};

#endif  // BIBLIOTECA_HPP
