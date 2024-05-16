/**
 * @file ValidadorEmail.hpp
 * @brief Declaración de la clase que se encarga de validar una dirección de correo electrónico ingresada por el usuario.
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

#ifndef VALIDADOR_EMAIL_HPP
#define VALIDADOR_EMAIL_HPP

#include <iostream>
#include <string>
#include <regex>
#include <stdexcept>

/**
 * @class ValidadorEmail
 * @brief Esta clase se utiliza para evaluar si una dirección correo electrónico es válido o no.
 * 
 * Esta clase será instanciada en el main, para por medio de su método público validarCorreo(), recibir las
 * posibles direcciones dadas por el usuario en formato string y validarlas.
*/
class ValidadorEmail {
    public:
        /**
        * @brief Este método valida las direcciones de correo electrónico utilizando regex y el método regex_search()
        * para buscar las coincidencias necesarias.
        * 
        * @param dirEmail La dirección de correo electrónico que se desea evaluar.
        */
        void validarCorreo (const std::string dirEmail);
};

#endif