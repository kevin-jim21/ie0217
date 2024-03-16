// Ejemplo de sobrecarga de funciones presentacion pag 27

#include <iostream>
using namespace std;

/* Este script presente una demostracion de que en C++ se pueden definir
funciones que presentan el mismo nombre, y van a poder utilizarse sin
obtener errores mientras que no sean del mismo tipo y/o no reciban
la misma cantidad y los mismos tipos de parametros.*/

// Se define una funcion que recibe un parametro de tipo flotante
float absolute(float var){
    if (var < 0.0)
        // Si el valor es negativo le quita el menos
        var = -var;

    return var;
}

// Se define una funcion con el mismo nombre que recibe un entero
int absolute(int var) {
    if (var < 0)
        var = -var;

    return var;
}

int main() {

    // Llamar fucion de tipo entero
    cout << "Absolute value of -5 = " << absolute(-5) << endl;

    // Llamar funcion de tipo flotante
    cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;
    return 0;
}