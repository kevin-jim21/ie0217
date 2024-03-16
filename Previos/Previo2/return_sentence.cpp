// Ejemplo de uso del return es las funciones pag 24

#include <iostream>
using namespace std;

/* Las funciones en C++ van a ser capaces de devolver un valor excepto cuando
son de tipo "void".*/

// Declaracion de la funcion
int add(int a, int b) {
    return (a + b);
}

int main() {

    int sum;

    // LLamar a la funcion y guardar el valor retornado en sum
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;

    return 0;
}