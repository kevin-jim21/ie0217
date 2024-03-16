// Ejemplo presentacion pag 13 punteros

#include <iostream>
using namespace std;
int main() {
    int var = 5;
    int* pointVar;

    // Guarda la direccion de var
    pointVar = &var;

    // Imprimir valor de var
    cout << "var = " << var << endl;

    // Imprimir el valor de la direccion a la que apunta pointVar
    cout << "*pointVar = " << *pointVar << endl;

    cout << "Changing value of var to 7:" << endl;

    // Cambiar el valor de var a 7
    var = 7;

    // Imprimir valor de var
    cout << "var = " << var << endl;

    // Imprimir el valor de var a traves del puntero *pointVar
    cout << "pointVar = " << *pointVar << endl;

    cout << "Changing value of *pointVar to 16:" << endl;

    // Cambiar al valor de var a 16 desde puntero *pointVar
    *pointVar = 16;

    // Imprimir el valor de var
    cout << "var = " << var << endl;

    // Imprimir el valor de var desde el puntero
    cout << "*pointVar = " << *pointVar << endl;
    
    return 0;
}