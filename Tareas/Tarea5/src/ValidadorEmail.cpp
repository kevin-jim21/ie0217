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
    std::regex const caracterNombre = std::regex("[A-Za-z0-9.-_]{0,15}");
    std::regex const caracterFinalNombre = std::regex(".*[^._-]@");
    std::regex const caracterEspecialConsecutivo = std::regex("^(?!.*([._-])\\1)");
    //std::regex const caracterEspecialConsecutivo = std::regex();

    // Levantar excepciones de acuerdo al requisito que no se cumple
    try {
        if(!std::regex_search(dirEmail, arroba)) {
            throw std::runtime_error("Error: la dirección de correo electrónico debe contener un símbolo \"@\".");
        }

        if(!std::regex_search(dirEmail, caracterInicialNombre)) {
            throw std::runtime_error("Error: el primer carácter no puede ser \".\", \"-\" o \"_\".");
        }
        
        if(!std::regex_search(dirEmail, caracterNombre)){
            throw std::runtime_error("Error: los carácteres que anteceden el \"@\" deben ser letras minúsculas o mayúsculas, números o caráceteres del tipo \".\", \"-\" o \"_\".");
        }

        if(!std::regex_search(dirEmail, caracterFinalNombre)){
            // NMod
            throw std::runtime_error("Error: el último carácter antes de \"@\" no puede ser \".\", \"-\" o \"_\".");
        }

        if(!std::regex_search(dirEmail, caracterEspecialConsecutivo)){
            throw std::runtime_error("Error: no pueden haber dos carácteres consecutivos del tipo \".\", \"-\" o \"_\".");
        }
    } catch(const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

};