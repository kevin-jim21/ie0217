// Declaracion de la clase base Empleado

#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

class Empleado {

    // Atributos declarados como protegidosW
    protected:
        std::string nombre;
        int edad;
        double salario;

    // Metodos declarados como publicos
    public:
        Empleado(std::string _string, int _edad, double _salario);

        // Declaracion de un destructor
        virtual ~Empleado(){}

        // Declaracion de metodos virtuales
        virtual double calcularPago() const = 0;  // Metodo virtual puro
        virtual void mostrarDetalles() const;  // Metodo virtual comun

        /* Al crearse un metodo virtual puro, siempre que se hereda es necesario sobreescribir
        el metodo en la clase derivada.*/
};

#endif // EMPLEADO_HPP
