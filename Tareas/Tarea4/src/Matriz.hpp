/**
 * @file Matriz.hpp
 * @brief Definición de la template class Matriz utilizada para crear y aplicar operaciones entre matrices.
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

#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <vector>
#include <stdexcept>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

/**
 * @class Matriz
 * @brief Template class mediante la cual se definen matrices y se realizan operaciones para los
 * tipos de datos int, float y std::complex.
 * 
 * En esta template class se encuentran los métodos necesarios para rellenar la matriz y realizar
 * operaciones entre ellas. Los métodos para dimensionar y rellenar la matriz utilizan control de
 * excepciones propios de la STL para evitar la caída del programa ante el ingreso de un dato
 * erróneo por parte del usuario.
*/
template <typename Tipo>
class Matriz {
    private:
        std::vector<std::vector<Tipo>> valores;  ///< Vector de vectores que contienene los valores de la matriz.

        // Inicialmente, estos atributos se encontraran en 0
        int dimFilas = 0;  ///< Cantidad de filas de la matriz.
        int dimColumnas = 0;  ///< Cantidad de columnas de la matriz.

    public:
        /**
        * @brief Constructor de la clase Matriz.
        * 
        * @param valores Vector de valores que puede ser de tipo int, float o std::complex<double>.
        */
        Matriz(std::vector<std::vector<Tipo>> valores) : valores(valores) {}

        /**
        * @brief Destructor de la clase Matriz.
        */
        ~Matriz() {}

        /**
        * @brief Ajustar el tamaño de la matriz, incluyendo un sanity check si alguna dimensión es cero o negativa.
        * 
        * @param filas Cantidad de filas que el usuario desea para la matriz.
        * @param columnas Cantidad de columnas que el usuario desea para la matriz.
        */
        void setDimensiones(int filas, int columnas) {
            // Verificar que las dimensiones sean enteros positivos (sust. metodo "validarDimensiones")
            try {
                if(filas < 1 || columnas < 1) {
                    throw std::runtime_error("¡Lo siento! Las dimensiones que ingresó para esta matriz no son válidas.");
                }

                // Este codigo se ejecutara si no se encuentra el error
                dimFilas = filas;
                dimColumnas = columnas;

                valores.resize(dimFilas);  // Ajustar la cantidad de filas

                // Ajustar la cantidad de columnas
                for (int i = 0; i < dimFilas; ++i) {
                    valores[i].resize(dimColumnas);
                }

            }
            catch(const std::exception& e) {
                std::cerr << e.what() << std::endl;  // Dar el mensaje de error
                exit(EXIT_FAILURE);  // Terminar el programa
            }
        };
        
        /** 
        * @brief Método que solicita al usuario ingresar los valores de la matriz manualmente. Esta
        * incluye un sanity check en caso de que el usuario ingrese un valor que no concuerda con el tipo
        * de dato esperado.
        */
        void llenarMatriz() {
            int j;  // Contador para indicar al usuario las coordenadas del valor que esta ingresando 
            typename std::vector<Tipo>::iterator itr;  // Crear un iterador para recorrer las filas
            std::string ingreso;
            Tipo verificarIngreso;

            // Repetir el proceso para cada fila
            for (int i = 0; i < dimFilas; ++i) {
                j = 0;  // Inicializar contador de columna

                // Recorrer cada valor
                for (itr = valores[i].begin(); itr != valores[i].end(); ++itr) {
                    std::cout << "Ingrese el valor " << i + 1 << " " << j + 1 << ":" << std::endl;
                    std::cin >> ingreso;  // Colocar el valor en la matriz

                    // Verificar que el dato ingresado es correcto (sust. validarTipoDato)
                    std::istringstream converter(ingreso);  // Intentar conversion
                    converter >> verificarIngreso;

                    try {
                        if(!converter || !converter.eof()) {
                            throw std::runtime_error("Esta entrada no corresponde con el tipo de dato.");
                        }
                    }
                    catch (const std::exception& e) {
                        std::cerr << e.what() << std::endl;  // Dar el mensaje de error
                        exit(EXIT_FAILURE);  // Terminar el programa        
                    }

                    // Si no salta el error
                    *itr = verificarIngreso;
                    ++j;  // Subir contador de columna
                }
            }
        };

        /** 
        * @brief Método que asigna valores aleatorios (dependiendo del tipo) a la matriz.
        */
        void llenarMatrizAleatoriamente() {

            typename std::vector<Tipo>::iterator itr;  // Crear un iterador para recorrer las filas

            // Repetir el proceso para cada fila
            for (int i = 0; i < dimFilas; ++i) {

                // Recorrer cada valor
                for (itr = valores[i].begin(); itr != valores[i].end(); ++itr) {
                    *itr = rand() % 101;  // Asignar un valor aleatorio 
                }
            }

        };

        /** 
        * @brief Método que imprime al usuario la matriz en la terminal. 
        */
        void imprimirMatrices() {
            // Recorrer todas las filas
            for (int i = 0; i < dimFilas; ++i) {
                // Recorrer todas las columans
                std::cout << "|";

                for (int j = 0; j < dimColumnas; ++j) {
                    std::cout << valores[i][j] << " ";
                }

                std::cout << "|" << std::endl;
            }
        };

        // Sobrecarga de operadores

