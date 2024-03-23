// Segundo ejemplo uso de funciones amigas ppt diap 20

#include <iostream>
using namespace std;

// Declarar ClassB para que el compilador no se queje al leer el metodo de ClassA
class ClassB;

class ClassA {
    public:
        // Constructor incializa numA en 12
        ClassA() : numA(12) {}
    
    private:
        int numA;

        // Declaracion de la funcion amiga add
        friend int add(ClassA, ClassB);
};

class ClassB {
    public:

        // Constructor inicializa numB en 1
        ClassB() : numB(1) {}

    private:
        int numB;

        // Declaracion de add como funcion amiga tambien para ClassB
        friend int add(ClassA, ClassB);
};

// Esta funcion ahora podra acceder a  todos los miembros de ClassA y ClassB
int add(ClassA objetcA, ClassB objetcB) {
    return (objetcA.numA + objetcB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;

    // Llamar a la funcion amiga para realizar la suma
    cout << "Sum: " << add(objectA, objectB);

    return 0;
}