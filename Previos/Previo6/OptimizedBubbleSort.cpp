// Ejemplo algoritmo de ordenamiento Bubble Sort optimizado ppt diap 5

#include <iostream>

using namespace std;

/* En este caso se anade una variable llamada swapped que tendra un 1 si 
despues de recorrer todo el array hubo un intercambio de elementos, de estar
esta variable en 0 se determinara que el array ya esta ordenado y retornara
el valor actual para el array*/
void bubbleSort(int array[], int size) {

    // Loop para acceder a todos los elementos del array
    for (int step = 0; step < (size-1); ++step) {
        int swapped = 0;

        // Loop para comparar los elementos adyacentes
        for (int i = 0; i < (size - step - 1); ++i){

            if (array[i] > array [i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                swapped = 1;
            }
        }

        if (swapped == 0) {
            break;
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
