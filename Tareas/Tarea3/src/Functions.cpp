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
#include <cstring>

void addContact(HashTable** Contact, NodeCloud* &CloudContact, int* size) {
    NodeCloud* newNode;
    char* newName;
    int newNumber;
    int i = 0;  // Contador para bucle while
    bool find = false;  // Booleano que indica si se encontro o no el contacto
    size_t lenName; // Reservar espacio en cada slot del array de strings

    std::cin.ignore();  // Limpiar entrada
    newName = new char[20];  // Reservar la memoria para la entrada
    
    std::cout << "Ingrese el nombre del nuevo contacto" << std::endl;
    std::cin.getline(newName, 20);

    std::cout << "Ingrese el número del nuevo contacto" << std::endl;
    std::cin >> newNumber;

    // Primero debe buscar en el array de nombres si ya existe un contacto con este nombre
    while (i < *size) {
        if (strcmp(newName, (*Contact)->name[i]) == 0) {
            // Si se encontro una vez, romper el ciclo y colocar find como verdadero
            find = true;
            break;
        }
        else{}
        ++i;  // Aumentar contador
    }

    // Actuar de acuerdo a si se encontro o no el nombre del contacto
    if (find) {
        std::cout << "Ya existe un contacto con este nombre. Por favor, intente poner un nuevo nombre." << std::endl;
        
        // Eliminar memoria reservada para la entrada
        delete [] newName;
    }
    else {
        // Agregar contacto al HashTable
        (*size)++;  // Aumentar el tamano del bloque de memoria para hacer realloc
        lenName = strlen(newName);

        *Contact = (HashTable*)realloc(*Contact, *size * sizeof(HashTable));  // Modificar el bloque de memoria del HashTable
        if (*Contact == NULL) {
        std::cout << "Fallo en la reserva de memoria dinámica" << std::endl;
        exit(1);
        }
        (*Contact)->name = (char**)realloc((*Contact)->name, *size * sizeof(char*));  // Modificar el bloque de memoria del array name
        if ((*Contact)->name == NULL) {
        std::cout << "Fallo en la reserva de memoria dinámica" << std::endl;
        exit(1);
        }
        (*Contact)->name[*size - 1] = (char*)malloc(lenName * sizeof(char) + 1);  // Reservar memoria para el nombre dentro del array
        if ((*Contact)->name[*size - 1] == NULL) {
        std::cout << "Fallo en la reserva de memoria dinámica" << std::endl;
        exit(1);
        }
        (*Contact)->number = (int*)realloc((*Contact)->number, *size * sizeof(int));  // Reservar memoria para el nombre dentro del array
        if ((*Contact)->number == NULL) {
        std::cout << "Fallo en la reserva de memoria dinámica" << std::endl;
        exit(1);
        }
        // Anadir los datos los arrays
        std::strcpy((*Contact)->name[*size - 1], newName);
        (*Contact)->number[*size - 1] = newNumber;
        std::cout << "El contacto ha sido agregado correctamente en el almacenamiento." << std::endl;

        // Agregar contacto a la lista entrelazada
        newNode = new NodeCloud(size, Contact);  // Reservar memoria para el nuevo nodo

        // Anadir datos a los nodos
        newNode->putNameContact();
        newNode->putNumberContact();

        newNode->next = CloudContact;
        CloudContact = newNode;
        std::cout << "El contacto ha sido agregado correctamente en la nube." << std::endl;


        // Eliminar memoria reservada para la entrada
        delete [] newName;
    }

};

void removeContact(HashTable** Contact, NodeCloud* CloudContact, int* size) {
    char* deleteName;
    int i = 0;  // Contador para bucle while
    bool find = false;  // Booleano que indica si se encontro o no el contacto
    char** tempName;
    int* tempNumber;

    std::cin.ignore();  // Limpiar entrada
    deleteName = new char[20];  // Reservar la memoria para la entrada

    std::cout << "Ingrese el nombre del contacto que desea eliminar" << std::endl;
    std::cin >> deleteName;

    // Primero debe buscar en el array de nombres si ya existe un contacto con este nombre
    while (i < *size) {
        if (strcmp(deleteName, (*Contact)->name[i]) == 0) {
            // Si se encontro una vez, romper el ciclo y colocar find como verdadero
            find = true;
            break;
        }
        else{}
        ++i;  // Aumentar contador
    }


    // Actuar de acuerdo a si se encontro o no el nombre del contacto
    if (find) {
        (*size)--;

        // Partir del valor que tomo i, y desplazar todos los elementos posteriores una vez a la izquierda
        for (; i < (*size); ++i) {
            (*Contact)->name[i] = (*Contact)->name[i + 1];
            (*Contact)->number[i] = (*Contact)->number[i + 1];
        }

        // Si el array queda sin elementos, hacer un malloc para asignar de nuevo espacio de memoria
        if (*size == 0) {
            (*Contact)->name = (char**)malloc(*size * sizeof(char*));  // Puntero hacia el array principal
            if ((*Contact)->name == NULL) {
                std::cout << "Fallo en la reserva de memoria dinámica" << std::endl;
                exit(1);
            }

            (*Contact)->number = (int*)malloc(*size * sizeof(int));
            if ((*Contact)->number == NULL) {
                std::cout << "Fallo en la reserva de memoria dinámica" << std::endl;
                exit(1);
            }

        }

        // Caso contrario, se utiliza realloc para modificar el bloque de memoria
        else {
            // Eliminar el elemento vacio que queda al final
            (*Contact)->name = (char**)realloc((*Contact)->name, *size * sizeof(char*));
            if ((*Contact)->name == NULL) {
                std::cout << "Fallo en la reserva de memoria dinámica" << std::endl;
                exit(1);
            }
            (*Contact)->number = (int*)realloc((*Contact)->number, *size * sizeof(int));
            if ((*Contact)->number == NULL) {
                std::cout << "Fallo en la reserva de memoria dinámica" << std::endl;
                exit(1);
            }
        }
        std::cout << "El contacto ha sido borrado correctamente del almacenamiento." << std::endl;

    }
    else {
        std::cout << "¡Ups! Este nombre no está en la agenda." << std::endl;
    }
    delete [] deleteName;
};

void printAll(HashTable** Contact, NodeCloud* CloudContact, int size) {
    std::cout << "\nCONTACTOS ALMACENAMIENTO:\n" << std::endl;
    // Bucle para leer los contactos
    for (int i = 0; i < size; ++i) {
        std::cout << "\n" << (*Contact)->name[i] << std::endl;
        std::cout << (*Contact)->number[i] << std::endl;
    }
    
    std::cout << "\nCONTACTOS NUBE:\n" << std::endl;
    if (CloudContact == nullptr) {
        std::cout << "La nube de contactos está vacía." << std::endl;
    }
    else {
        while (CloudContact != nullptr) {
            CloudContact->showContact();
            CloudContact = CloudContact->next;
        }
    }
    
};

void const printLocal(HashTable** Contact, int size) {
    std::cout << "\nCONTACTOS:\n" << std::endl;

    // Bucle para leer los contactos
    for (int i = 0; i < size; ++i) {
        std::cout << "\n" << (*Contact)->name[i] << std::endl;
        std::cout << (*Contact)->number[i] << std::endl;
    }
};