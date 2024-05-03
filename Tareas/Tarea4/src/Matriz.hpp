/**
 * @file Matriz.hpp
 * @brief Definición de la template class "Matriz" en donde se define el tamaño de la matriz e introducen sus valores.
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

template <typename Tipo>
class Matriz {
    private:
        std::vector<std::vector<Tipo>> valores;  // Matriz sera un vector de vectores
        int dimFilas;
        int dimColumnas;

    public:
        // Constructor
        Matriz(std::vector<std::vector<Tipo>> valores) : valores(valores) {}

        // Destructor
        ~Matriz() {}

        // Metodo para definir las dimensiones de la matriz
        void setDimensiones(int filas, int columnas) {
            // Dar valor a los atributos de la matriz
            dimFilas = filas;
            dimColumnas = columnas;

            valores.resize(dimFilas);  // Ajustar la cantidad de filas

            // Ajustar la cantidad de columnas
            for (int i = 0; i < dimFilas; ++i) {
                valores[i].resize(dimColumnas);
            }
        };
        
        // Metodo para introducir los valores a la matriz
        void llenarMatriz() {
            int j;  // Contador para indicar al usuario las coordenadas del valor que esta ingresando 
            typename std::vector<Tipo>::iterator itr;  // Crear un iterador para recorrer las filas

            // Repetir el proceso para cada fila
            for (int i = 0; i < dimFilas; ++i) {
                j = 0;  // Inicializar contador de columna

                // Recorrer cada valor
                for (itr = valores[i].begin(); itr != valores[i].end(); ++itr) {
                    std::cout << "Ingrese el valor " << i + 1 << " " << j + 1 << ":" << std::endl;
                    std::cin >> *itr;  // Colocar el valor en la matriz

                    ++j;  // Subir contador de columna
                }
            }
        };

        // Sobrecarga de operadores

        // Metodo para sumar dos matrices
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

        // Metodo para restar dos matrices

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
        
        // Metodo para multiplicar matrices
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

        // Declaracion de funciones amigas para poder validar las operaciones
        friend class OperacionesBasicas;
};

// Especializacion de metodo llenarMatriz para caso de matriz con numeros complejos
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

#endif
