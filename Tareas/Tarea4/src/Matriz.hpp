/**
 * @file Matriz.hpp
 * @brief Definición de la template class "Matriz" en donde se define el tamaño de la matriz e introducen sus valores
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

template <class Tipo>
class Matriz {
    private:
        std::vector<std::vector<Tipo>> valores;  // Matriz sera un vector de vectores

    public:
        // Constructor
        Matriz() : {}

        // Destructor
        ~Matriz() {}

        // Metodo para definir las dimensiones de la matriz
        void setDimensiones(int filas, int columnas) {
            valores.resize(filas);  // Ajustar la cantidad de filas

            // Ajustar la cantidad de columnas
            for (int i = 0; i < filas; ++i) {
                valores[i].resize(columnas);
            }
        };
        
        // Metodo para introducir los valores a la matriz
        void llenarMatriz() {
            int j;  // Contador para indicar al usuario las coordenadas del valor que esta ingresando 
            std::vector<Tipo>::iterator itr;  // Crear un iterador para recorrer las filas

            // Repetir el proceso para cada fila
            for (int i = 0; i < filas; ++i) {
                j = 0;  // Inicializar contador de columna

                // Recorrer cada valor
                for (itr = valores[i].begin(); itr != valores[i].end(); ++itr) {
                    std::cout << "Ingrese el valor " << i + 1 << j + 1 << ":" << std::endl;
                    std::getline(std::cin, valores[i][itr]);  // Colocar el valor en la matriz

                    ++j;  // Subir contador de columna
                }
            }
        };
};

#endif
