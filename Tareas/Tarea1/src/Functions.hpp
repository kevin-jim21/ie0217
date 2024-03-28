/* En este headerfile se declaran cada una de las funciones que van a ser
utilizadas a lo largo del juego ahorcado.*/

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include "Ahorcado.hpp"

/**
 * @brief: Funcion que inicializa el juego.
 * @param Game estructura principal del juego.
 * @param dict diccionario de palabras utilizado en el juego.
 * @param attemps intentos maximos de acuerdo a la dificultad escogida.
*/
void StartGame(Ahorcado* Game, std::string dict[15], int attemps);

/**
 * @brief: Funcion para ingresar letras y verificar si el usuario adivino.
 * @param Game estructura principal del juego.
 * @param character cualquier letra ingresada por el usuario.
*/
void GuessWord(Ahorcado* Game, char character);

/**
 * @brief: Revisar cada turno si el juego ya termino.
 * @param Game estructura principal del juego.
*/
void ChechGame(Ahorcado* Game);

#endif // FUNCTIONS_HPP
