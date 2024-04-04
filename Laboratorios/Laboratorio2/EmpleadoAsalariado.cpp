// Definicion de la clase EmpleadoAsalariado basada en Empleado

#include "EmpleadoAsalariado.hpp"

// Constructor de la clase EmpleadoAsalariado
EmpleadoAsalariado::EmpleadoAsalariado(std::string _nombre, int _edad, double _salario)
    : Empleado (_nombre, _edad, _salario) {}

// Metodo de EmpleadoAsalariado
double EmpleadoAsalariado::calcularPago() const {
    return salario;
}
