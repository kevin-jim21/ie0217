/**
 * @file ValidadorEmail.cpp
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

#include "ValidadorEmail.hpp"

void ValidadorEmail::validarCorreo(const std::string dirEmail){

    // Levantar excepcion principal si la cadena que se recibe no tiene un @
    std::regex const arroba = std::regex("@");

    // Expresiones regulares para el nombre
    std::regex const caracterInicialNombre = std::regex("^[^._-]");
    std::regex const caracterNombre = std::regex("[A-Za-z0-9._-]+@");
    std::regex const caracterFinalNombre = std::regex(".*[^._-]@");
    std::regex const limCaracteresComunes = std::regex("^[A-Za-z0-9._-]{1,15}@");  // NMod
    std::regex const caracterEspecialConsecutivo = std::regex("^(?:(?!([._-])\\1)[^@])*@");


    // Expresiones regulares para el dominio
    std::regex const caracterDominio = std::regex("@[A-Za-z.]{3,30}\\.");
    std::regex const caracterInicialDominio = std::regex(".*@[^.].*");
    std::regex const caracterFinalDominio = std::regex(".*[^.]\\.[^.]");
    std::regex const puntoEnMedio = std::regex("\\.+.*\\.");

    // Expresiones regulares para 

    // Levantar excepciones de acuerdo al requisito que no se cumple
    try {
        if(!std::regex_search(dirEmail, arroba)) {
            throw std::runtime_error("Error: la dirección de correo electrónico debe contener un símbolo \"@\".");
        }

        if(!std::regex_search(dirEmail, caracterInicialNombre)) {
            throw std::runtime_error("Error: el primer carácter no puede ser \".\", \"-\" o \"_\".");
        }
        
        if(!std::regex_search(dirEmail, caracterNombre)){
            throw std::runtime_error("Error: los carácteres que anteceden el \"@\" deben ser letras minúsculas o mayúsculas, números o carácteres del tipo \".\", \"-\" o \"_\".");
        }

        if(!std::regex_search(dirEmail, caracterFinalNombre)){
            throw std::runtime_error("Error: el último carácter antes de \"@\" no puede ser \".\", \"-\" o \"_\".");
        }

        if(!std::regex_search(dirEmail, limCaracteresComunes)){
            throw std::runtime_error("Los carácteres comunes no pueden ser más de 15.");
        }
        if(!std::regex_search(dirEmail, caracterEspecialConsecutivo)){
            throw std::runtime_error("Error: no pueden haber dos carácteres consecutivos del tipo \".\", \"-\" o \"_\".");
        }

        if(!std::regex_search(dirEmail, caracterDominio)){
            throw std::runtime_error("Error: Después de \"@\" y antes del útlimo \".\" sólo pueden ingresarse carácteres alfabéticos y tipo \".\" y no pueden ser más de 33 carácteres.");
        }

        if(!std::regex_search(dirEmail, caracterInicialDominio)){
            throw std::runtime_error("Error: el primer carácter después del \"@\" no puede ser \".\".");
        }

        if(!std::regex_search(dirEmail, caracterFinalDominio)){
            throw std::runtime_error("Error: el carácter que antecede \".\" no puede ser \".\".");
        }

        if(!std::regex_search(dirEmail, puntoEnMedio)){
            throw std::runtime_error("Error: debe existir al menos un \".\" después del \"@\" y antes del primer \".\" de la extensión.");
        }

    } catch(const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

};