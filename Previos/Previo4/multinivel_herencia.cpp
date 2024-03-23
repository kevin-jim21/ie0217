// Ejemplo de herencia multinivel ppt diap 18

#include <iostream>
using namespace std;

// Se crea una clase base A
class A {
    public:
        void display() {
            cout << "Base class content.";
        }
};

// La clase B deriva de la clase A
class B : public A {};

/* Ahora la clase C, deriva de la clase B que a su vez derivo de la clase A,
a esta forma de herencia en C++ se le conoce como herencia multinivel.*/
class C : public B {};

int main() {
    /* En este caso se instancia un objeto de la clase C y se le aplica un
    metodo que pertenece a la clase A, demostrando la utilidad de la herencia
    multinivel.*/
    C obj;
    obj.display();

    return 0;
}