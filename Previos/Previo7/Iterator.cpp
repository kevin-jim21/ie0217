// Este archivo contiene un ejemplo de uso de un iterador (ppt diap 10)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declarar vector de strings
    vector<string> languajes = {"Python", "C++", "Java"};

    /* Crear un iterador es como crear un tipo de puntero, cuyo valor apunta
    a cada elemento de un contenedor*/
    vector<string>::iterator itr;

    // Iterar sobre los elementos
    for (itr = languajes.begin(); itr != languajes.end(); itr++) {
        cout << *itr << ", ";
    }

    return 0;
}
