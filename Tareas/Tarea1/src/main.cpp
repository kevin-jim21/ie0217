// Este es el archivo principal del codigo fuente empleado para el juego Ahorcado

// Se incluyen headerfiles de la estructura y funciones utilizados para el juego
#include <iostream>
#include "Ahorcado.hpp"
#include "Functions.hpp"

int main() {
    int option;

    /* Mostrar menu al usario utilizando bucle para mostrar el menu hasta
    que el usuario introduzca una opcion valida*/
    do {
        std::cout << "¡Bienvenido al juego Ahorcado! Ingresa una opción para continuar" << std::endl;
        std::cout << "1. Elige la dificultad del juego" << std::endl;
        std::cout << "2. Inicia el juego" << std::endl;
        std::cout << "3. Agrega palabras al dicionario predeterminado" << std::endl;
        std::cout << "4. Revisa el diccionario de palabras" << std::endl;
        std::cout << "5. Salir" << std::endl;

        std::cin >> option;

        // Acceder a cada una de las funcionalidades del juego
        switch(option) {
            case 1:

                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
                
                break;
            case 5:
                
                break;
            default:
                std::cout << "Saliendo del juego..." << std::endl;
                break;
        }

    } while (option != 5);
}
