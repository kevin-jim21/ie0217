// Ejemplo de clases amigas ppt diap 21

#include <iostream>
using namespace std;

class ClassA {
    private:
        int numA;

        // Declaracion de ClassB como funcion amiga
        friend class ClassB;

    public:
        // Constructor incializa numA en 12
        ClassA() : numA(12) {}
};

class ClassB {
    private:
        int numB;

    public:

        // Constructor inicializa numB en 1
        ClassB() : numB(1) {}

        // Metodo add para sumar numA (atributo privado de ClassA) y numB
        int add() {
            ClassA objectA;
            return objectA.numA + numB;
        }
};

int main() {
    // Se crea un objeto de ClassB
    ClassB objectB;

    // Se utiliza el metodo add() de ClassB
    cout << "Sum: " << objectB.add();
    return 0;
}