// Archivo en el que se declara el metodo de tipo operador de la clase Libro

#include "Libro.hpp"

// Constructor de la clase libro
Libro::Libro(std::string t, std::string a, int anio) : titulo(t), autor(a), anioPublicacion(anio) {}

bool Libro::operator<(const Libro& l) const {
    return anioPublicacion < l.anioPublicacion;
}

