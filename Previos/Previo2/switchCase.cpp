// Ejemplo de uso de switch

#include <iostream>

int main () {
    std::cout << "Hola Mundo, estudiantes de IE0217!\n";

    int var1 = 52;

    /* El switch va a ejecutar el bloque logico correspondiente de acuerdo al
    valor de la variable escogida, si este valor no corresponde a ningun caso
    se ejecuta el bloque logico que se encuentra dentro de default.*/
    switch (var1) {
        case 1:
            std::cout << "Case 1!\n";
            break;
        case 2:
        case 3:
            std::cout << "Case Final!\n";
            break;
        
        // Codigo que se ejecuta si var1 no es ningun caso
        default:
            std::cout << "Case default!\n";
            break;
    }


    return 0;
}