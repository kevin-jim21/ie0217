// Ejemplo para comprender donde se guardan las variables en memoria, presentacion pag 10

#include <iostream>
using namespace std;

int main()
{
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    /* Al utilizar el caracter "&" delante de una variable, se hace referencia
    a la direccion de memoria en la que reside la variable.*/

    // Imprimir direcciones de memoria de las variables
    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;
    cout << "Address of var3: " << &var3 << endl;
}