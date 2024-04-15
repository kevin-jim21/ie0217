/**
 * @file Functions.cpp
 * @brief En este archivo se definen las funciones que se van a utilizar en el main.
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

void addContact(HashTable* Contact) {
    std::string newName;
    int newNumber;

    std::cout << "Ingrese el nombre del nuevo contacto" << std::endl;
    std::getline(std::cin, newName);

    std::cout << "Ingrese el número del nuevo contacto" << std::endl;
    std::cin >> newNumber;

    // Primero debe buscar en el array de nombres si ya existe un contacto con este nombre

};

void removeContact(HashTable* Contact) {
    std::string deleteName;

    std::cout << "Ingrese el nombre del contacto que desea eliminar" << std::endl;
    std::getline(std::cin, deleteName);
};

void printAll(NodeCloud* CloudContact) {};
void printLocal(HashTable* Contact) {};