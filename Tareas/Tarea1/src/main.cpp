// Este es el archivo principal del codigo fuente empleado para el juego Ahorcado

// Se incluyen headerfiles de la estructura y funciones utilizados para el juego
#include <iostream>
#include "Ahorcado.hpp"
#include "Functions.hpp"

int main() {
    int option;
    int difficulty;
    Ahorcado Struct;
    Ahorcado *StructPointer;

    // Asignar un puntero para la estructura
    StructPointer = &Struct;

    // Asignar dificultad facil por default (7 intentos)
    StructPointer->maxAttemps = 7;

    /* Dicionario de palabras predeterminado, se dejan espacios vacíos por si el usuario
    desea añadir más palabras para jugar*/
    std::string dictionary[30] = {"blanco", "bajo", "vaca", "verde", "helado", "preocupado",
    "puerta", "dulce", "pollo", "nube", "estrella", "nervioso", "camino", "dibujo", "elefante"};

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
                // Bucle para establecer la dificultad del juego
                do {
                    std::cout << "Selecciona una opción para establecer la dificultad del juego" << std::endl;
                    std::cout << "1. Fácil (7 intentos permitidos)" << std::endl;
                    std::cout << "2. Intermedio (5 intentos permitidos)" << std::endl;
                    std::cout << "3. Difícil (3 intentos permitidos)" << std::endl;

                    std::cin >> difficulty;

                    // Ajustar la dificultad segun la escogencia del usuario
                    switch(difficulty) {
                        case 1:
                            StructPointer->maxAttemps = 7;
                            break;
                        case 2:
                            StructPointer->maxAttemps = 5;
                            break;
                        case 3:
                            StructPointer->maxAttemps = 3;
                            break;
                        default:
                            std::cout << "Esta opción no es válida. Por favor intenta de nuevo." << std::endl;;
                            break;
                    }

                } while (difficulty < 1 || difficulty > 3);

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
