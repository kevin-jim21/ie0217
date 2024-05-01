// Archivo de codigo fuente en donde se definen los metodos de la clase biblioteca

#include <iostream>
#include "biblioteca.hpp"

// Definicion de agregarLibro()
void Biblioteca::agregarLibro(
    const std::string& titulo,
    const std::string& autor
) {
    catalogo.emplace_back(titulo, autor);
}

// Definicion de mostrarCatalogo()
void Biblioteca::mostrarCatalogo() {
    for (const auto& libro : catalogo) {
        libro.mostrarInfo();
    }
}
