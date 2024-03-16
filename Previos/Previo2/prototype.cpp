// Ejemplo de declaracion de un prototipo para funcion presentacion pag 25

#include <iostream>

using namespace std;

/* Declarar protitpos es necesario para que el compilador pueda saber al
encontrar la llamda de una funcion en el main que no esta definida aun
que en alguna parte del codigo fuente va a poder encontrar su definicion.*/

// Prototipo de la funcion
int add(int, int);

int main() {
    int sum;

    //Llamar la funcion y guardar su valor retornado en "sum"
    sum = add(100, 78);

    // Imprimir el valor de sum
    cout << "100 + 78 = " << sum << endl;

    return 0;
}

// Definicion de la funcion cuyo prototipo fue declarado antes de main
int add(int a, int b) {
    return (a + b);
}