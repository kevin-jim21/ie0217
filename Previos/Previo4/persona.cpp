// Definiciones ejemplo separacion de archivos en POO ppt diap 10

#include "persona.hpp"
using namespace std;

Persona::Persona(string nombre, int edad) {

    // "this->" hace referencia a un valor de la misma clase
    this->nombre = nombre;
    this->edad = edad;
}

// Definicion de los metodos de la clase Persona, declarada en persona.hpp
string Persona::getNombre() {
    return nombre;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}
