// Archivo main comparacion de algoritmos de ordenamiento

#include "Functions.hpp"

int main() {
    const int SIZE = 10000;  // Se utilizan arrays aleatorios de 10000 numeros enteros
    int arr[SIZE];

    /* Se van a obtener arrays aleatorios y se va a estimar el tiempo que dura
    cada algoritmo ordenando su respectivo array*/

    generateRandomArray(arr, SIZE);
    measuringSortingTime(bubbleSort, arr, SIZE, "Bubble Sort");

    generateRandomArray(arr, SIZE);
    measuringSortingTime(selectionSort, arr, SIZE, "Selection Sort");

    generateRandomArray(arr, SIZE);
    measuringSortingTime(insertionSort, arr, SIZE, "Insertion Sort");
    
    generateRandomArray(arr, SIZE);
    measuringSortingTime(quickSort, arr, 0, SIZE - 1, "Quick Sort");

    return 0;
}