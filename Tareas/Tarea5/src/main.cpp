/**
 * @file main.cpp
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

int main() {

    char opMenu;
    ValidadorEmail InstValidador;
    std::string correo;

    do {
    std::cout << "VALIDADOR DE EMAILS" << std::endl;
    std::cout << "Por favor seleccione una opción:" << std::endl;
    std::cout << "1) Ingresar el correo electrónico." << std::endl;
    std::cout << "2) Salir del programa." << std::endl;

    std::cin >> opMenu;

    switch (opMenu)
    {
    case '1':
        std::cout << "Por favor ingrese su correo:" << std::endl;
        std::cin.ignore();
        getline(std::cin, correo);

        InstValidador.validarCorreo(correo);
        break;

    case '2':
        std::cout << "Saliendo del programa..." << std::endl;
        break;
    
    default:
        std::cout << "¡La opción " << opMenu << " no es válida! Por favor inténtelo de nuevo " << std::endl;
        break;
    }

    } while (opMenu != '2');

    return 0;
}