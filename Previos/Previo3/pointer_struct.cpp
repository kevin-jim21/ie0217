// Ejemplo de usar punteros hacia estructuras presentacion pag 14

#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

/* Para acceder a las variables de un struct mediante punteros tambien se
puede utilizar "->", la cual es mas recomendable a la hora de programar
ya que es mas legible. Ademas, la otra notacion puede fallar en caso de que
algun parentesis sea borrado.*/

int main() {

    // Declarar un puntero de tipo "Distance" y la variable d
    Distance *ptr, d;

    // Se atribuye al puntero la direccion de d
    ptr = &d;

    // Solicita al usario los datos y se ingresan a la estructura mediante este puntero
    cout << "Enter feet: ";
    cin >> (*ptr).feet;
    cout << "Enter inch: ";
    cin >> (*ptr).inch;

    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " <<  (*ptr).inch << " inches";

    return 0;
}