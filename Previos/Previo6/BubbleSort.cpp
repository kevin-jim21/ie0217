// Ejemplo algoritmo de ordenamiento Bubble Sort ppt diap 4

#include <iostream>

using namespace std;

// Funcion para aplicar el algoritmo sobre un array
void bubbleSort(int array[], int size) {

    // Loop para acceder a cada elemento del archivo
    for (int step = 0; step < size; ++step) {

        // Loop para comparar los elementos adyacentes
        for (int i = 0; i < size - step; ++i) {

            if (array[i] > array[i + 1]) {
                
                // Si detecta que el elemento de la derecha es menor que el actual, los intercambia
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

// Funcion para imprimir el array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "  " << array[i];
    }
    cout << "\n";
}

int main() {
    int data[] = {-2, 45, 0, 11, -9};

    // Tomar el tamano del array
    int size = sizeof(data) / sizeof(data[0]);

    // Llamar a la funcion para ordenar el array
    bubbleSort(data, size);

    cout << "Array en orden ascendente:\n";
    printArray(data, size);
}
