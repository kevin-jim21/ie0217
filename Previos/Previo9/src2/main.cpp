// Archivo main para el primer ejemplo de creacion y uso de Makefile

#include <iostream>
#include "estudiante.hpp"

int main() {
    Estudiante estudiante("Juan", 20);  // Instancia de la clase Estudiante
    estudiante.mostrarDatos();  // Mostrar los datos del estudiante
    return 0;
}
