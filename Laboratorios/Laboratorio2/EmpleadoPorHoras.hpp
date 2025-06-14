// Creacion de una segunda clase derivada basada en la clase Empleado

#ifndef EMPLEADOPORHORAS_HPP
#define EMPLEADOPORHORAS_HPP

#include "Empleado.hpp"

class EmpleadoPorHoras : public Empleado {
    private:
        int horasTrabajadas;

    public:
        EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas);
        double calcularPago() const override;  // Aca tambien se reescribe el metodo virtual puro
};

#endif // EMPLEADOPORHORAS_HPP
