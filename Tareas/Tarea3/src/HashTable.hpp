/**
 * @file HashTable.hpp
 * @brief En este headerfile se declara la estructura que va a contener la "lista" dinámica de contactos.
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
#ifndef HASHTABLE_HPP
#define HASHTABLE_HPP

#include <iostream>

/**
 * @brief: HashTable para almacenar contactos
 * 
 * En esta estructura se encuentran dos arrays que trabajaran en conjunto para
 * actuar como una HashTable. La memoria de ambos arrays va a ser modificada en
 * tiempo de ejecución, ya que el objetivo principal de este programa es ser
 * lo más eficiente posible.
*/
struct HashTable {
    char** name;  ///< Puntero doble representa el array dinámico donde se almacenan los nombres de los contactos.
    int* number;  ///< Puntero que representa el array dinámico para guarda el número de los contactos.
};

#endif  // HASHTABLE_HPP
