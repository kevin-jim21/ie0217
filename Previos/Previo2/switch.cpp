// Ejemplo de uso del switch presentacion pag 14

#include <iostream>
using namespace std;

int main() {
    /* Este programa realiza operaciones matematicas basicas de acuerdo a las
    entradas que recibe del usuario. En este caso se usa la variable oper para
    almacenar un caracter que el usuario ingresa indicando que operacion desea
    realizar y las variables num1 y num2 que son las que participaran de la
    operacion.*/

    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /)";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    /* Switch determina el camino que seguira el codigo en su ejecucion
    de acuerdo al caracter almacenado en oper.*/
    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            cout << "Error! The operator is not correct";
            break;

    }

    return 0;
}