/* Archivo main del programa "Biblioteca", cuya funcion o objetivo principal es que
el usuario pueda buscar libros en esta solamente ingresando el titulo del libro*/

#include "Biblioteca.hpp"

int main() {
    Biblioteca miBiblioteca;
    std::string libroBuscado;
    char opcion;

    // Agregar libros a la biblioteca
    miBiblioteca.agregarLibro({"Cien años de soledad", "Gabriel García Márquez", 1967});
    miBiblioteca.agregarLibro({"1984", "George Orwell", 1949});
    miBiblioteca.agregarLibro({"El señor de los anillos", "J.R.R. Tolkien", 1954});
    miBiblioteca.agregarLibro({"El alquimista", "Paulo Coelho", 1984});
    miBiblioteca.agregarLibro({"El principito", "Antoine de Saint-Exupéry", 1943});
    miBiblioteca.agregarLibro({"Rayuela", "Julio Cortázar", 1963});
    miBiblioteca.agregarLibro({"Diario de Ana Frank", "Ana Frank", 1947});

    // Ordenar los libros y desplegar una lista para el usuario
    miBiblioteca.ordenarLibrosPorAnio();
    miBiblioteca.mostrarLibros();

    // Buscar libro por medio del titulo
    do {
        std::cout << "\nSISTEMA DE BÚSQUEDA: " << std::endl;
        std::cout << "Ingrese el nombre del libro que desea buscar en esta biblioteca: " << std::endl;
        std::getline(std::cin, libroBuscado);

        // Buscar el libro que ingreso el usuario mediante metodo de la clase Biblioteca
        auto libro = miBiblioteca.buscarLibroPorTitulo(libroBuscado);
        if (libro != miBiblioteca.end()) {
            std::cout << "Libro encontrado: " << libro->titulo << std::endl << std::endl;
        } else {
            std::cout << "Libro no encontrado." << std::endl << std::endl ;
        }

        // Dar opcion al usuario para buscar otro libros
        std::cout << "¿Desea buscar otro libro? (Favor ingrese 1 si desea realizar otra búsqueda, o ingrese cualquier otro carácter de no ser así)." << std::endl;
        std::cin >> opcion;

        std::cin.ignore();  // Limpiar entrada
    } while (opcion == '1');

    return 0;
}
