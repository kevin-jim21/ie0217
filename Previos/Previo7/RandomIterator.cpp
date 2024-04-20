// Ejemplo de uso de un iterador de acceso aleatorio (ppt diap 16)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec{1, 2, 3, 4};

    // Crear iterador para el primer elemento del vector
    vector<int>::iterator itr_first = vec.begin();

    // Crear iterador hacia el ultimo elemento del vector
    vector<int>::iterator itr_last = vec.end() - 1;  // -1 ya que end() apunta un elemento despues del ultimo

    // Imprimir elementos del vector
    cout << "First Element: " << *itr_first << endl;
    cout << "Second Element: " << itr_first[1] << endl;
    cout << "Second Last Element: " << *(itr_last - 1) << endl;
    cout << "Last Element: " << *(itr_last) << endl;

    return 0;
}