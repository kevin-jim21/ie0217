/**
 * @file OperacionesBasicas.hpp
 * @brief
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
#include <stdexcept>
#include "Matriz.hpp"

class OperacionesBasicas {
    public:
        template<typename Template>
        int validarSumaResta(Matriz<Template>& a, Matriz<Template>& b) {
            /* Para que dos matrices se puedan sumar y restar deben tener el mismo
            numero de filas y columnas*/
            try {
                // Atrapar el error
                if ((a.dimFilas != b.dimFilas) || (a.dimColumnas != b.dimColumnas)) {
                    throw std::runtime_error("No se puede realizar esta operación ya que las matrices no cuentan con las mismas dimensiones");
                }

                // Este codigo no se ejecutara si se encuentra el error
                return 1;  // Este valor indica que se puede hacer la operacion
            }
            catch(const std::exception& e) {
                std::cerr << e.what() << std::endl;  // Dar el mensaje de error
                return 0;  // No se puede hacer la operacion
            }
        }

        //template<typename Template>
        //void validarMultiplicacion(Matriz<Template>&a, Matriz<Template>&b) {}
};

#endif