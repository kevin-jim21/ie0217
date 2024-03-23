// Main ejemplo separacion de archivos en POO ppt diap 10

#include <iostream>
#include "persona.hpp"

using namespace std;

int main() {
    // Instancia de Persona
    Persona p("Juan", 25);

    // Imprmir el nombre y edad del objeto p
    cout << "Nombre: " << p.getNombre() <<endl;
    cout << "Edad: " << p.getEdad() <<endl;

    // Cambiar la edad de p
    p.setEdad(26);

    //Imprimir nueva edad
    cout<< "Nueva edad: " << p.getEdad() << endl;

    return 0;
}

