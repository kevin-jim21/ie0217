// Ejemplo de excepciones multiples video

#include <iostream>
using namespace std;

int main() {

    double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;

    cout << "Ingrese un índice del array: ";
    cin >> index;

    try {
        // Levantar excepcion si el indice ingresado no esta en el array
        if (index >= 4) {
            throw "Error: este índice no existe en el array";
        }

        // Esto no se ejecutara si se levanto la excepcion
        cout << "Ingrese el numerador: " << endl;
        cin >> numerator;

        cout << "Ingrese el denominador: " << endl;
        cin >> denominator;

        // Levantar excepcion si el denominador es 0
        if (denominator == 0) {
            throw 0;
        }

        // Esto no se ejecutara si se levanto la excepcion
        arr[index] = numerator / denominator;
        cout << arr[index] << endl;
    }

    catch (const char* msg) {
        // El programa salta aca cuando el indice del array no es el correcto
        cout << msg << endl;
    }

    catch (int num) {
        // El programa salta aca cuando el denominador es 0
        cout << "Error, no se puede dividir por " << num << endl;
    }

    catch (...) {
        // El programa salta aca en caso de que se produzca cualquier otro tipo de excepcion
        cout << "Excepción inesperada" << endl;
    }

    return 0;
}
