// En este programa se aplica el manejo manual de memoria al realizar una lista entrelazada

#include <iostream>
#include <string>
#include "Libro.hpp"
#include "Funciones.hpp"

using namespace std;

enum opciones {
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBROS = 2,
    SALIR = 3,
    OPCIONES_MAX
};

int main() {
    Libro* listaLibros = nullptr;
    int opcion;

    do{
        cout << "Selecciona su opcion" << endl;
        cout << "1. Agregar un libro" << endl;
        cout << "2. Mostrar todos los libros" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        switch(opcion) {
            case AGREGAR_LIBRO:
                agregarLibro(listaLibros);
                break;
            case MOSTRAR_LIBROS:
                mostrarLibros(listaLibros);
            case SALIR:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no permitida." << endl;
                break;
        }

    } while (opcion!= SALIR) ;

    liberarMemoria(listaLibros);  // IMPORTANTE: Liberar memoria antes de finalizar el programaS

    return 0;
}
