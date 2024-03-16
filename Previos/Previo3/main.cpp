// Ejemplo de uso de una funcion incluida mediante un archivo de encabezado

// Se incluye solamente sum.hpp
#include <iostream>
#include "sum.hpp"
using namespace std;

int main(){
    int num1 = 9;
    int num2 = 3;

    // Se llama a la funcion y se ingresan parametros de forma regular
    int result = sum(num1, num2);

    cout << "El resultado de " << num1 << " + " << num2 << " es igual a: " << result << endl;

    return 0;
}