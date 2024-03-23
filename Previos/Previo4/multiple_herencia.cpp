// Ejemplo de herencia multiple ppt diap 18

#include <iostream>
using namespace std;

// Se crea una clase base para Mamiferos
class Mammal {
    public:
        Mammal() {
            cout << "Mammals can give direct birth." << endl;
        }
};

// Se crea una clase base para animales que pueden volar
class WingedAnimal {
    public:
        WingedAnimal() {
            cout << "Winged animal can flap." << endl;
        }
};

/* Se crea una clase para los murcielagos, la cual deriva de Mammal (mamifero)
y de WingedAnimal (animal con alas). A esto se le conoce como herencia multiple.*/
class Bat: public Mammal, public WingedAnimal {};

int main() {
    Bat b1;

    return 0;
}