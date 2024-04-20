// Ejemplo de uso de un iterador forward (ppt diap 14)

#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> nums{1, 2, 3, 4};

    // Se inicializa un iterador que apunte al inicio de la lista
    forward_list<int>::iterator itr = nums.begin();

    while (itr != nums.end()) {
        int original_value = *itr;  // Acceso al iterador usando dereferencia

        *itr = original_value * 2;  // Asignar nuevo valor

        itr++;  // Proxima posicion
    }

    for (int num: nums) {
        cout << num << ", ";
    }

    return 0;
}