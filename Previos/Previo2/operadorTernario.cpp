// Ejemplo de uso de operador ternario

#include <iostream>

int main () {
    std::cout << "Hola Mundo, estudiantes de IE0217\n";

    int var1 = 0;
    int var2;

    /* var2 obtendra un valor de 15 si var1 tiene un valor de 3, al no cumplirse
    esta condicion var2 obtendra un valor de 27*/
    var2 = (var1 == 3) ? 15 : 27;

    // Se imprime el valor de var2
    std::cout << "var2 : \n" << var2 << "";

    return 0;
}