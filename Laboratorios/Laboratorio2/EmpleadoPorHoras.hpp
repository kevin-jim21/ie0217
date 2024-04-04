// Creacion de una segunda clase derivada basada en la clase Empleado

#ifndef EMPLEADOPORHORAS_HPP
#define EMPLEADOPORHORAS_HPP

#include "Empleado.hpp"

class EmpleadoPorHoras : public Empleado {
    private:
        int horasTrabajadas;

    public:
        EmpleadoPorHoras(std::string _nombre, int _edad, double _salario, int _horasTrabajadas);
        
        // Como fue declarado como un metodo virtual puro, se debe sobreescribir en la clase derivada
        double calcularPago() const override;
};

#endif // EMPLEADOPORHORAS_HPP
