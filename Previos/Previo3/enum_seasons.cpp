// Primer ejemplo enums presentacion pag 8

#include <iostream>
using namespace std;

// Definicion de enums de tipo "seasons"
enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32};

int main() {

    // Se declara una variable de tipo seasons
    seasons s;

    // Al declarar s como summer el compilador lo asocia con su identificador
    s = summer;

    // Se imprime el identificador de summer
    cout << "Summer = " << s << endl;

    /* Estos identificadores, pueden usarse de manera provechosa si se
    necesitan definir valores numericos para un conjunto de constantes.
    Es una buena practica para mantener un codigo legible, mantenible y escalable.*/

    return 0;
}