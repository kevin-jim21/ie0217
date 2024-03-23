// Ejemplo de funciones virtuales en C++ ppt diap 22

#include <iostream>
using namespace std;

class Base {
    public:

        /* Al definir esta funcion como "virtual" se obliga a las clases
        derivadas a reescribir este metodo. Este es el concepto de funcion virtual*/
        virtual void print() {
            cout << "Base function" << endl;
        }
};

class Derived : public Base {
    public:
        void print() {
            cout << "Derived Function" << endl;
        }
};

int main() {
    Derived derived1;

    // Se crea un puntero de tipo base que apuntara a derived1
    Base* base1 = &derived1;

    // Se llama a la funcion de la clase derivada
    base1->print();

    return 0;
}