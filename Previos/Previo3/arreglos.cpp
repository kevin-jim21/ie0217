/* Ejemplo presentacion pag 17, programa para imprimir las direcciones de
memoria de cada uno de los elementos de un array.*/

#include <iostream>
using namespace std;

int main() {
    float arreglo[3];

    // Se declara un puntero de tipo flotante
    float *puntero;
    cout << "Displaying adress using arrays: " << endl;

    // Uso de un for para imprimir todas las direcciones del array
    for (int i = 0; i < 3; ++i) {
        cout << "&arreglo[" << i << "] = " << &arreglo[i] << endl;
    }

    // Para hacer un puntero hacia el array tambien se puede usar ptr = &arreglo[0]
    puntero = arreglo;

    cout << "\nDisplaying adress using pointers: " << endl;

    /* Uso de for para imprimir todas las direcciones del array
    utilizando la notacion de puntero.*/
    for (int i = 0; i < 3; ++i) {
        cout << "puntero + " << i << " = " << puntero + i << endl;
    }

    return 0;
}