// En este archivo se muestra el ejemplo de contenedor asociativo (ppt diap 4)

#include <iostream>
#include <set>
using namespace std;

int main() {
    // Inicializar set de elementos enteros
    set<int> numbers = {1, 100, 10, 70, 100};

    cout << "Los numeros son: ";
    for (auto &num: numbers) {
        cout << num << ", ";
    }
    
    return 0;
}