// Ejemplo de mala practica de programacion al no contemplar errores ppt diap 16

#include <iostream>
#include <stdexcept>

using namespace std;

int main () {
    int numerador, denominador, resultado;

    cout << "Ingrese el numerador: " << endl;
    cin >> numerador;

    cout << "Ingrese el denominador: " << endl;
    cin >> denominador;

    resultado = numerador / denominador;
    cout << "El resultado es: " << resultado << endl;

    /* Este programa esta propenso al fallar ya que al ingresar 0 al denominador
    el compilador no lo va a interpretar de una forma esperada*/

    return 0;
}
