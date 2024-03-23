// Ejemplo de herencia jerarquica ppt diap 18

#include <iostream>
using namespace std;

// Se define la clase base Animal
class Animal {
    public:
        void info() { cout << "I am an animal." << endl; }
};

// Se define una primera clase derivada Dog
class Dog : public Animal {
    public:
        void bark() { cout << "I am a Dog. Woof woof." << endl; }
};

/* Se define una segunda clase derivada Cat. De esta forma se demuestra que
en C++ una clase base puede derivar mas de una clase. A este principio se le
conoce como herencia jerarquica.*/
class Cat : public Animal {
    public:
        void meow() { cout << "I am a Cat. Meow." << endl; }
};

int main() {

    // Se crea un objeto de la clase Dog
    Dog dog1;
    cout << "Dog Class:" << endl;

    // Se utilizan metodos de la clase base y derivada
    dog1.info();
    dog1.bark();

    // Se crea un objeto de la clase Cat
    Cat cat1;
    cout << "\nCat Class:" << endl;

    // Se utilizan metodos de la clase base y derivada
    cat1.info();
    cat1.meow();
}
