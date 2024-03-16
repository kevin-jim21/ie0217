// Otro ejemplo de sobrecarga de funciones presentacion pag 28

#include <iostream>
using namespace std;

/* En este  segundo ejemplo, se realiza sobrecarga con funciones del mismo
tipo pero que reciben una cantidad diferente de parametros.*/

// Funcion que recibe dos parametros
void display(int var1, double var2) {
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;
}

// Funcion que recibe un parametro de tipo double
void display(double var) {
    cout << "Double number: " << var << endl;
}

// Funcion que recibe un parametro de tipo entero
void display(int var) {
    cout << "Integer number: " << var << endl;
}

int main() {

    int a = 5;
    double b = 5.5;

    /* En este caso se escogera la funcion a utilizar de acuerdo
    especificamente a los parametros que se envien (cantidad y tipo).*/

    // Llamar a la funcion con un parametro entero
    display(a);

    // LLamar a la funcion con un parametro double
    display(b);

    // Llamar funcion con dos parametros
    display(a, b);

    return 0;
}