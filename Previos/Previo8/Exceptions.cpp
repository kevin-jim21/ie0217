// Ejemplo inicial de manejo de excepciones ppt diap 12

#include <iostream>
using namespace std;

int main() {
    double numerator, denominator, divide;

    cout << "Ingrese el numerador: " << endl;
    cin >> numerator;

    cout << "Ingrese el denominador: " << endl;
    cin >> denominator;

    try {
        // Utilizar excepcion si el denominador es 0
        if (denominator == 0) {
            throw 0;
        }

        // Codigo que se va a ejecutar cuando el denominador no es 0
        divide = numerator / denominator;
        cout << numerator << " / " << denominator << " = " << divide << endl;
    }

    catch (int num_exception) {
        // El programa salta aca cuando el denominador es 0
        cout << "Error, no se puede dividir por " << num_exception << endl;
    }

    return 0;
}