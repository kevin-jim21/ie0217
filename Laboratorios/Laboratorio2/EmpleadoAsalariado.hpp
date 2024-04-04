// Declaracion de una clase derivada basada en la clase Empleado

#ifndef EMPLEADOASALARIADO_HPP
#define EMPLEADOASALARIADO_HPP

#include "Empleado.hpp"

/* Al heredar de manera publica se mantienen los metodos y atributos en el 
estado (publico, protegido o privado) en el que fueron designados en la clase original*/
class EmpleadoAsalariado : public Empleado {

    public:
        EmpleadoAsalariado(std::string _nombre, int _edad, double _salario);
        double calcularPago() const override;  // Se sobreescribe el metodo virtual puro de la clase base
};

#endif  // EMPLEADOASALARIADO_HPP