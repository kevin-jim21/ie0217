// En este archivo se encuentran todas las declaraciones de cada una de las funciones declaradas en Funciones.hpp

#include "Funciones.hpp"
#include <iostream>
#include <string>

// Esta enviando la referencia de un elemento de tipo libro putero
void agregarLibro(Libro* &lista){
    Libro* nuevoLibro = new Libro;  // Se reserva un espacio de memoria dinamica del tamano de struct

    /* Se utiliza getline para interpretar que no tomar solo la primera palabra, si no toda
    la linea que ingrese el usuario.*/
    std::cout << "Ingrese el titulo del libro: " << std::endl;
    std::cin.ignore();  // Esta linea limpia la entrada antes de comenzar el programa
    std::getline(std::cin, nuevoLibro->titulo);
    
    std::cout << "Ingrese el autor del libro: " << std::endl;
    std::getline(std::cin, nuevoLibro->autor);

    std::cout << "Ingrese el genero del libro: " << std::endl;
    std::getline(std::cin, nuevoLibro->genero);
    
    nuevoLibro->siguiente = lista;

    lista = nuevoLibro;

    std::cout << "Libro agregado correctamente " << std::endl;
}

void mostrarLibros(Libro* lista) {
    if (lista == nullptr) {
        std::cout << "La liberia no tiene libros. " << std::endl;
        return;
    }

    std::cout << "Lista de libros: " << std::endl;
    while(lista != nullptr) {
        std::cout << "Titulo: " << lista->titulo << std::endl;
        std::cout << "Autor: " << lista->autor << std::endl;
        std::cout << "Genero: " << lista->genero << std::endl << std::endl;  // Se ponen dos endl para generar otro salto de linea
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
