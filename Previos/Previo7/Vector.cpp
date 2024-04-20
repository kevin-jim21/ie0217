// En este archivo se muestra el ejemplo de contenedor de secuencia (ppt diap 4)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Inicializar vector de elementos enteros
    vector<int> numbers = {1, 100, 10, 70, 100};

    cout << "Los numeros son: ";
    for (auto &num: numbers) {
        cout << num << ", ";
    }
    
    return 0;
}