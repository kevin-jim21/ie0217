/**
 * @file OperacionesBasicas.hpp
 * @brief Headerfile en donde se define una clase especificamente para comprobar si se pueden realizar la operacion solicitada por el usuario.
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

#ifndef OPERACIONES_BASICAS_HPP
#define OPERACIONES_BASICAS_HPP

#include <iostream>
#include "Matriz.hpp"

/**
 * @class OperacionesBasicas
 * @brief Clase para validar operaciones entre matrices.
 * 
 * Esta clase cuenta con los métodos necesarios para verificar si las operaciones
 * que el usuario desea realizar con las matrices, son posibles de acuerdo a las
 * dimensiones de ambas. Se hace uso del control de excepciones propio de STL para
 * levantar las excepciones.
*/
class OperacionesBasicas {
    public:

        /** 
        * @brief Método tipo template para verificar que ambas matrices (de cualquier tipo de dato)
        * cuenten con las mismas dimensiones para de esta forma, permitir las operaciones de suma
        * y resta.
        * 
        * @param a Primera matriz que se incluye en la operación.
        * @param b Segunda matriz que se incluye en la operación.
        * 
        * @return Retorna 1 si se puede realizar la operación, retorna 0 en caso contrario. 
        */
        template<typename Template>
        int validarSumaResta(Matriz<Template>& a, Matriz<Template>& b) {
            /* Para que dos matrices se puedan sumar y restar deben tener el mismo
            numero de filas y columnas*/
            try {
                // Atrapar el error
                if ((a.dimFilas != b.dimFilas) || (a.dimColumnas != b.dimColumnas)) {
                    throw std::runtime_error("No se puede realizar esta operación ya que las matrices no cuentan con las mismas dimensiones.");
                }

                // Este codigo se ejecutara si no se encuentra el error
                return 1;  // Este valor indica que se puede hacer la operacion
            }
            catch(const std::exception& e) {
                std::cerr << e.what() << std::endl;  // Dar el mensaje de error
                return 0;  // No se puede hacer la operacion
            }
        }

        /** 
        * @brief Método tipo template para verificar que las dimensiones de las matrices (de cualquier tipo de dato)
        * cumplen los requisitos necesarios para poder ser multiplicadas entre sí. Para que se puedan multiplicar,
        * la cantidad de columnas de la primera matriz debe ser igual a la cantidad de filas de la segunda matriz.
        * 
        * @param a Primera matriz que se incluye en la operación.
        * @param b Segunda matriz que se incluye en la operación.
        * 
        * @return Retorna 1 si se puede realizar la operación, retorna 0 en caso contrario. 
        */
        template<typename Template>
        int validarMultiplicacion(Matriz<Template>&a, Matriz<Template>&b) {
            // Verificacion de dimensiones
            try {
                // Atrapar el error
                if (a.dimColumnas != b.dimFilas) {
                    throw std::runtime_error("No se puede realizar esta operación ya que las matrices no cuentan con las dimensiones adecuadas.");
                }

                // ESte codigo no se ejecutara si se encuentra el error
                return 1;  // Indica que se puede hacer la operacion
            }
            catch(const std::exception& e) {
                std::cerr << e.what() << std::endl;  // Dar el mensaje de error
                return 0;  // No se puede hacer la operacion              
            }
        }
};

#endif
