// Ejemplo basico de do-while en C++ presentacion pag 17

#include <iostream>

using namespace std;

/* La diferencia entre los bucles while y do-while es que este ultimo se
ejecuta aunque sea una vez.*/

int main() {
    int i = 1;

    // Se ingresa al bucle sin preguntar por la condicion
    do {
        cout << i << " ";
        ++i;
    }
    // Pregunta por la condicion para continuar en el bucle
    while (i <= 5);

    return 0;
}