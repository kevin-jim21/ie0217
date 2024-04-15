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

#include "HashTable.hpp"

class NodeCloud {
    private:
        int nodeIdx;  // Numero de nodo
        HashTable* contactPtr;  // Puntero a la estructura
        char** nameCloud;  // Alojar el nombre del contacto
        int* numberCloud;
        NodeCloud* next;  // Puntero al siguiente nodo

    public:
        // Declarar un constructor
        NodeCloud(int nodeIdx, HashTable* contactPtr, NodeCloud* next);

        // Declarar un destructor
        ~NodeCloud(){}

        /* Metodos para acceder a los nombres y numeros de los contactos en el
        struct por medio del puntero y colocarlos en el nodo de la lista entrelazada*/
        void putNameContact();
        void putNumberContact();
};


#endif  // NODECLOUD_HPP
