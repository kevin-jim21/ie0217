// Archivo de codigo fuente en donde se define el metodo de la clase Estudiante

#include <iostream>
#include "estudiante.hpp"

Estudiante::Estudiante(
    const std::string& nombre, int edad
) : nombre(nombre), edad(edad) {}

// Definicion de mostrarDatos()
void Estudiante::mostrarDatos() {
    std::cout << "Nombre: " << nombre;
    std::cout << ", Edad: " << edad << std::endl;
}
