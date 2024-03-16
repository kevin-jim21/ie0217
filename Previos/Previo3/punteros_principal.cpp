// Ejemplo para comprender el funcionamiento de los punteros

#include <iostream>
using namespace std;

int main() {
    int var = 5;  // Variable de tipo entero
    int* pointVar;  // Variable de tipo puntero tipo entero

    // pointVar obtiene la direccion de memoria de la variable var
    pointVar = &var;

    // Valor de var
    cout << "var =  " << var << endl;

    // Direccion donde se encuentra el valor de var
    cout << "Adress of var (&var) = " << &var << endl;

    // Valor del puntero que apunta hacia la direccion &var
    cout << "pointVar = " << pointVar << endl;

    // Contenido de la direccion hacia la cual apunta pointVar
    cout << "Content of the adress pointed to by pointVar (*pointVar) = " << *pointVar << endl;
    
    
    return 0;
    }