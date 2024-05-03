/**
 * @file Funciones.hpp
 * @brief Definicion de template function mediante la cual se aplican las operaciones de matrices independientemente del tipo de datos.
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

#include "OperacionesBasicas.hpp"

// Template function para ingresar y realizar operaciones de matrices para cualquier tipo de dato
template<typename Tipo>
void operaciones (int filasA, int columnasA, int filasB, int columnasB, Matriz<Tipo>& matrizA, Matriz<Tipo>& matrizB, std::vector<std::vector<Tipo>> valoresC, OperacionesBasicas opBasicas) {
    int validacion;
    char operacion;

    std::cout << "\nPrimera matriz" << std::endl;
    matrizA.setDimensiones(filasA, columnasA);
    matrizA.llenarMatriz();

    std::cout << "\nSegunda matriz" << std::endl;
    matrizB.setDimensiones(filasB, columnasB);
    matrizB.llenarMatriz();

    // Elegir operacion
    do {
        std::cout << "Seleccione la operación que desea aplicar: " << std::endl;
        std::cout << "s) A + B = C" << std::endl;
        std::cout << "r) A - B = c" << std::endl;
        std::cout << "m) A * B = c" << std::endl;
        std::cin >> operacion;

        std::cout << "Aplicando operación..." << std::endl;
        switch (operacion) {
            case 's':
                validacion = opBasicas.validarSumaResta(matrizA, matrizB);

                if (validacion == 1) {
                    valoresC = matrizA.operator+(matrizB);

                    std::cout << "C = " << std::endl;
                    for(int i = 0; i < filasA; ++i) {
                        std::cout << "|";

                        for(int j = 0; j < columnasA; ++j) {
                            std::cout << valoresC[i][j] << " ";
                        }
                        
                        std::cout << "|" << std::endl;
                    }
                }

                break;
            case 'r':
                validacion = opBasicas.validarSumaResta(matrizA, matrizB);

                if(validacion == 1) {
                    valoresC = matrizA.operator-(matrizB);

                    std::cout << "C = " << std::endl;
                    for(int i = 0; i < filasA; ++i) {
                        std::cout << "|";

                        for(int j = 0; j < columnasA; ++j) {
                            std::cout << valoresC[i][j] << " ";
                        }

                        std::cout << "|" << std::endl;
                    }
                }

                break;
            case 'm':
                validacion = opBasicas.validarMultiplicacion(matrizA, matrizB);
                if(validacion == 1) {
                    valoresC = matrizA.operator*(matrizB);

                    std::cout << "C = " << std::endl;
                    for(int i = 0; i < filasA; ++i) {
                        std::cout << "|";

                        for(int j = 0; j < columnasB; ++j) {
                            std::cout << valoresC[i][j] << " ";
                            }

                        std::cout << "|" << std::endl;
                    }
                }

                break;
            default:
                std::cout << "Esta opción no es válida, por favor intente de nuevo." << std::endl;
                break;
        }

    } while (operacion != 's' && operacion != 'r' && operacion != 'm');
};