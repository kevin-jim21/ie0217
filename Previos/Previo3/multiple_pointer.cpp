// Ejemplo para comprender el uso de punteros multiples

#include <iostream>
using namespace std;

int main() {
    int var = 2050;
    int* ptr_var;

    // Dar a ptr_var la referencia de var
    ptr_var = &var;

    // Imprimir el valor de var y su direccion de memoria a partir del puntero
    cout << "var: " << var << ", ptr_var: " << ptr_var << endl;

    // Se define un segundo puntero
    int** ptr_ptr_var;

    // Se inicializa el segundo puntero con la referencia del primer puntero
    ptr_ptr_var = &ptr_var;

    // Imprimir la direccion de memoria del primer puntero mediante el segundo puntero
    cout << "ptr_ptr_var:  " << ptr_ptr_var << endl;

    // Imprimir la direccion de memoria del primer puntero
    cout << "&ptr_var:  " << &ptr_var << endl;

    // Imprimir la direccion de memoria del segundo puntero
    cout << "&ptr_ptr_var:  " << &ptr_ptr_var << endl;

    /* Nota: cuestionar la logica si estan utilizando punteros cuadruples, ya
    que la mantenibilidad del codigo puede ser un poco tediosa*/

    return 0;
}