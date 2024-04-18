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

void addContact(HashTable** Contact, NodeCloud* &CloudContact, int* size) {
    NodeCloud* newNode;
    char* newName;
    int newNumber;
    int i = 0;
    bool find = false;
    size_t lenName;

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

        // Entrelazar a la lista con el nodo HEAD
        newNode->next = CloudContact;
        CloudContact = newNode;
        std::cout << "El contacto ha sido agregado correctamente en la nube." << std::endl;


        // Eliminar memoria reservada para la entrada
        delete [] newName;
    }

};

void removeContact(HashTable** Contact, NodeCloud* &CloudContact, int* size) {
    char* deleteName;
    int i = 0;
    bool find = false;
    int option;

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

        // Preguntar al usuario si quiere eliminarlo tambien de la nube
        std::cout << "Si desea eliminar también en la nube, digite 1. Sino, digite 0." << std::endl;
        std::cin >> option;

        free((*Contact)->name[i]);  // Liberar la memoria del nombre que se elimina
        (*size)--;  // Cambiar el tamano del bloque de memoria

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

        if (option == 1) {
            // Eliminar nodo correspondiente a lista entre lazada
            NodeCloud* currentNode = CloudContact;
            NodeCloud* previusNode = nullptr;
            /* Se utilizan dos punteros temporales para recorrer la lista entrelazada nodo por nodo
            hasta encontrar el nodo que contiene el nombre del contacto que se quiere eliminar*/

            // Primero hay que buscar el nodo que se desea eliminar desplazandolos uno a uno
            while (currentNode != nullptr && strcmp(currentNode->nameCloud, deleteName)) {
                previusNode = currentNode;
                currentNode = currentNode->next;
            }

            // Si el valor currentNode no termina en nullptr, significa que se encontro el nodo
            if (currentNode != nullptr) {

                // Si el valor de previusNode termina en nullptr, significa que el nodo es el primero de la lista
                if (previusNode == nullptr) {
                    CloudContact = currentNode->next;
                }

                // Para el otro caso, significa que el nodo esta en medio o al final de la lista
                else {
                    previusNode->next = currentNode->next;
                }
                

                delete currentNode;  // Liberar la memoria
                currentNode = nullptr;  // Evitar problemas por puntero colgante
                std::cout << "El contacto ha sido borrado correctamente de la nube." << std::endl;
            }
        }

    }
    else {
        std::cout << "¡Ups! Este nombre no está en la agenda." << std::endl;
    }
    delete [] deleteName;
};

void printAll(HashTable** Contact, NodeCloud* CloudContact, int size) {
    std::cout << "\nCONTACTOS ALMACENAMIENTO:\n" << std::endl;
        
    if (!size) {
        std::cout << "La lista de contactos en el almacenamiento está vacío." << std::endl;
    }
    else {
        // Bucle para leer los contactos de almacenamiento local
        for (int i = 0; i < size; ++i) {
            std::cout << "\n" << (*Contact)->name[i] << std::endl;
            std::cout << (*Contact)->number[i] << std::endl;
        }
    }
    
    std::cout << "\nCONTACTOS NUBE:\n" << std::endl;
    if (CloudContact == nullptr) {
        std::cout << "La nube de contactos está vacía." << std::endl;
    }
    else {
        // Bucle para leer los contactos de almacenamiento en la nube
        while (CloudContact != nullptr) {
            CloudContact->showContact();
            CloudContact = CloudContact->next;
        }
    }
    
};

void printLocal(HashTable** Contact, int size) {
    std::cout << "\nCONTACTOS:\n" << std::endl;

    if (!size) {
        std::cout << "La lista de contactos en el almacenamiento está vacío." << std::endl;
    }
    else {
        // Bucle para leer los contactos
        for (int i = 0; i < size; ++i) {
            std::cout << "\n" << (*Contact)->name[i] << std::endl;
            std::cout << (*Contact)->number[i] << std::endl;
        }
    }
};

void sortContacts(HashTable** Contact, NodeCloud* &CloudContact, int size) {
    // Ordenar los contactos del almacenamiento local (metodo Insertion Sort)
    for (int i = 1; i < size; ++i) {
        char* currentName;

        // Tomar el primer caracter del nombre actual y compararlo con los que le anteceden
        currentName = (*Contact)->name[i];
        int j = i - 1;

        // Bucle para comparar cada paso, las letras iniciales de los nombres (comparacion valor ascii)
        while (j >= 0 && strcmp(currentName, (*Contact)->name[j]) < 0) {
            (*Contact)->name[j + 1] = (*Contact)->name[j];
            j--;
        }

        (*Contact)->name[j + 1] = currentName;
    }

    // Ordenar los contactos de la nube (metodo Insertion Sort)
    if (CloudContact == nullptr || CloudContact->next == nullptr) {
        // En este caso la lista ya esta ordenada
    }

    else {
        NodeCloud* sortCloud = nullptr;  // Puntero auxiliar para ordenar nodos

        while (CloudContact != nullptr) {
            NodeCloud* currentNode = CloudContact;  // Tomar el primer nodo
            CloudContact = CloudContact->next;  // Avanzar al siguiente nodo

            if (sortCloud == nullptr || strcmp(currentNode->nameCloud, sortCloud->nameCloud) < 0) {
                // Colocar al principio el nombre actual siempre que sus caracteres ascii sean menores al nombre comparado
                currentNode->next = sortCloud;
                sortCloud = currentNode;
            }
            else {
                // De no ser asi, buscar la posicion correcta para colocar el nodo
                NodeCloud* tempNode = sortCloud;  // Nodo temporal para buscar pos

                // Al encontrar posicion sale del bucle y reenlaza los nodos
                while (tempNode->next != nullptr && strcmp(tempNode->next->nameCloud, currentNode->nameCloud) < 0) {
                    tempNode = tempNode->next;
                }
                currentNode->next = tempNode->next;
                tempNode->next = currentNode;
            }
        }
        CloudContact = sortCloud;  // Actualizar la cabeza de la lista original a la nueva cabeza de la lista ordenada
    }

};
