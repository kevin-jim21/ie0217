// Archivo en el que se definen cada una de las funciones de algoritmos de ordenamiento, particion y calculo de tiempo

#include "Functions.hpp"

void bubbleSort(int arr[], int n) {
    /* Bubble sort compara pares de elementos adyacentes y los cambia de
    posicion si no estan en el orden correcto*/
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    /* Selection sort busca el elemento minimo para cada paso y lo coloca en
    la posicion correcta (de acuerdo a los elementos anteriores a este)*/
    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void insertionSort(int arr[], int n) {
    /* Insertion Sort en cada paso, toma el elemento correspondiente y lo
    inserta en la posicion correcta de la lista*/
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int partition(int arr[], int low, int high) {
    /* Paso intermedio en el algoritmo de ordenamiento Quick Sort para
    fraccionar el arreglo*/
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    // Utilizando particiones, logra encontrar el orden correcto del array
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void generateRandomArray(int arr[], int n) {
    srand(time(0));  // Epoc time
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 10000;
    }
    /* Los arrays siempre se envian en seco, ya que el arreglo lleva
    consigo mismo la referencia. */
}

// Primer argumento es un puntero a una funcion que recibe un array de enteros y un entero
void measuringSortingTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithmName) {

    high_resolution_clock::time_point start = high_resolution_clock::now();
    sortingAlgorithm(arr, n);  // Le envia al puntero de la funcion las entradas propias de esta nueva funcion
    high_resolution_clock::time_point stop = high_resolution_clock::now();

    // Auto (manera corta de hacerlo) se encarga de determinar el tipo de variable a partir del valor que se le asigna
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Tiempo de " << algorithmName << ": " << duration.count() << " microsegundos" << endl;
}

// Funcion sobrecarga utilizada para Quick Sort, esta en vez de recibir un n, recibe low y high
void measuringSortingTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithmName) {

    high_resolution_clock::time_point start = high_resolution_clock::now();
    sortingAlgorithm(arr, low, high);  // Le envia al puntero de la funcion las entradas propias de esta nueva funcion
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Tiempo de " << algorithmName << ": " << duration.count() << " microsegundos" << endl;
}