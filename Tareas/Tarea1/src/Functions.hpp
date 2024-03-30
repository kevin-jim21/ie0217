/* En este headerfile se declaran cada una de las funciones que van a ser
utilizadas a lo largo del juego ahorcado.*/

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include "Ahorcado.hpp"

/**
 * @brief Funcion que inicializa el juego.
 * @param Game Estructura principal del juego.
 * @param dict Diccionario de palabras utilizado en el juego.
*/
void StartGame(Ahorcado* Game, std::vector<std::string> dict);

/**
 * @brief Funcion para ingresar letras y verificar si el usuario adivino.
 * @param Game Estructura principal del juego.
 * @param character Cualquier letra ingresada por el usuario.
*/
void GuessWord(Ahorcado* Game, char character);

/**
 * @brief Revisar cada turno si el juego ya termino.
 * @param Game Estructura principal del juego.
 * @return Numero que indica si el juego termino o no.
*/
int CheckGame(Ahorcado* Game);

#endif // FUNCTIONS_HPP
