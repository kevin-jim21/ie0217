// Ejemplo de uso de un algoritmo de ordenamiento con la biblioteca STL (ppt diap 21)

#include <iostream>
#include <algorithm>
#include <vector>

// Funcion que se utilizara para ordenar el vector
bool myfunction (int i, int j) {return (i < j);}

struct myclass {
    bool operator() (int i, int j) {return (i < j);}
} myobject;

int main() {
    int myints[] = {32, 71, 12, 45, 26, 80, 53, 33};
    std::vector<int> myvector (myints, myints + 8);

    // Usando la comparacion "por default" para ordenar primeros 4 elementos
    std::sort (myvector.begin(), myvector.begin() + 4);

    // Usando comparacion de la funcion para ordenar los ultimos 4 elementos
    std::sort (myvector.begin() + 4, myvector.end(), myfunction);

    // Usando myobject como comparacicon para ordenar el vector
    std::sort (myvector.begin(), myvector.end(), myobject);

    // Imprimir el contenido final del vector
    std::cout << "Mi vector contiene: ";

    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        std::cout << " " << *it;

    std::cout << "\n";

    return 0;
}

