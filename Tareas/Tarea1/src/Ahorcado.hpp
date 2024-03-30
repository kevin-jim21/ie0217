/**
 * @file Ahorcado.hpp
 * @brief En este headerfile se declara la estructura que va a contener la informacion durante el desarrollo del juego.
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

#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <iostream>
#include <vector>
#include <string>

/**
 * @brief Esta estructura representa el juego "Ahorcado".
 * 
 * En esta estructura se almacenan todos los datos necesarios para definir
 * el "status" del juego durante su desarrollo y determinar cuando finaliza.
 * Se van a utilizar punteros hacia la estructura para actualizar sus
 * valores durante el juego.
 */
struct Ahorcado {
    std::string word; ///< Palabra que debe adivinar el usuario.
    char wordStatus[25]; ///< Letras adivinadas y que aun no han sido adivinadas.
    int maxAttemps; ///< Cantidad maxima de intentos para adivinar la palabra.
    int usedAttemps; ///< Intentos que ha utilizado el usuario hasta el momento.
};

#endif // AHORCADO_HPP
