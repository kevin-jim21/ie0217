#ifndef LIBRO_HPP
#define LIBRO_HPP

// Creacion de una estructura
struct Libro {
    std::string titulo;
    std::string autor;
    std::string genero;
    Libro* siguiente;
};

#endif  // LIBRO_HPP