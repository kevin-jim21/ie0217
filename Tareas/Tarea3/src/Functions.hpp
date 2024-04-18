/**
 * @file Functions.hpp
 * @brief En este headerfile se declaran las funciones que se van a utilizar en el main.
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

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include "NodeCloud.hpp"

/**
 * @brief Función que añade contactos a la HashTable y a la lista entrelazada.
 * 
 * Esta función se encarga de manipular el bloque de memoria de la HashTable y
 * de sus arrays en tiempo de ejecución para que se puedan añadir contactos
 * de la forma más eficiente posible. El size toma un papel importante, ya que
 * este ademas de ser el contador de contactos y utilizarse para modificar los
 * bloques de memoria, va a utilizarse de referencia para asignar los indices en
 * la HashTable.
 * 
 * @param Contact Doble puntero hacia la estructura de tipo Hashtable. El doble puntero permite manipularla.
 * @param CloudContact Puntero a nodo "HEAD" de la lista entrelazada.
 * @param size Puntero hacia un entero el cual determina cuantos contactos existen hasta el momento.
*/
void addContact(HashTable** Contact, NodeCloud* &CloudContact, int* size);

/**
 * @brief Función que elimina contactos de la HashTable y a la lista entrelazada.
 * 
 * Esta función elimina contactos del almacenamiento local del dispositivo y
 * también del almacenamiento cloud, este último sólamente en los casos en los
 * que el usuario así lo desea. De esta misma forma, esta función se modifica
 * los bloques de memoria de manera dinámica y se encarga de volver a enlazar
 * la lista entrelazada después de eliminar alguno de sus nodos
 * 
 * @param Contact Doble puntero hacia la estructura de tipo Hashtable. El doble puntero permite manipularla.
 * @param CloudContact Puntero a nodo "HEAD" de la lista entrelazada.
 * @param size Puntero hacia un entero el cual determina cuantos contactos existen hasta el momento.
*/
void removeContact(HashTable** Contact, NodeCloud* &CloudContact, int* size);

/**
 * @brief Función que imprime los contactos almacenados localmente y en el cloud.
 * 
 * Esta función se encarga de mostrar todos los contactos almacenados tanto
 * localmente como en la nube. Esto se realiza con el fin de que el usuario
 * pueda monitorear cuales contactos están almacenados en el cloud y su
 * asociación con el almacenamiento local.
 * 
 * @param Contact Doble puntero hacia la estructura de tipo Hashtable. El doble puntero permite manipularla.
 * @param CloudContact Puntero a nodo "HEAD" de la lista entrelazada.
 * @param size Entero el cual determina cuantos contactos existen hasta el momento.
*/
void printAll(HashTable** Contact, NodeCloud* CloudContact, int size);

/**
 * @brief Función que imprime los contactos almacenados localmente.
 * 
 * Esta función corresponde a la agenda con la que cuenta un celular común,
 * en donde puede ver todos sus contactos ordenados por orden alfabético y
 * con su número telefónico respectivo.
 * 
 * @param Contact Doble puntero hacia la estructura de tipo Hashtable. El doble puntero permite manipularla.
 * @param size Entero el cual determina cuantos contactos existen hasta el momento.
*/
void printLocal(HashTable** Contact, int size);

/**
 * @brief Función que ordena alfabéticamente los contactos guardados por el usuario.
 * 
 * Esta función se utiliza antes de mostrar las listas de contactos al usuario
 * y su objetivo es el de mostrar al usuario todos sus contactos (tanto en el
 * almacenamiento local como en el almacenamiento cloud) de forma alfabética.
 * Cada vez que se utiliza esta función, se manipula tanto la HashTable como
 * la lista entrelazada
 * 
 * @param Contact Doble puntero hacia la estructura de tipo Hashtable. El doble puntero permite manipularla.
 * @param CloudContact Puntero a nodo "HEAD" de la lista entrelazada.
 * @param size Entero el cual determina cuantos contactos existen hasta el momento.
*/
void sortContacts(HashTable** Contact, NodeCloud* &CloudContact, int size);  // Ordenar los contactos en orden alfabetico 

#endif  // FUNCTIONS_HPP
