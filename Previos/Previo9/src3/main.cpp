// Archivo main para el segundo ejemplo de como crear y usar un Makefile

#include "biblioteca.hpp"

int main() {
    Biblioteca biblioteca;  // Instancia de biblioteca

    // Se anaden dos libros a la biblioteca
    biblioteca.agregarLibro("El Gran Gatsby", "F. Scott Fitzgerald");
    biblioteca.agregarLibro("1984", "George Orwell");

    // Se muestran los libros de la biblioteca
    biblioteca.mostrarCatalogo();

    return 0;
}