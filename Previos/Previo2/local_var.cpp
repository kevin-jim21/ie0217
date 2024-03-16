// Ejemplo del scope de variables declaradas e inicializadas dentro de una funcion presentacion pag 7

#include <iostream>
using namespace std;

/* En este caso se declararan todas las variables dentro de la funcion main,
estas variables van a desaparecer en cuanto la funcion main deje de ejecutarse.*/

int main () {
    // Declaracion de las variables locales
    int a, b;
    int c;

    // Inicializacion de las variables
    a = 10;
    b = 20;
    c = a + b;

    cout << c;

    return 0;
}