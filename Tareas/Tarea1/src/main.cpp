// Este es el archivo principal del codigo fuente empleado para el juego Ahorcado

// Se incluyen headerfiles de la estructura y funciones utilizados para el juego
#include <iostream>
#include <vector>
#include <string>
#include "Ahorcado.hpp"
#include "Functions.hpp"

int main() {
    char option;
    char difficulty;
    int dictSize;
    int finish;
    char guessCharacter;
    bool repeatedWord;
    std::string newWord;
    Ahorcado Struct;
    Ahorcado *StructPointer;

    // Asignar un puntero para la estructura
    StructPointer = &Struct;

    // Asignar dificultad facil por default (7 intentos)
    StructPointer->maxAttemps = 7;

    /* Dicionario de palabras predeterminado, se dejan espacios vacíos por si el usuario
    desea añadir más palabras para jugar*/
    std::vector<std::string> dictionary({"blanco", "bajo", "vaca", "verde", "helado", "preocupado",
    "puerta", "dulce", "pollo", "nube", "estrella", "nervioso", "camino", "dibujo", "elefante"});

    // Obtener el tamano del diccionario
    dictSize = dictionary.size();

    /* Mostrar menu al usario utilizando bucle para mostrar el menu hasta
    que el usuario introduzca una opcion valida*/
    do {
        std::cout << "\n¡Bienvenido al juego Ahorcado! Ingresa una opción para continuar:" << std::endl;
        std::cout << "1. Elige la dificultad del juego" << std::endl;
        std::cout << "2. Inicia el juego" << std::endl;
        std::cout << "3. Agrega palabras al dicionario predeterminado" << std::endl;
        std::cout << "4. Revisa el diccionario de palabras" << std::endl;
        std::cout << "5. Salir" << std::endl;

        std::cin >> option;

        // Acceder a cada una de las funcionalidades del juego
        switch(option) {
            case '1':
                // Bucle para establecer la dificultad del juego
                do {
                    std::cout << "\nSelecciona una opción para establecer la dificultad del juego:" << std::endl;
                    std::cout << "1. Fácil (7 intentos permitidos)" << std::endl;
                    std::cout << "2. Intermedio (5 intentos permitidos)" << std::endl;
                    std::cout << "3. Difícil (3 intentos permitidos)" << std::endl;

                    std::cin >> difficulty;

                    // Ajustar la dificultad segun la escogencia del usuario
                    switch(difficulty) {
                        case '1':
                            StructPointer->maxAttemps = 7;
                            break;
                        case '2':
                            StructPointer->maxAttemps = 5;
                            break;
                        case '3':
                            StructPointer->maxAttemps = 3;
                            break;
                        default:
                            std::cout << "Esta opción no es válida. Por favor intenta de nuevo." << std::endl;
                            break;
                    }

                } while (difficulty != '1' && difficulty != '2' && difficulty != '3');

                break;
            case '2':
                // Iniciar el juego
                StartGame(StructPointer, dictionary);

                // Bucle para mostrar el estado de la palabra adivina y preguntar por una letra
                do {
                    std::cout << "La palabra es: " << std::endl;

                    // Bucle para mostrar el arreglo wordStatus al usuario
                    for (int i = 0; i < 25; ++i) {
                        std::cout << StructPointer->wordStatus[i] << " ";
                    }

                    std::cout << "\nPor favor ingrese una letra." << std::endl;
                    std::cout << "Número máximo de intentos: " << StructPointer->maxAttemps << std::endl;
                    std::cout << "Número de intentos realizados: " << StructPointer->usedAttemps << std::endl;
                    
                    std::cin >> guessCharacter;

                    // Ingresar el caracter a la funcion para verificar si adivino
                    GuessWord(StructPointer, guessCharacter);

                    // Llamar cada turno a la funcion que verifica si el juego termino
                    finish = CheckGame(StructPointer);

                } while (finish != 1);
                
                break;
            case '3':
                // Preguntar al usuario por la palabra que quiere anadir
                std::cout << "\nPor favor ingrese la palabra que desea añadir al juego." << std::endl;
                std::cin >> newWord;

                // Esta variable indicara si se encontro la palabra en el diccionario
                repeatedWord = false;

                // Verificar que esta palabra no esta en el diccionario
                for (int j = 0; j < dictSize; ++j) {

                    if (newWord == dictionary[j]) {
                        repeatedWord = true;

                        // Romper el ciclo si ya encontro la palabra
                        break;
                    }
                    else {
                        continue;
                    }
                }

                // Anadir la palabra al diccionario si no esta repetida
                if (!repeatedWord) {
                    dictionary.push_back(newWord);

                    // Actualizar el tamaño del diccionario
                    dictSize++;

                    std::cout << "La palabra " << newWord << " se ha registrado con éxito.";
                }
                else {
                    std::cout << "La palabra " << newWord << " ya había sido registrada.";
                }

                
                break;
            case '4':
                // Mostrar el diccionario al usuario
                std::cout << "\nEstas son las palabras que pueden aparecer en el juego: " << std::endl;

                for (int k = 0; k < dictSize; ++k) {
                    std::cout << k + 1 << ") " << dictionary[k] << std::endl;
                }
                
                break;
            case '5':
                std::cout << "\nSaliendo del juego..." << std::endl;

                break;
            default:
                std::cout << "\nEsta opción no es válida, inténtelo de nuevo..." << std::endl;

                break;
        }

    } while (option != '5');
}
