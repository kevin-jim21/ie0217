// Ejemplo de miembros protegidos ppt diap 16

#include <iostream>
#include <string>
using namespace std;

// Definicion clase base
class Animal {
    private:
        string color;

    protected:
        string type;

    public:
        void run() { cout << "I can run -- BASE!" << endl; }
        void eat() { cout << "I can eat!" << endl; }
        void sleep() { cout << "I can sleep!" << endl; }
        void setColor(string clr) { color = clr; }
        string getColor() { return color; }
};

// Definicion de la clase derivada
class Dog : public Animal {
    public:

        // El metodo run() se sobreescribe en la clase derivada
        void run() { cout << "I can run -- DERIVED!" << endl; }

        /* Es posible acceder a type ya que es un atributo protegido de
        Animal y Dog es una clase derivada de Animal.*/
        void setType(string tp) { type = tp; }
        void displayInfo(string c) {
            cout << "I am a " << type << endl;
            cout << "My color is " << c << endl;
        }

        void bark() { cout << "I can bark! Woof woof!!" << endl;}
};

int main() {

    // Se crea un objeto de la clase Dog, derivada de Animal
    Dog dog1;

    // Se aplican los metodos de la clase base (el primero de estos con sobrecarga de funciones)
    dog1.run();
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    // Se aplican los metodos de la clase derivada
    dog1.bark();
    dog1.setType("Doberman");
    dog1.displayInfo(dog1.getColor());

    return 0;
}
