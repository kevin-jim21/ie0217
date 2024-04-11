// Ejemplo algoritmo de ordenamiento Insertion Sort ppt diap 12

#include <iostream>
using namespace std;

// Funcion para imprimir un array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++) {

        // Cada iteracion se toma el elemento del array cuyo indice coincide con el paso
        int key = array[step];
        int j = step - 1;  // Cada paso se hace una comparacion menos que el anterior

        /* En este bucle se compara el elemento apartado (key) con cada uno de los elementos
        que se encuentran a la izquierda, se van a intercambiar sus valores hasta que se
        encuentre un valor del array que sea menor a key*/
        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];
            --j;
        }
        /* Para el caso en el que key no es menor que el valor con el que se
        compara, se coloca el valor de key en el indice anterior*/
        array[j + 1] = key;

    }
}

int main() {
    int data[] = {9, 5, 1, 4, 3};
    int size = sizeof(data) / sizeof(data[0]);
    insertionSort(data, size);
    cout << "Array en orden ascendente:\n";
    printArray(data, size);
}
