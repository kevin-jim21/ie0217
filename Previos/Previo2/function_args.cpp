// Ejemplo de ingreso de argumentos en una funcion presentacion pag 22

#include<iostream>
using namespace std;

// Funcion tipo void no retorna ningun valor
void displayNum(int n1, float n2) {
    
    // Va a imprimir un entero y un flotante que recibira como argumentos
    cout << "The int number is " << n1;
    cout << "The double number is " << n2;
}

int main() {

    int num1 = 5;
    double num2 = 5.5;

    /* Llamada de la funcion: se ejecuta todo el bloque logico que esta dentro
    de esta y cuando finaliza vuelve a la funcion main.*/
    displayNum(num1, num2);

    return 0;
}