// Ejemplo de conversion de dato implicita presentacion pag 4

#include <iostream>
using namespace std;

int main() {
    int num_int = 9;
    double num_double;

    /* Al asignar un valor de tipo entero a una variable declarada como
    double, como double abarca mas espacio de memoria, es posible que 
    num_int se convierta de entero a double sin necesidad de que se indique
    en el codigo, a esto se le conoce como conversion implicita.*/

    num_double = num_int;

    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;

    return 0;
}