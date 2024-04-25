// Ejemplo de una "Class Template" que recibe mas de un parametro ppt diap 10

#include <iostream>
using namespace std;

// Se ingresan multiples parametros y el ultimo por defecto
template <class T, class U, class V = char>  // Si no se especifica el "V", va a tomarse como un tipo char
class ClassTemplate {
    private:
        T var1;
        U var2;
        V var3;

    public:
        ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {} // Constructor

        void printVar() {
            cout << "var1 = " << var1 << endl;
            cout << "var2 = " << var2 << endl;
            cout << "var3 = " << var3 << endl;
        }
};

int main() {
    // Crear un objeto con tipos entero, double y char e imprimir variables
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "Obj1 valores: " << endl;
    obj1.printVar();

    // Crear un objeto con tipos entero, double y booleano e imprimir variables
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "\nObj2 valores: " << endl;
    obj2.printVar();

    return 0;
}