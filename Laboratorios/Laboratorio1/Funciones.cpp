// Definir las funciones que se van a utilizar en el main

// Es necesario incluir las declaraciones de las funciones hechas en Funciones.hpp
#include "Funciones.hpp"

void agregarContacto(Contacto listaContactos[], int &numContactos) {
    Contacto nuevoContacto;

    // Ingresar el nombre del contacto en la estructura
    std::cout << "Ingrese el nombre del contacto ";
    std::cin >> nuevoContacto.nombre;

    // Ingresar el telefono del contacto en la estructura
    std::cout << "Ingrese el numero de telefono ";
    std::cin >> nuevoContacto.telefono;

    // Anadir el contacto a la lista de contactos
    listaContactos[numContactos++] = nuevoContacto;
}

void mostrarContactos(const Contacto listaContactos[], int numContactos) {
    std::cout << "Lista de contactos:\n";

    // Bucle para mostrar cada uno de los contactos que esta en la estructura
    for (int i = 0; i < numContactos; ++i) {
        std::cout << "Nombre: " << listaContactos[i].nombre << ", Telefono: " << listaContactos[i].telefono << "\n";
    }
}

void buscarContacto(const Contacto listaContactos[], int numContactos) {

    // Se declara "nombreBusqueda" para almacenar el nombre que desea encontrar el usuario
    std::string nombreBusqueda;
    std::cout << "Ingrese el nombre a buscar: ";
    std::cin >> nombreBusqueda;

    // Esta variable cambiara a true cuando se encuentre el contacto
    bool encontrado = false;

    /* Buscar en la estructura si existe algun nombre de contacto que coincida con el nombre
    por el que pregunta el usuario.*/
    for (int i = 0; i < numContactos; i++) {

        // Si el nombre esta en la lista de contactos, se imprime el nombre y el numero
        if (listaContactos[i].nombre == nombreBusqueda) {
            std::cout << "Nombre: " << listaContactos[i].nombre << ", Telefono: " << listaContactos[i].telefono << "\n";
            encontrado = true;
            break;
        }
    }

    // Si encontrado sigue siendo falso despues de recorrer toda la lista, mostrar mensaje de no encontrado
    if (!encontrado) {
        std::cout << "Contacto no encontrado.\n";
    }
}