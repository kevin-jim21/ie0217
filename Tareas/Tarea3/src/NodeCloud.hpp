/**
 * @file NodeCloud.hpp
 * @brief En este headerfile se declara la clase NodeCloud con la cual se crean los nodos de la red entrelazada.
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

#ifndef NODECLOUD_HPP
#define NODECLOUD_HPP

#include <cstring>
#include "HashTable.hpp"

/**
 * @class NodeCloud
 * @brief Clase para instanciar nodos de la lista entrelazada.
 * 
 * Esta clase se encarga de crear todos aquellos nodos los cuales tendran
 * copias de los datos de la HashTable y se almacenaran en una nube. Todos
 * ellos seran entrelazados de forma lineal y tendran un puntero para acceder
 * al nombre y número telefónico que le corresponde en la HashTable.
*/
class NodeCloud {
    private:
        int* nodeIdx;  ///< Nodo asignado a la HashTable.
        HashTable** contactPtr;  ///< Puntero con el que se accede a la HashTable.
        int numberCloud;  ///< Número de telefóno almacenado.

    public:
        char* nameCloud;  ///< Nombre almacenado.
        NodeCloud* next;  ///< Puntero al siguiente nodo de la lista entrelazada.

        /**
        * @brief Constructor de la clase NodeCloud.
        * 
        * @param nodeIdx Index con el que se va a relacionar el nodo individualmente con la HashTable.
        * @param contactPtr Doble puntero que puede acceder a los arrays de nombres y números telefónicos de la HashTable.
        */
        NodeCloud(int* nodeIdx, HashTable** contactPtr);

        /**
        * @brief Destructor de la clase NodeCloud.
        */
        ~NodeCloud(){}

        /**
        * @brief Accede al puntero contactPtr y extrae el nombre del contacto que corresponde a su index.
        */
        void putNameContact();

        /**
        * @brief Accede al puntero contactPtr y extrae el número del contacto que corresponde a su index.
        */
        void putNumberContact();

        /**
        * @brief Muestran los datos que contiene el nodo; de esta forma el usuario puede ver su almacenamiento cloud.
        */
        void showContact();
};

#endif  // NODECLOUD_HPP
