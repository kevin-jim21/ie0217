// Archivo main que consiste en una agenda donde el usuario puede guardar y buscar sus contactos

/* Es necesario incluir los archivos hpp para obtener las declaraciones de la estructura y las
funciones que se van utilizar.*/
#include <iostream>
#include "Contacto.hpp"
#include "Funciones.hpp"

// Definir un valor constante con define
#define MAX_CONTACTOS 100

// Crear enum para designar opciones
// Al inicializar con 1, los demas valores van a ser consecuentes
enum Opciones {
    AGREGAR = 1,
    MOSTRAR,
    BUSCAR,
    SALIR
};

int main() {
    Contacto listaContactos[MAX_CONTACTOS];

    int numContactos = 0;
    int opcion;

    /* Hacer el menu que se muestra al usuario, en este caso se usa do while para mostrar
    el menu al menos una vez y mientras no se haya seleccionado la opcion de SALIR.*/
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Agregar Contacto\n";
        std::cout << "2. Mostrar Contacto\n";
        std::cout << "3. Buscar Contacto\n";
        std::cout << "4. Salir\n";
        std::cout << "Ingrese su opcion: ";
        std::cin >> opcion;

        /* En caso de que el usuario ingrese un string que no corresponda a una opcion
        valida el programa se va a caer, pero en este caso se va a asumir que el usuario no
        que el usuario no cometera ningun error (Happy pass).*/

        // Se utiliza un switch para definir el flujo del codigo de acuerdo a la opcion seleccionada
        switch (opcion) {
            case AGREGAR:
                agregarContacto(listaContactos, numContactos);
                break;
            case MOSTRAR:
                mostrarContactos(listaContactos, numContactos);
                break;
            case BUSCAR:
                buscarContacto(listaContactos, numContactos);
                break;
            case SALIR:
                std::cout << "Saliendo del programa... \n";
                break;
            default:
                std::cout << "Opcion no valida. Intente de nuevo..\n";
                std::cin >> opcion;
                break;
        }

    } while (opcion != SALIR);

    return 0;
}