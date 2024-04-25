// Ejemplo inicial de una "Function Template" ppt diap 4

#include <iostream>
using namespace std;

// Declaracion y definicion de la funcion tipo Template
template <typename T>
T add(T num1, T num2) {
    return (num1 + num2);
}

int main () {
    int result1;
    double result2;

    // Para los parametros de tipo entero
    result1 = add<int>(2, 3);
    cout << "Resultado para parámetros de tipo entero: " << endl;
    cout << "2 + 3 = " << result1 << endl;

    // Para los parametros de tipo double
    result2 = add<double>(2.2, 3.3);
    cout << "Resultado para parámetros de tipo double: " << endl;
    cout << "2.2 + 3.3 = " << result2 << endl;

    return 0;
}
