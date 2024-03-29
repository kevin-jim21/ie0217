/* En este archivo se definen cada una de las funciones que fueron declaradas
en el headerfile para utilizar en el juego Ahorcado.*/

// Se incluyen las declaraciones de funciones hechas en Functions.hpp
#include "Functions.hpp"

// Se incluyen las librerias necesarias para definir estas funciones
#include <string>
#include <stdlib.h>
#include <time.h>

void StartGame(Ahorcado* Game, std::string dict[15]) {
    int dictIndex;
    std::string selectedWord;

    // Generar semilla para obtener numeros aleatorios
    srand(time(NULL));

    /* Se obtiene un numero aleatorio que va a determinar cual palabra del
    diccionario va a ser utilizada para jugar*/
    dictIndex = rand() % (15);

    selectedWord = dict[dictIndex];

    // Colocar la palabra escogida en la estructura
    Game->word = dict[dictIndex];

    // Inicializar estado de la palabra adivinada con guiones bajos
    for (int i = 0; i < selectedWord.length(); ++i) {
        Game->wordStatus[i] = '_';
    }
    
    // Inicializar en 0 la cantidad de intentos utilizados
    Game->usedAttemps = 0;
}

void GuessWord(Ahorcado* Game, char character) {
    std::string wordStatusCast;

    // Al utilizar el metodo find() de std::string, esta variable guarda la posicion donde se encontro el caracter
    size_t pos = Game->word.find(character);

    // Castear el arreglo de letras adivinadas
    wordStatusCast = Game->wordStatus;

    // Buscar el caracter ingresado dentro de la palabra
    if (pos != std::string::npos) {

        // Verificar si el caracter ya habia sido ingresado anteriormente
        if (wordStatusCast.find(character) != std::string::npos) {
            std::cout << "Esta letra ya había sido adivinada." << std::endl;
        }
        else {
            std::cout << "¡Correcto! Esta letra está en la palabra." << std::endl;
            
            /* Si la letra aun no habia sido adivinada, se iterara sobre toda la palabra
            para obtener cada una de las posiciones en donde se encuentren las letras y
            colocarlas en la variable wordStatus*/
            while(pos != std::string::npos) {
                Game->wordStatus[int(pos)] = character;

                // Saltar a la siguiente posicion para cada iteracion
                pos = Game->word.find(character, pos + 1);
            }
        }
    }
    else {
        std::cout << "¡Incorrecto! Esta letra no está en la palabra" << std::endl;
    }
}

int CheckGame(Ahorcado* Game) {
    std::string wordStatusCast;
    std::string lastChance;

    // Primero, se va a castear wordStatus como string para compararla con word
    wordStatusCast = Game->wordStatus;

    // Si el string word se puede encontrar dentro de wordStatusCast, la palabra se adivino
    if(wordStatusCast == Game->word) {
        std::cout << "¡Felicidades, has ganado!" << std::endl;

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
                std::cout << "¡Felicidades, has ganado en el último intento!" << std::endl;
            }
            else {
                std::cout << "¡Lo siento, has perdido!" << std::endl;
            }

            // Retorna 1 para comunicar en el main que ha terminado el juego
            return 1;
        }
        else {
            // Si aun no se llega al limite de intentos, se suma 1 y el juego sigue
            Game->usedAttemps++;
            
            // Retorna 0 para comunicar en el main que no ha terminado el juego
            return 0;
        }
    }
}
