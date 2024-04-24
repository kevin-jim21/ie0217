// En este archivo se define la clase Biblioteca, necesaria para el programa "Biblioteca"

#ifndef  BIBLIOTECA_HPP
#define  BIBLIOTECA_HPP

#include "Libro.hpp"

class Biblioteca {
private:
    std::vector<Libro> libros;

public:
    void agregarLibro(const Libro& libro);
    void mostrarLibros();
    void ordenarLibrosPorAnio();
    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo);
    std::vector<Libro>::iterator end();
};

#endif  // BIBLIOTECA_HPP