// Archivo de codigo fuente en donde se define el metodo mostrarInfo()

#include <iostream>
#include "libro.hpp"

Libro::Libro(
    const std::string& titulo, const std::string& autor
) : titulo(titulo), autor(autor) {}

// Declaracion del metodo mostrarInfo()
void Libro::mostrarInfo() const {
    std::cout << "Título: " << titulo << ", Autor: " << autor << std::endl;
}
