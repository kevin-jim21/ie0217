// Ejemplo de contenedor adaptado tipo pila (ppt diap 8)

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> numbers;  // Declarar pila de enteros

    // Insertar elementos a la pila
    numbers.push(1);
    numbers.push(100);
    numbers.push(10);

    cout << "Numbers are: ";

    /* Para acceder a todos los elementos de la pila, se obtiene el
    elemento superior (top) y despues de obtenerlo se elimina*/
    while(!numbers.empty()) {
        // Repetir hasta que la pila quede vacia
        cout << numbers.top() << ", ";

        numbers.pop();
    }

    return 0;
}