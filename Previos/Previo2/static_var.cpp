// Ejemplo de scope de variable "static" presentacion pag 30

#include <iostream>
using namespace std;

void test()
{
    /* En este caso la vida de la variable "var" comienza cuando se llama por
    primera vez a la funcion y termina cuando finaliza el programa.*/

    static int var = 0;
    ++var;

    // Imprimir el valor de var cada vez que se llama a test
    cout << var << endl;
}

int main()
{
    test();
    test();

    return 0;
}