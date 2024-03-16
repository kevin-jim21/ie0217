// Ejemplo de conversion de dato explicita presentacion pag 4

#include <iostream>
using namespace std;

int main() {
    double num_double = 3.56;

    /* En C++ al convertir un valor de tipo double aun tipo de valor que
    posee menos precision (como lo es double a entero), el casting se hace
    de forma explicita (es decir, hay que indicarlo en el codigo).*/

    // Imprimir valor de num_double antes del casting
    cout << "num_double = " << num_double << endl;

    // Aplicar casting para pasar de double a entero
    int num_int_1 = (int)num_double;

    // Imprimir valor de num_double despues del casting
    cout << "num_int1 = " << num_int_1 << endl;

    // Otra alternativa para aplicar casting
    int num_int2 = int(num_double);
    
    // Imprimir valor de num_double obtenido despues de este otro casting
    cout << "num_int2 = " << num_int2 << endl;

    return 0;
}