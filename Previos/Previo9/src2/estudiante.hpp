// Archivo de cabecera en donde se declara la clase Estudiante

#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>

class Estudiante {
    public:
        Estudiante(const std::string& nombre, int edad);
        void mostrarDatos();  // Metodo para mostrar los datos del estudiante

    private:
        std::string nombre;
        int edad;
        int edad2;   
};

#endif