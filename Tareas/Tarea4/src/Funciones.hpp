/**
 * @file Funciones.hpp
 * @brief Definicion de template functions mediante las cuales se aplican las operaciones de matrices independientemente del tipo de datos.
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

/**
 * @brief Template Function en la cual se acceden a los métodos públicos de la clase
 * Matriz para que el usuario pueda ingresar valores a la matriz.
 * 
 * El objetivo de esta función es el de utilizar el mismo fragmento de código para dimensionar las matrices 
 * y llenarlas al utilizar cualquiera de los tipos de datos con los que se está trabajando en este programa.
 * Esto es posible además, utilizando los métodos setDimensiones(). llenarMatriz() y llenarMatrizAleatoriamente().
 * 
 * @param filasA Cantidad de filas que ingresó el usuario para la primera matriz.
 * @param columnasA Cantidad de columnas que ingresó el usuario para la primera matriz.
 * @param filasB Cantidad de filas que ingresó el usuario para la segunda matriz.
 * @param columnasB Cantidad de columnas que ingresó el usuario para la segunda matriz.
 * @param matrizA Objeto (primera) matriz, el cual puede ser tipo int, float, std::complex<double>.
 * @param matrizB Objeto (segunda )matriz, el cual puede ser tipo int, float, std::complex<double>.
*/
template<typename Tipo>
void ingresoValores(int filasA, int columnasA, int filasB, int columnasB, Matriz<Tipo>& matrizA, Matriz<Tipo>& matrizB) {
    char seleccionIngreso;

    // El usuario selecciona si quiere ingresar los valores manual o aleatoriamente
    do {
        std::cout << "¿Desea ingresar los valores manualmente o que estos sean aleatorios?" << std::endl;
        std::cout << "1) Manual" << std::endl;
        std::cout << "2) Aleatorio" << std::endl;

        std::cin >> seleccionIngreso;

        switch (seleccionIngreso) {
            case '1':
                matrizA.setDimensiones(filasA, columnasA);
                matrizA.llenarMatriz();
                matrizB.setDimensiones(filasB, columnasB);
                matrizB.llenarMatriz();
                break;
            case '2':
                matrizA.setDimensiones(filasA, columnasA);
                matrizA.llenarMatrizAleatoriamente();
                matrizB.setDimensiones(filasB, columnasB);
                matrizB.llenarMatrizAleatoriamente();
                break;
            default:
                break;
        }
    } while (seleccionIngreso != '1' && seleccionIngreso != '2');

}

/**
 * @brief Template Function en la cual se acceden a los métodos públicos de las clases Matriz y Operaciones
 * Basicas necesarios para realizar las operaciones entre matrices.
 * 
 * Esta función se implementa con el objetivo de, independientemente del tipo de dato; reutilizar la lógica de
 * selección y aplicación de operaciones a las matrices que involucra utilizar métodos de las clases Matriz (para
 * realizar la operación) y OperacionesBasicas (para verificar que las operaciones se pueden realizar de acuerdo
 * a las dimensiones de las matrices).
 * 
 * @param filasA Cantidad de filas que ingresó el usuario para la primera matriz.
 * @param columnasA Cantidad de columnas que ingresó el usuario para la primera matriz.
 * @param filasB Cantidad de filas que ingresó el usuario para la segunda matriz.
 * @param columnasB Cantidad de columnas que ingresó el usuario para la segunda matriz.
 * @param matrizA Objeto (primera) matriz, el cual puede ser tipo int, float, std::complex<double>.
 * @param matrizB Objeto (segunda )matriz, el cual puede ser tipo int, float, std::complex<double>.
 * @param valoresC Representa el resultado de la operación entre ambas matrices.
 * @param opBasicas Instancia de la clase OperacionesBasicas que permite utilizar sus métodos.
 * @param operacion Recibe un caracter que representa la operación que solicitó realizar el usuario.
*/
template<typename Tipo>
void operaciones (int filasA, int columnasA, int filasB, int columnasB, Matriz<Tipo>& matrizA, Matriz<Tipo>& matrizB, std::vector<std::vector<Tipo>> valoresC, OperacionesBasicas opBasicas, char operacion) {
    int validacion;

    // Elegir operacion

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
                std::cout << "Aún no se ha seleccionado la operación que se desea realizar." << std::endl;
                break;
        }

};

/**
 * @brief Template Function en la cual se accede a un método de la clase Matriz para imprimir las matrices que se
 * desean operar.
 * 
 * Esta template function permite aplicar el método imprimirMatrices() para cualquier tipo de dato que se esté utilizando
 * y de esta manera, no sobrecargar el código del archivo main.
 * 
 * @param matrizA Objeto (primera) matriz, el cual puede ser tipo int, float, std::complex<double>.
 * @param matrizB Objeto (segunda )matriz, el cual puede ser tipo int, float, std::complex<double>.
*/
template<typename Tipo>
void mostrarMatrices(Matriz<Tipo>& matrizA, Matriz<Tipo>& matrizB) {
    std::cout << "A = " << std::endl;
    matrizA.imprimirMatrices();

    std::cout << "B = " << std::endl;
    matrizB.imprimirMatrices();
};
