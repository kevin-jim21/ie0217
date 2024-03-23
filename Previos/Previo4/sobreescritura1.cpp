// Primer ejemplo de sobreescritura de funciones en herencia ppt diap 15

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

/* En este caso, al aplicar print() a un objeto de la clase derivada,
el compilador interpretara que se trata del metodo de la clase derivada. A
esto se lo conoce como sobreescritura de funciones en herencia. */
int main() {
    Derived derived1;
    derived1.print();

    return 0;
}
