// Uso de los enums y defines

#include <iostream>
using namespace std;

// Ejemplo uso de define
#define MI_PRIMER_DEFINE 925

// Ejemplo enum
enum seasons {
    spring = 34,
    summer = 4,
    autumn = 9,
    winter = 32
};

// Ejemplo segundo enum
enum enumcito {
    carro = 40,
    casa,
    arbol,
    patio
};
/* A los numeros se les conoce como identificadores, al no declarar
identificadores estos van a tomar por defecto numeros del 0 en adelante
en el orden en el que estan declarados*/

// Esta es una buena practica para hacer un codigo mantenible, escalable y legible.

int main(){
    // Declara variable de tipo "seasons"
    seasons s;

    s = winter;


    // Imprimir el identificador del enum que contiene s
    cout << "Summer = " << s << endl;
    cout << "Define: " << MI_PRIMER_DEFINE << endl;

    // Imprimir el identificador del enum arbol desde enumcito
    cout << "arbol: " << arbol << endl;

    return 0;
}