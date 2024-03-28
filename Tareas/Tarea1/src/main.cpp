// Este es el archivo principal del codigo fuente empleado para el juego Ahorcado

// Se incluyen headerfiles de la estructura y funciones utilizados para el juego
#include <iostream>
#include "Ahorcado.hpp"
#include "Functions.hpp"

int main() {
    int option;
    int difficulty;
    int finish;
    char guessCharacter;
    Ahorcado Struct;
    Ahorcado *StructPointer;

    // Asignar un puntero para la estructura
    StructPointer = &Struct;

    // Asignar dificultad facil por default (7 intentos)
    StructPointer->maxAttemps = 7;

    /* Dicionario de palabras predeterminado, se dejan espacios vacíos por si el usuario
    desea añadir más palabras para jugar*/
    std::string dictionary[15] = {"blanco", "bajo", "vaca", "verde", "helado", "preocupado",
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
                            std::cout << "Esta opción no es válida. Por favor intenta de nuevo." << std::endl;
                            break;
                    }

                } while (difficulty < 1 || difficulty > 3);

                break;
            case 2:
                // Iniciar el juego
                StartGame(StructPointer, dictionary);

                // Bucle para mostrar el estado de la palabra adivina y preguntar por una letra
                do {
                    std::cout << "La palabra es: " << std::endl;

                    // Bucle para mostrar el arreglo wordStatus
                    for (int i = 0; i < 25; ++i) {
                        std::cout << StructPointer->wordStatus[i] << " ";
                    }

                    std::cout << "\nPor favor ingrese una letra" << std::endl;
                    std::cin >> guessCharacter;

                    // Ingresar el caracter a la funcion para verificar si adivino
                    void GuessWord(Ahorcado* StructPointer, char guessCharacter);

                    // Llamar cada turno a la funcion que verifica si el juego termino
                    finish = ChechGame(StructPointer);

                } while (finish =! 1);
                
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
