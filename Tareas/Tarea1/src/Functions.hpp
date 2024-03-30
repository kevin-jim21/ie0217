/**
 * @file Functions.hpp
 * @brief En este headerfile se declaran las funciones que van a ser utilizadas a lo largo del juego ahorcado.
 *
 * MIT License
 *
 * Copyright (c) [2024] [Kevin Jiménez Acuña]
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include "Ahorcado.hpp"

/**
 * @brief Función que inicializa el juego.
 * 
 * Esta función elige una palabra aleatoriamente de un diccionario, incializa
 * el estado de la palabra adivinada con caracteres "_" y por último, inicializa
 * en 0 el número de intentos realizados. Esta función va a ser llamada exclusivamente
 * al ingresar desde el menú a la opción de jugar.
 * 
 * @param Game Estructura principal del juego.
 * @param dict Diccionario de palabras utilizado en el juego.
*/
void StartGame(Ahorcado* Game, std::vector<std::string> dict);

/**
 * @brief Función para ingresar letras y verificar si el usuario adivinó.
 * 
 * Esta función extrae la palabra a adivinar de la estructura, la convierte en
 * arreglo y lo recorre con un bucle comparando con el carácter que ingresó el
 * usuario. Después de verificar que el carácter aún no había sido ingresado
 * en el arreglo de la palabra adivinada, se coloca la letra en el arreglo de
 * letras adivinadas. Si la letra no es adivinada, suma uno a los intentos
 * realizados por el usuario. Esta función va a ser llamada dentro de un bucle
 * después haber inicializado el juego con la función StartGame.
 * 
 * @param Game Estructura principal del juego.
 * @param character Cualquier letra ingresada por el usuario.
*/
void GuessWord(Ahorcado* Game, char character);

/**
 * @brief Revisar cada turno si el juego ya terminó.
 * 
 * Esta función se encarga de chequear primero si la palabra ya fue adivinada,
 * en caso de que no sea así, consultará si el usuario alcanzó el límite de
 * intentos utilizados; en caso de que sea así le dará al usuario una última
 * oportunidad de adivinar la palabra. En cualquiera de estos casos, la función
 * retorna 1 para indicar que el juego ya finalizó, mientras que si no se cumple
 * ninguno de estos casos se retorna 0 para indicar que el juego debe continuar.
 * La función siempre se llama después de salir de la función GuessWord y
 * determina cuando finaliza el bucle.
 * 
 * @param Game Estructura principal del juego.
 * @return Número que indica si el juego terminó o no.
*/
int CheckGame(Ahorcado* Game);

#endif // FUNCTIONS_HPP