        /** 
        * @brief Método que calcula la suma de dos matrices.
        * 
        * @param matrizB Recibe la segunda matriz que se va a sumar.
        * 
        * @return Vector resultado de la operación entre las dos matrices. 
        */
        std::vector<std::vector<Tipo>> operator+ (const Matriz& matrizB) {
            std::vector<std::vector<Tipo>> resultado;
            int j;

            // Suponiendo que ya se verifico que ambas matrices cumplen las condiciones para ser sumadas
            resultado = this->valores;

            // Sumar valores de la matriz B a la matriz resultado
            typename std::vector<Tipo>::iterator itr;  // Crear un iterador para recorrer las filas

            // Recorrer filas
            for (int i = 0; i < dimFilas; ++i) {
                j = 0;  // Inicializar contador de columna

                // Recorrer cada valor de la fila
                for (itr = resultado[i].begin(); itr != resultado[i].end(); ++itr) {
                    *itr += (&matrizB)->valores[i][j];

                    ++j;  // Subir contador de columna
                }
            }
            return resultado;
        };


        /** 
        * @brief Función que calcula la resta de dos matrices.
        * 
        * @param matrizB Recibe la matriz la cual va a restar a la primera.
        * 
        * @return Vector resultado de la operación entre matrices. 
        */
        std::vector<std::vector<Tipo>> operator- (const Matriz& matrizB) {
            std::vector<std::vector<Tipo>> resultado;
            int j;

            // Suponiendo que ya se verifico que ambas matrices cumplen las condiciones para ser restadas
            resultado = this->valores;

            // Sumar valores de la matriz B a la matriz resultado
            typename std::vector<Tipo>::iterator itr;  // Crear un iterador para recorrer las filas

            // Recorrer filas
            for (int i = 0; i < dimFilas; ++i) {
                j = 0;  // Inicializar contador de columna

                // Recorrer cada valor de la fila
                for (itr = resultado[i].begin(); itr != resultado[i].end(); ++itr) {
                    *itr -= (&matrizB)->valores[i][j];

                    ++j;  // Subir contador de columna
                }
            }
            return resultado;
        };
        
        /** 
        * @brief Función que calcula la multiplicación de dos matrices.
        * 
        * @param matrizB Recibe la segunda matriz que va a participar de la multiplicación.
        * 
        * @return Vector resultado de la operación entre matrices. 
        */
        std::vector<std::vector<Tipo>> operator* (const Matriz& matrizB) {
            std::vector<std::vector<Tipo>> resultado;  // Crear la matriz resultado
            int dimFilasMult;
            int dimColumnasMult;
            typename std::vector<Tipo>::iterator itr;  // Recorrer columnas para la matriz resultado
            Tipo sum;  // Sumatoria con la que se obtiene el resultado de cada suboperacion
            int k;  // Contador para hacer iteracion fila * columna

            // Primero se deben definir las dimensiones de la matriz resultado
            dimFilasMult = this->dimFilas;
            dimColumnasMult = (&matrizB)->dimColumnas;

            // Inicializar la matriz resultado
            resultado.resize(dimFilasMult);  // Ajustar la cantidad de filas

            // Ajustar la cantidad de columnas
            for (int i = 0; i < dimFilas; ++i) {
                resultado[i].resize(dimColumnasMult);
            }

            // Recorrer la matriz resultado, asignando los valores uno a uno
            for (int j = 0; j < dimFilasMult; ++j) {
                k = 0;

                for (itr = resultado[j].begin(); itr != resultado[j].end(); ++itr) {
                    sum = 0;  // Iniciar el resultado de una coord de la matriz

                    // Recorrer filas de la primera matriz y columnas de la segunda matrizs
                    for (int l = 0; l < (&matrizB)->dimFilas; ++l) {
                        sum += this->valores[j][l] * (&matrizB)->valores[l][k];
                        
                    }

                    *itr = sum;  // Guardar el resultado en la matriz resultado
                    ++k;
                }
            }

            return resultado;

        };

        // Declaracion de clase amiga para poder validar las operaciones entre matrices
        friend class OperacionesBasicas;
};

/** 
* @brief Especialización del método llenarMatriz para el caso en donde el tipo de datos
* es de tipo std::complex.
*/
template<>
void Matriz<std::complex<double>>::llenarMatriz() {
    double real;
    double imaginario;
    int j;  // Contador para indicar al usuario las coordenadas del valor que esta ingresando 
    std::vector<std::complex<double>>::iterator itr;  // Crear un iterador para recorrer las filas

    // Repetir proceso para cada fila
    for(int i = 0; i < dimFilas; ++i) {
        j = 0;  // Contador de columna

        // Recorrer cada valor
            for (itr = valores[i].begin(); itr != valores[i].end(); ++itr) {
                std::cout << "Ingrese el valor real de " << i + 1 << " " << j + 1 << ":" << std::endl;
                std::cin >> real;

                std::cout << "Ingrese el valor imaginario de " << i + 1 << " " << j + 1 << ":" << std::endl;
                std::cin >> imaginario;

                *itr = std::complex<double>(real, imaginario);  // Parsear y anadir el valor a la matriz

                ++j;  // Subir contador de columna
            }

    }
};

/** 
* @brief Especialización del método llenarMatrizAleatoria() para el caso en donde el tipo de datos
* es de tipo std::complex. 
*/
template<>
void Matriz<std::complex<double>>::llenarMatrizAleatoriamente() {
    double real;
    double imaginario;
    std::vector<std::complex<double>>::iterator itr;  // Crear un iterador para recorrer las filas

    // Repetir proceso para cada fila
    for(int i = 0; i < dimFilas; ++i) {

        // Recorrer cada valor
            for (itr = valores[i].begin(); itr != valores[i].end(); ++itr) {
                real = rand() % 101;  // Asignar un valor real aleatorio 
                imaginario = rand() % 101;  // Asignar un valor imaginario aleatorio 

                *itr = std::complex<double>(real, imaginario);  // Parsear y anadir el valor a la matriz
            }

    }
};

#endif
