// Headerfile ejemplo separacion de archivos en POO ppt diap 10

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

// Declaracion de una clase
class Persona {
    private:
        string nombre;
        int edad;
    
    public:
        Persona(string nombre, int edad);
        string getNombre();
        int getEdad();
        void setEdad(int edad);
};

#endif // PERSONA_H
