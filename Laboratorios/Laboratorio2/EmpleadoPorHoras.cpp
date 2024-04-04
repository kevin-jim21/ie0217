// Definicion de la clase derivada EmpleadoPorHoras basada en Empleado
#include "EmpleadoPorHoras.hpp"

// Constructor de la clase derivada EmpleadoPorHoras
EmpleadoPorHoras::EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas)
    : Empleado(_nombre, _edad, _salario), horasTrabajadas(_horasTrabajadas) {}

    /* En este caso, horasTrabajadas va a ser un atributo propio de la clase EmpleadoPorHoras.*/

// Se reescribe el metodo virtual puro
double EmpleadoPorHoras::calcularPago() const {
    return salario * horasTrabajadas;
}
