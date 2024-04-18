// Headerfile en el que se definen las funciones de algortimos de ordenamiento, particion y calculo del tiempo

#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <string>

using namespace std;
using namespace::chrono;

/* Cada algoritmo de ordenamiento tiene su respectiva funcion; hay que destacar
que Quick Sort ocupa dos funciones ya que necesita realizar particiones para
poder encontrar el orden correcto de los elementos. En cuanto a la sobrecarga
de funciones, la primer measuringSortingTime se utiliza para los algoritmos
Bubble Sort, Selection Sort e Insertion Sort, mientras que la segunda se
utiliza para el algoritmo Quick Sort*/

void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);
void generateRandomArray(int arr[], int n);
void measuringSortingTime(void (*sortingAlgorithm)(int[], int), int arr[], int n, string algorithmName);
void measuringSortingTime(void (*sortingAlgorithm)(int[], int, int), int arr[], int low, int high, string algorithmName);

#endif  // FUNCTIONS_HPP