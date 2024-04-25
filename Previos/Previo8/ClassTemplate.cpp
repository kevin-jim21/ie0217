// Ejemplo inicial de una "Class Template" ppt diap 7

#include <iostream>
using namespace std;

// Declaracion de una clase de tipo Template
template <class T>
class Number {
    private:
        T num;  // Variable de tipo T

    public:
        Number (T n) : num(n) {}  // En el constructor se declara que se recibe parametro tipo T

        T getnum() {
            return num;
        }
};

int main () {
    // Forma de instanciar para crear un objeto de tipo entero para la clase tipo Template
    Number<int> numberInt(7);

    // Forma de instanciar para crear un objeto de tipo double para la clase tipo Template
    Number<double> numberDouble(7.7);

    cout << "Número de tipo entero: " << numberInt.getnum() << endl;
    cout << "Número de tipo double: " << numberDouble.getnum() << endl;

    return 0;
}
