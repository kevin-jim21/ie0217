#include "EmpleadoAsalariado.hpp"

// Instancia
EmpleadoAsalariado::EmpleadoAsalariado(std::string _nombre, int _edad, double _salario)
    : Empleado (_nombre, _edad, _salario) {}

// Metodo de EmpleadoAsalariado
double EmpleadoAsalariado::calcularPago() const {
    return salario;
}
