// Ejemplo uso de funciones amigas ppt diap 20

#include <iostream>
using namespace std;

class Distance {

    // Definicion de atributo privado meter
    private:
        int meter;

    // Declaracion de una funcion amiga
    friend int addFive(Distance);

    public:
        Distance() : meter(0) {}
};

// Definicion de la funcion addFive()
int addFive(Distance d) {

    // Acceso al atributo privado por medio de la funcion amiga, se modifica meter
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance D;

    // Se llama a la funcion amiga de la clase Distance
    cout << "Distance: " << addFive(D);

    return 0;
}