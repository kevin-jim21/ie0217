/* En este archivo se definen cada una de las funciones que fueron declaradas
en el headerfile para utilizar en el juego Ahorcado.*/

/*! \mainpage Documentación del Juego Ahorcado
 *
 * Aquí se pueden encontrar los elementos más importantes para 
 * comprender la elaboración de esta tarea.
 * 
 * 
 * Estructuras:
 * \ref Ahorcado
 * 
 * Funciones:
 * \ref StartGame
 * \ref GuessWord
 * \ref CheckGame
 * 
 * Archivos de cabecera y código fuente:
 * \ref Ahorcado.hpp
 * \ref Functions.hpp
 * \ref Functions.cpp
 * \ref main.cpp
 */

// Se incluyen las declaraciones de funciones hechas en Functions.hpp
#include "Functions.hpp"

// Se incluyen las librerias necesarias para definir estas funciones
#include <string>
#include <stdlib.h>
#include <time.h>

void StartGame(Ahorcado* Game, std::vector<std::string> dict) {
    int dictIndex;
    int dictSize;
    std::string selectedWord;

    // Generar semilla para obtener numeros aleatorios
    srand(time(NULL));

    // Obtener la cantidad de palabras del diccionario
    dictSize = dict.size();

    /* Se obtiene un numero aleatorio que va a corresponder a la posicion de la
    palabra del diccionario con la que se va a jugar*/
    dictIndex = rand() % (dictSize);

    selectedWord = dict[dictIndex];

    // Colocar la palabra escogida en la estructura
    Game->word = dict[dictIndex];

    // Limpieza del array antes de colocar caracteres
    for (int i = 0; i < 25; ++i) {
        Game->wordStatus[i] = '\0';
    }

    // Inicializar estado de la palabra adivinada con guiones bajos
    for (int i = 0; i < selectedWord.length(); ++i) {
        Game->wordStatus[i] = '_';
    }

    // Anadir caracter nulo para evitar problemas posteriormente
    Game->wordStatus[selectedWord.length()] = '\0';
    
    // Inicializar en 0 la cantidad de intentos utilizados
    Game->usedAttemps = 0;
}

void GuessWord(Ahorcado* Game, char character) {
    const char* wordArray;
    int wordSize;
    bool find;
    bool repeated;

    // Convertir la palabra que se debe adivinar en un arreglo de caracteres
    wordArray = Game->word.c_str();

    // Obtener el tamano de la palabra
    wordSize = Game->word.length();

    // Este valor indicara si se encontro al menos un caracter en el arreglo
    find = false;

    // Este valor indicara si el caracter ya habia sido encontrado antes
    repeated = false;

    /* Buscar el caracter ingresado en el arreglo. El tamano de la palabra se
    utiliza como condicion de parada para el bucle.*/
    for (int i = 0; i < wordSize; ++i) {

        if (character == wordArray[i]) {
            
            // Chequear si la letra ya habia sido adivinada, de ser así rompe el ciclo
            if (character == Game->wordStatus[i]) {
                find = true;
                repeated = true;

                break;
            }
            else {
                // Colocar la letra en el arreglo de letras adivinadas
                Game->wordStatus[i] = character;

                find = true;
            }
        }
        else {
            continue;
        }
    }

    // Indicar al usuario si hay un acierto o no
    if (find && !repeated) {
        std::cout << "¡Correcto! La letra " << character << " está en la palabra." << std::endl;
    }
    else if (find && repeated) {
        std::cout << "¡Ups! La letra "  << character << " ya había sido adivinada." << std::endl;
    }
    else {
        std::cout << "¡Incorrecto! La letra " << character << " no está en la palabra." << std::endl;

        // Si aun no se llega al limite de intentos, se suma 1 y el juego sigue
        Game->usedAttemps++;
    }
}

int CheckGame(Ahorcado* Game) {
    std::string wordStatusCast;
    std::string lastChance;

    // Primero, se va a castear wordStatus como string para compararla con word
    wordStatusCast = Game->wordStatus;

    // Si el string word se puede encontrar dentro de wordStatusCast, la palabra se adivino
    if(wordStatusCast == Game->word) {
        std::cout << "¡Felicidades, has ganado! La palabra era "<< Game->word << "." << std::endl;

        // Retorna 1 para comunicar en el main que ha terminado el juego
        return 1;
    }
    else {
        // Verificar que aun no se han acabo los intentos
        if(Game->usedAttemps == Game->maxAttemps) {

            // Si se alcanzo el limite de intentos, dar ultima oportunidad
            std::cout << "¡Se han acabado los intentos!" << std::endl;
            std::cout << "¡Tienes una última oportunidad! Ingresa la palabra correcta para ganar" << std::endl;
            std::cin >> lastChance;

            // Verificar si la palabra ingresada es igual a word
            if(lastChance == Game->word) {
                std::cout << "¡Felicidades, has ganado en el último intento! La palabra era " << Game->word << "." << std::endl;
            }
            else {
                std::cout << "¡Lo siento, has perdido! La palabra era " << Game->word << "." << std::endl;
            }
            // Retorna 1 para comunicar en el main que ha terminado el juego
            return 1;
        }
        else {
            
            // Retorna 0 para comunicar en el main que no ha terminado el juego
            return 0;
        }
    }
}
