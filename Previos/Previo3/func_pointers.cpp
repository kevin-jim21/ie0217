// Ejemplo de pasar parametros por referencia con punteros presentacion pag 20

#include <iostream>
using namespace std;

// Funcion que intercambia los valores de dos variables
void swap(int* n1, int* n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    int a = 1, b = 2;

    // Imprimir valores de a y b antes de la la funcion swap
    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    /* Las direcciones de memoria de a y b son los parametros que se
    ingresaran a la funcion, los cuales se imprimen a continuacion.*/
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;

    // Llamar a la funcion swap
    swap (&a, &b);

    // Imprimir los valores de a y b despues de la funcion swap
    cout << "After swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}