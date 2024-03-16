// Ejemplo basico de while en C++ presentacion pag 17

#include <iostream>

using namespace std;

int main() {
    int i = 1;

    // Bucle while para imprimir los numeros del 1 al 5
    while(i <= 5) {
        cout << i << " ";

        /* A diferencia del for, al usar un while tanto la declaracion e
        inicializacion de la variable i como su iteracion deben realizarse 
        en lineas aparte.*/
        ++i;
    }

    return 0;
}