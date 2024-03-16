// Ejemplo del scope de variables declaradas e inicializadas fuera de una funcion presentacion pag 7

#include <iostream>
using namespace std;

/* En este caso la variable g es declarada fuera del main, por lo que esta
variable puede ser utilizada ademas del main, por cualquier funcion que sea
creada dentro del script.*/

// Declaracion de la variable global
int g;

int main () {
    // Declaracion de las variables locales
    int a, b;

    // Inicializacion de las variables
    a = 10;
    b = 20;
    g = a + b;

    cout << g;

    return 0;
}