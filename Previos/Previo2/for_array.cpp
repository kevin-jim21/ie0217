// Ejemplo de recorrer un array con un for presentacion pag 17

#include <iostream>

using namespace std;

int main () {

    // Declarcion de un array con valores enteros
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Uso del for para recorrer el array e imprimir sus valores
    for (int n : num_array) {
        cout << n << " ";
    }

    return 0;
}