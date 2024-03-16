// Primer ejemplo uso de punteros presentacion pag 12

#include <iostream>
using namespace std;

int main() {
    int var = 5;

    // Declarar un puntero de tipo entero
    int* pointVar;

    // Guardar la direccion de var
    pointVar = &var;

    // Imprimir el valor de var
    cout << "var = " << var << endl;

    // Imprimir la direccion en memoria de var
    cout << "Address of var (&var) = " << &var << endl
        << endl;

    // Imprimir puntero
    cout << "pointVar = " << pointVar << endl;

    // Imprimir el contenido de la direccion a la cual apunta pointVar
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;

    return 0;
}