/**
 * @file main.cpp
 * @brief Archivo de codigo principal para el programa Calculadora de Matrices.
 *
 * MIT License
 *
 * Copyright (c) [2024] [Kevin Jiménez Acuña]
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include <iostream>
#include <string>
#include <complex>
#include "Funciones.hpp"

using namespace std;

int main() {
    int filasMatrizA;
    int columnasMatrizA;
    int filasMatrizB;
    int columnasMatrizB;
    char opcion;
    char tipo;
    char operacion;
    vector<vector<int>> intValoresA;
    vector<vector<int>> intValoresB;
    vector<vector<int>> intValoresC;
    vector<vector<float>> floatValoresA;
    vector<vector<float>> floatValoresB;
    vector<vector<float>> floatValoresC;
    vector<vector<complex<double>>> complexValoresA;
    vector<vector<complex<double>>> complexValoresB;
    vector<vector<complex<double>>> complexValoresC;
    Matriz<int> intMatrizA(intValoresA);
    Matriz<int> intMatrizB(intValoresB);
    Matriz<int>* ptrIntMatrizA = &intMatrizA;
    Matriz<int>* ptrIntMatrizB = &intMatrizB;
    Matriz<float> floatMatrizA(floatValoresA);
    Matriz<float> floatMatrizB(floatValoresB);
    Matriz<float>* ptrFloatMatrizA = &floatMatrizA;
    Matriz<float>* ptrFloatMatrizB = &floatMatrizB;
    Matriz<complex<double>> complexMatrizA(complexValoresA);
    Matriz<complex<double>> complexMatrizB(complexValoresB);
    Matriz<complex<double>>* ptrComplexMatrizA = &complexMatrizA;
    Matriz<complex<double>>* ptrComplexMatrizB = &complexMatrizB;
    OperacionesBasicas opBasicas;
    srand(time(0));  // Generar semilla

    // Bucle para no salir del menu hasta que la opcion sea salir
    do {
        cout << "**********CALCULADORA DE MATRICES**********" << endl;
        cout << "Por favor ingrese una opción" << endl;
        cout << "1) Ingresar dimensiones de las matrices" << endl;
        cout << "2) Seleccionar el tipo de dato que va a ingresar a las matrices" << endl;
        cout << "3) Seleccionar la operación que va a realizar" << endl;
        cout << "4) Ingreso de datos para las matrices" << endl;
        cout << "5) Mostrar las matrices ingresadas" << endl;
        cout << "6) Ejecutar la operación ingresada" << endl;
        cout << "7) Salir" << endl;

        cin >> opcion;

        switch(opcion) {
            case '1':
                cout << "Ingrese las dimensiones de la matriz A: " << endl;

                cout << "Filas: " << endl;
                cin >> filasMatrizA;
                cout << "Columnas: " << endl;
                cin >> columnasMatrizA;

                cout << "Ingrese las dimensiones de la matriz B: " << endl;

                cout << "Filas: " << endl;
                cin >> filasMatrizB;
                cout << "Columnas: " << endl;
                cin >> columnasMatrizB;
                break;
            case '2':
                do {
                    cout << "Ingrese el tipo de datos con el que desea utilizar las matrices: " << endl;
                    cout << "i) Int" << endl;
                    cout << "f) Float" << endl;
                    cout << "c) Complex" << endl;
                    cin >> tipo;
                } while (tipo != 'i' && tipo != 'f' && tipo != 'c');
                break;
            case '3':
                do {
                    std::cout << "Seleccione la operación que desea aplicar: " << std::endl;
                    std::cout << "s) A + B = C" << std::endl;
                    std::cout << "r) A - B = c" << std::endl;
                    std::cout << "m) A * B = c" << std::endl;
                    std::cin >> operacion;
                } while (operacion != 's' && operacion != 'r' && operacion != 'm') ;
                break;
            case '4':
                switch (tipo) {
                    case 'i':
                        ingresoValores(filasMatrizA, columnasMatrizA, filasMatrizB, columnasMatrizB,*ptrIntMatrizA, *ptrIntMatrizB);
                        break;
                    case 'f':
                        ingresoValores(filasMatrizA, columnasMatrizA, filasMatrizB, columnasMatrizB,*ptrFloatMatrizA, *ptrFloatMatrizB);
                        break;
                    case 'c':
                        ingresoValores(filasMatrizA, columnasMatrizA, filasMatrizB, columnasMatrizB,*ptrComplexMatrizA, *ptrComplexMatrizB);
                        break;
                    default:
                        cout << "Esta opción no es válida, por favor intente de nuevo." << endl;
                        break;
                }
                break;
            case '5':
                switch (tipo) {
                    case 'i':
                        mostrarMatrices(*ptrIntMatrizA, *ptrIntMatrizB);
                        break;
                    case 'f':
                        mostrarMatrices(*ptrFloatMatrizA, *ptrFloatMatrizB);
                        break;
                    case 'c':
                        mostrarMatrices(*ptrComplexMatrizA, *ptrComplexMatrizB);
                        break;
                    default:
                        cout << "Esta opción no es válida, por favor intente de nuevo." << endl;
                        break;
                }               
                break;
            case '6':
                switch (tipo) {
                    case 'i':
                        operaciones(filasMatrizA, columnasMatrizA, filasMatrizB, columnasMatrizB, *ptrIntMatrizA, *ptrIntMatrizB, intValoresC, opBasicas, operacion);
                        break;
                    case 'f':
                        operaciones(filasMatrizA, columnasMatrizA, filasMatrizB, columnasMatrizB, *ptrFloatMatrizA, *ptrFloatMatrizB, floatValoresC, opBasicas, operacion);
                        break;
                    case 'c':
                        operaciones(filasMatrizA, columnasMatrizA, filasMatrizB, columnasMatrizB, *ptrComplexMatrizA, *ptrComplexMatrizB, complexValoresC, opBasicas, operacion);
                        break;
                    default:
                        cout << "Aún no se ha seleccionado el tipo de datos con el que se desea hacer la operación." << endl;
                        break;
                }
                break;
            case '7':
                cout << "Saliendo del programa..." << endl;
                break;  
            default:
                break;          
        }
    } while (opcion != '7');

    return 0;
}
