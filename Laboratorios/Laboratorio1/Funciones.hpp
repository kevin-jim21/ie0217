// Archivo para declarar las funciones en el main
#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP

#include "Contacto.hpp"

// Declaracion de las funciones
void agregarContacto(Contacto listaContactos[], int &numContactos);
void mostrarContactos(const Contacto listaContactos[], int numContactos);
void buscarContacto(const Contacto listaContactos[], int numContactos);

/* Se utiliza const para definir "variables constantes" y & en la funcion "agregarContacto"
para que dentro de esta funcion se pueda modificar el contenido de "numContactos" en el main.*/

#endif // FUNCIONES_HPP
