/**
 * @file main.cpp
 * @brief Este archivo contiene la secuencia de codigo principal para el programa Gestion de Contactos
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

#include "Functions.hpp"
using namespace std;

int main() {
    char option;

    // Desplegar menu
    do {
        cout << "********** CONTACTOS **********" << endl;
        cout << "Por favor seleccione una opción." << endl;
        cout << "1) Agregar contacto." << endl;
        cout << "2) Eliminar contacto." << endl;
        cout << "3) Lista de contactos (local y almacenamiento en la nube)." << endl;
        cout << "4) Lista de contactos (local)." << endl;
        cout << "5) Salir." << endl;

        // Ingresar opcion
        cin >> option;

        switch (option) {
        case '1' :
            
            break;
        case '2' :
            
            break;
        case '3' :
            
            break;
        case '4' :
            
            break;
        case '5' :
            cout << "Saliendo del programa..." << endl;
            break;
        
        default:
            cout << "La opción ingresada no es válida. Por favor intente de nuevo." << endl;
            break;
        }
        cin.ignore();  // Limpiar la entrada antes de colocar una opcion

    } while (option != '5');

    return 0;
}