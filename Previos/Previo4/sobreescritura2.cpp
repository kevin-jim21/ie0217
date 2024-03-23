// Segundo ejemplo de sobreescritura de funciones en herencia ppt diap 15

#include <iostream>
using namespace std;

class Base {

    // Creacion de metodo publico en la clase base
    public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {

    // Creacion de metodo publico en la clase derivada
    public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1, derived2;

    // En este caso se ejecutara el bloque logico dentro del metodo de la clase derivada
    derived1.print();

    // En este caso, se ejecutara el bloque logico dentro del metodo de la clase base
    derived2.Base::print();

    return 0;
}
