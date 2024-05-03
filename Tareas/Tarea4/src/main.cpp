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
#include "Matriz.hpp"
#include "OperacionesBasicas.hpp"

using namespace std;

int main() {
    int filasMatrizA;
    int columnasMatrizA;
    int filasMatrizB;
    int columnasMatrizB;
    int validacion;
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

    cout << "**********CALCULADORA DE MATRICES**********" << endl;

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

    do {
        cout << "Ingrese el tipo de datos con el que desea utilizar las matrices: " << endl;
        cout << "i) Int" << endl;
        cout << "f) Float" << endl;
        cout << "c) Complex" << endl;
        cin >> tipo;

        switch (tipo) {
            case 'i':
                cout << "\nPrimera matriz" << endl;
                intMatrizA.setDimensiones(filasMatrizA, columnasMatrizA);
                intMatrizA.llenarMatriz();

                cout << "\nSegunda matriz" << endl;
                intMatrizB.setDimensiones(filasMatrizB, columnasMatrizB);
                intMatrizB.llenarMatriz();

                // Elegir operacion
                do {
                    cout << "Seleccione la operación que desea aplicar: " << endl;
                    cout << "s) A + B = C" << endl;
                    cout << "r) A - B = c" << endl;
                    cout << "m) A * B = c" << endl;
                    cin >> operacion;

                    cout << "Aplicando operación..." << endl;
                    switch (operacion) {
                        case 's':
                            validacion = opBasicas.validarSumaResta(*ptrIntMatrizA, *ptrIntMatrizB);

                            if (validacion == 1) {
                                intValoresC = intMatrizA.operator+(*ptrIntMatrizB);

                                cout << "C = " << endl;
                                for(int i = 0; i < filasMatrizA; ++i) {
                                    cout << "|";

                                    for(int j = 0; j < columnasMatrizA; ++j) {
                                    cout << intValoresC[i][j] << " ";
                                    }
                                cout << "|" << endl;
                            }
                            }

                            break;
                        case 'r':
                            intValoresC = intMatrizA.operator-(*ptrIntMatrizB);

                            cout << "C = " << endl;
                            for(int i = 0; i < filasMatrizA; ++i) {
                                cout << "|";

                                for(int j = 0; j < columnasMatrizA; ++j) {
                                    cout << intValoresC[i][j] << " ";
                                }
                                cout << "|" << endl;

                            }
                            break;
                        case 'm':
                            intValoresC = intMatrizA.operator*(*ptrIntMatrizB);

                            cout << "C = " << endl;
                            for(int i = 0; i < filasMatrizA; ++i) {
                                cout << "|";

                                for(int j = 0; j < columnasMatrizB; ++j) {
                                    cout << intValoresC[i][j] << " ";
                                }
                                cout << "|" << endl;

                            }

                            break;
                        default:
                            cout << "Esta opción no es válida, por favor intente de nuevo." << endl;
                            break;
                    }

                } while (operacion != 's' && operacion != 'r' && operacion != 'm');

                break;
            case 'f':
                cout << "\nPrimera matriz" << endl;
                floatMatrizA.setDimensiones(filasMatrizA, columnasMatrizA);
                floatMatrizA.llenarMatriz(); 

                cout << "\nSegunda matriz" << endl;
                floatMatrizB.setDimensiones(filasMatrizB, columnasMatrizB);
                floatMatrizB.llenarMatriz();

                // Elegir operacion
                do {
                    cout << "Seleccione la operación que desea aplicar: " << endl;
                    cout << "s) A + B = C" << endl;
                    cout << "r) A - B = c" << endl;
                    cout << "m) A * B = c" << endl;
                    cin >> operacion;

                    cout << "Aplicando operación..." << endl;
                    switch (operacion) {
                        case 's':
                            validacion = opBasicas.validarSumaResta(*ptrFloatMatrizA, *ptrFloatMatrizB);

                            if(validacion == 1) {
                                floatValoresC = floatMatrizA.operator+(*ptrFloatMatrizB);

                                cout << "C = " << endl;
                                for(int i = 0; i < filasMatrizA; ++i) {
                                    cout << "|";

                                    for(int j = 0; j < columnasMatrizA; ++j) {
                                        cout << floatValoresC[i][j] << " ";
                                    }

                                cout << "|" << endl;
                                }
                            }
                            
                            break;
                        case 'r':
                            floatValoresC = floatMatrizA.operator-(*ptrFloatMatrizB);

                            cout << "C = " << endl;
                            for(int i = 0; i < filasMatrizA; ++i) {
                                cout << "|";

                                for(int j = 0; j < columnasMatrizA; ++j) {
                                    cout << floatValoresC[i][j] << " ";
                                }
                                cout << "|" << endl;

                            }
                            break;
                        case 'm':
                            floatValoresC = floatMatrizA.operator*(*ptrFloatMatrizB);

                            cout << "C = " << endl;
                            for(int i = 0; i < filasMatrizA; ++i) {
                                cout << "|";

                                for(int j = 0; j < columnasMatrizB; ++j) {
                                    cout << floatValoresC[i][j] << " ";
                                }
                                cout << "|" << endl;

                            }

                            break;
                        default:
                            cout << "Esta opción no es válida, por favor intente de nuevo." << endl;
                            break;
                    }

                } while (operacion != 's' && operacion != 'r' && operacion != 'm');           

                break;
            case 'c':
                cout << "\nPrimera matriz" << endl;
                complexMatrizA.setDimensiones(filasMatrizA, columnasMatrizA);
                complexMatrizA.llenarMatriz();

                cout << "\nSegunda matriz" << endl;
                complexMatrizB.setDimensiones(filasMatrizB, columnasMatrizB);
                complexMatrizB.llenarMatriz();

                // Elegir operacion
                do {
                    cout << "Seleccione la operación que desea aplicar: " << endl;
                    cout << "s) A + B = C" << endl;
                    cout << "r) A - B = c" << endl;
                    cout << "m) A * B = c" << endl;
                    cin >> operacion;

                    cout << "Aplicando operación..." << endl;
                    switch (operacion) {
                        case 's':
                            validacion = opBasicas.validarSumaResta(*ptrComplexMatrizA, *ptrComplexMatrizB);

                            if(validacion == 1) {
                                complexValoresC = complexMatrizA.operator+(*ptrComplexMatrizB);

                                cout << "C = " << endl;
                                for(int i = 0; i < filasMatrizA; ++i) {
                                    cout << "|";

                                    for(int j = 0; j < columnasMatrizA; ++j) {
                                        cout << complexValoresC[i][j] << " ";
                                    }
                                cout << "|" << endl;
                                }
                            }

                            break;
                        case 'r':
                            complexValoresC = complexMatrizA.operator-(*ptrComplexMatrizB);

                            cout << "C = " << endl;
                            for(int i = 0; i < filasMatrizA; ++i) {
                                cout << "|";

                                for(int j = 0; j < columnasMatrizA; ++j) {
                                    cout << complexValoresC[i][j] << " ";
                                }
                                cout << "|" << endl;

                            }
                            break;
                        case 'm':
                            complexValoresC = complexMatrizA.operator*(*ptrComplexMatrizB);

                            cout << "C = " << endl;
                            for(int i = 0; i < filasMatrizA; ++i) {
                                cout << "|";

                                for(int j = 0; j < columnasMatrizB; ++j) {
                                    cout << complexValoresC[i][j] << " ";
                                }
                                cout << "|" << endl;

                            }

                            break;
                        default:
                            cout << "Esta opción no es válida, por favor intente de nuevo." << endl;
                            break;
                    }

                } while (operacion != 's' && operacion != 'r' && operacion != 'm');

                break;
            default:
                cout << "Esta opción no es válida, por favor intente de nuevo." << endl;
                break;
        }

    } while (tipo != 'i' && tipo != 'f' && tipo != 'c');

    return 0;
}