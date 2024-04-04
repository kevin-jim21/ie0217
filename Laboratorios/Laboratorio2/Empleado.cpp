// Definicion de la clase base Empleado

#include "Empleado.hpp"
#include <iostream>

// Constructor de la clase EmpleadoW
Empleado::Empleado(std::string _nombre, int _edad, double _salario) :
    nombre(_nombre), edad(_edad), salario(_salario) {}  // Parametros que recibo al momento de instanciar

// Definicion del metodo virtual
void Empleado::mostrarDetalles() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Salario: " << salario << std::endl;
}
