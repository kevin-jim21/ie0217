// En este archivo se utiliza el manejo manual de memoria al realizar una lista entrelazada

#include <iostream>
#include <string>
#include "Libro.hpp"

using namespace std;

enum opciones {
    AGREGAR_LIBRO = 1,
    MOSTRAR_LIBROS = 2,
    SALIR = 3,
    OPCIONES_MAX
};

/* Esta estructura tiene 3 muembros generalmente. El cuarto miembro es un puntero que contendra
la direccion de memoria de otra estructura que es igual a ella misma.*/

// Esta enviando la referencia de un elemento de tipo libro putero
void agregarLibro(Libro* &lista){
    Libro* nuevoLibro = new Libro;  // Se reserva un espacio de memoria dinamica del tamano de struct

    /* Se utiliza getline para interpretar que no tomar solo la primera palabra, si no toda
    la linea que ingrese el usuario.*/
    cout << "Ingrese el titulo del libro: " << endl;
    cin.ignore();  // Esta linea limpia la entrada antes de comenzar el programa
    getline(cin, nuevoLibro->titulo);
    
    cout << "Ingrese el autor del libro: " << endl;
    getline(cin, nuevoLibro->autor);

    cout << "Ingrese el genero del libro: " << endl;
    getline(cin, nuevoLibro->genero);
    
    nuevoLibro->siguiente = lista;

    lista = nuevoLibro;

    cout << "Libro agregado correctamente " << endl;
}

void mostrarLibros(Libro* lista) {
    if (lista == nullptr) {
        cout << "La liberia no tiene libros. " << endl;
        return;
    }

    cout << "Lista de libros: " << endl;
    while(lista != nullptr) {
        cout << "Titulo: " << lista->titulo << endl;
        cout << "Autor: " << lista->autor << endl;
        cout << "Genero: " << lista->genero << endl << endl;  // Se ponen dos endl para generar otro salto de linea
        lista = lista->siguiente;
    } 
}

// Ahora cambia lista al siguiente elemento y borra el elemento actual (Lista entrelazada)
void liberarMemoria(Libro* &lista){
    while(lista != nullptr){
        Libro* temp = lista;
        lista = lista->siguiente;
        delete temp;
    }
}

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
