// Archivo main del programa "Biblioteca" de la sesion 7

#include "Libro.hpp"

class Biblioteca {
private:
    std::vector<Libro> libros;

public:
    void agregarLibro(const Libro& libro) {
        libros.push_back(libro);
    }

    void mostrarLibros() {
        for (const auto& libro : libros) {
            std::cout << libro.titulo << ", " << libro.autor << ", " << libro.anioPublicacion << std::endl;
        }
    }

    void ordenarLibrosPorAnio() {
        std::sort(libros.begin(), libros.end());
    }

    std::vector<Libro>::iterator buscarLibroPorTitulo(const std::string& titulo) {
        return std::find_if(libros.begin(), libros.end(), [&titulo](const Libro& l) {
            return l.titulo == titulo;
        });
    }

    std::vector<Libro>::iterator end() {
        return libros.end();
    }
};

int main() {
    Biblioteca miBiblioteca;
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949});
    miBiblioteca.agregarLibro({"El señor de los anillos", "J.R.R. Tolkien", 1954});

    miBiblioteca.ordenarLibrosPorAnio();
    miBiblioteca.mostrarLibros();

    auto libro = miBiblioteca.buscarLibroPorTitulo("1984");
    if (libro != miBiblioteca.end()) {
        std::cout << "Libro encontrado: " << libro->titulo << std::endl;
    } else {
        std::cout << "Libro no encontrado." << std::endl;
    }

    return 0;
}
