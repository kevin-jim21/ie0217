// Ejemplo uso de recursividad calcular factorial presentacion pag 6

#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    // Se le pide un numero al usuario para calcular su factorial
    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;

    return 0;
}

int factorial(int n) {
    /* Se van a descomponer los factoriales de forma que
    fact(n) = n * fact(n - 1), en este caso solamente se conoce que
    fact(1) = 1, por lo que la funcion se llamara asi misma hasta que
    se encuentre a fact(1) y a partir de este valor, se devolveran
    los valores de cada factorial para asi, terminar obteniendo el resultado
    del factorial mayor, que es el que se desea obtener.*/

    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}