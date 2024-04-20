// Ejemplo de uso de un iterador bidireccional (ppt diap 15)

#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> nums {1, 2, 3, 4, 5};

    // Inicializar al iterador apuntando al inicio
    list<int>::iterator itr = nums.begin();

    cout << "Moviendose hacia adelante: " << endl;

    // Imprimir los elementos de forma creciente
    while (itr != nums.end()) {
        cout << *itr << ", ";

        itr++;  // Iterar hacia adelante
    }

    cout << "\nMoviendose hacia atras: " << endl;

    while (itr != nums.begin()) {
        if (itr != nums.end()) {

            // Si aun no se ha llegado al final imprime elemento
            cout << *itr << ", ";
        }
        
        itr--;  // Iterar hacia atras
    }

    cout << *itr << endl;

    return 0;
}