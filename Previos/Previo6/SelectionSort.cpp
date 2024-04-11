// Ejemplo algoritmo de ordenamiento Selection Sort ppt diap 9

#include <iostream>
using namespace std;

// Funcion para intermabiar de posicion dos elementos
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Funcion para imprimir un array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Funcion que va a aplicar el algoritmo sobre un array
void selectionSort(int array[], int size) {
    
    // Para cada paso, se va a inicializar como valor menor al elemento que esta colocado en el indice del paso
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;

        /* Al recorrer el array, se compara el elemento actual con el elemento que esta
        desginado como minimo, si es menor intercambian los valores y continua el bucle*/ 
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array [min_idx])
                min_idx = i;
        }

        // Al finalizar cada paso, se coloca el valor minimo en la posicion del array que le corresponde
        swap(&array[min_idx], &array[step]);
    }
}

int main() {
    int data[] = {20, 12, 10, 15, 2};

    // Tomar el tamano del array
    int size = sizeof(data) / sizeof(data[0]);

    // Llamar a la funcion para ordenar el array
    selectionSort(data, size);

    cout << "Array en orden ascendente:\n";
    printArray(data, size);
}