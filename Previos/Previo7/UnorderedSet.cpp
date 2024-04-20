// En este archivo se muestra el ejemplo de contenedor asociativo desordenado (ppt diap 5)

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Inicializar set de elementos enteros
    unordered_set<int> numbers = {1, 100, 10, 70, 100};

    cout << "Los numeros son: ";
    for (auto &num: numbers) {
        cout << num << ", ";
    }
    
    return 0;
}