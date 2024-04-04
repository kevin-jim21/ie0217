// Declaracion de la clase Empleado

#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

class Empleado {

    // Atributos declarados como protegidos
    protected:
        std::string nombre;
        int edad;
        double salario;

    // Metodos declarados como publicos
    public:
        Empleado(std::string _string, int _edad, double _salario);

        // Declaracion de una funcion virtual
        virtual ~Empleado(){}
        virtual double calcularPago() const = 0;  // Metodo virtual puro
        virtual void mostrarDetalles() const;  // Metodo virtual comun
};

#endif // EMPLEADO_HPP