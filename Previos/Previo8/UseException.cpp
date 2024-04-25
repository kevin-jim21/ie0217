// Ejemplo de buena practica de programacion al contemplar errores ppt diap 16

#include <iostream>
#include <stdexcept>

using namespace std;

int main () {
    int numerador, denominador, resultado;

    cout << "Ingrese el numerador: " << endl;
    cin >> numerador;

    cout << "Ingrese el denominador: " << endl;
    cin >> denominador;

    try {
        if (denominador == 0) {
            throw runtime_error("Error: el denominador no puede ser cero.");
        }

        // Este codigo no se ejecuta si el denominador es 0, evitando asi un error en el programa
        resultado = numerador / denominador;
        cout << "El resultado es: "  << resultado << endl;
    }

    catch (const exception& e) {
        cerr << e.what() << endl;  // cerr se utiliza para dar la salida del error y e.what() es el mensaje de error
    }

    return 0;
}
