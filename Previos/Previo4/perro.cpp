// Ejemplo de herencia POO ppt diap 14

#include <iostream>
using namespace std;

// Creacion de la clase base
class Animal {
    public:
        void eat() {
            cout << "I can eat!" << endl;
        }

        void sleep() {
            cout << "I can sleep!" << endl;
        }
};

/* Creacion de la clase derivada. Esta clase posee los metodos y atributos
que se encuentran en la clase base y ademas, pueden contar con metodos y
atributos propios.*/
class Dog : public Animal {
    public:
        void bark() {
            cout << "I can bark! Woof woof!!" << endl;
        }
};

int main() {
    Dog dog1;

    // Llamar metodos de la clase base
    dog1.eat();
    dog1.sleep();

    // Llamar el metodo de la clase derivada
    dog1.bark();

    return 0;
}