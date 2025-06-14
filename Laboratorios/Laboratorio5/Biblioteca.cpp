// En este archivo se definen los metodos de la clase Biblioteca

#include "Biblioteca.hpp"

void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);  // Agregar libro instanciado al contenedor
}

void Biblioteca::mostrarLibros() {
    std::cout << "BIENVENIDO A LA BIBLIOTECA \"SU LIBRITO\"" << std::endl << std::endl;
    std::cout << "Lista de libros disponibles en esta biblioteca: " << std::endl << std::endl;

    // Mostrar todos los libros presentes en el contenedor libro
    for (const auto& libro : libros) {
        std::cout << libro.titulo << ", " << libro.autor << ", " << libro.anioPublicacion << std::endl;
    }
}

void Biblioteca::ordenarLibrosPorAnio() {
    std::sort(libros.begin(), libros.end());  // Metodo de STL para ordenar un contenedor
}

std::vector<Libro>::iterator Biblioteca::buscarLibroPorTitulo(const std::string& titulo) {
    return std::find_if(libros.begin(), libros.end(), [&titulo](const Libro& l) {
        return l.titulo == titulo;
    });
}

std::vector<Libro>::iterator Biblioteca::end() {
    return libros.end();
}
