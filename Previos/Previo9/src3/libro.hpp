// Archivo de cabacera para declarar la clase Libro

#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>

class Libro {
    public:
        Libro(const std::string& titulo, const std::string& autor);
        void mostrarInfo() const;  // Metodo para mostrar informacion del libro

    private:
        std::string titulo;
        std::string autor;
};

#endif
