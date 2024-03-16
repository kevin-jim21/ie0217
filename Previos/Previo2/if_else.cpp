// Ejemplo de anidaciones de sentencias if else presentacion pag 15

#include <iostream>
using namespace std;

int main() {

    int num;

    // Solicitar un numero al usario
    cout << "Enter an integer: ";
    cin >> num;

    // Sentencia if externa
    if (num != 0) {

        // Sentencia if interna
        if (num > 0) {
            cout << "The number is positive." << endl;
        }
        // Sentencia else interna
        else {
            cout << "The number is negative." << endl;
        }
    }

    // Sentencia else externa
    else {
        cout << "The number is 0 and it is neither positive nor negative." << endl;
    }

    cout << "This line is always printed." << endl;

    return 0;
}