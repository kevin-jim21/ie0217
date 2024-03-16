// Ejemplo de uso de valores define presentacion pag 9

#include <iostream>
using namespace std;

// Declaracion de un define
#define BOOK_ID_MAX 10

/* Al utilizar un define se le atribuye a la variable un valor que se carga
al preprocesador, esto hace que el compilador cada vez que encuentre la
definicion en el codigo la cambie por su valor constante, de esta forma el
programa se hace mas eficiente.*/

// Creacion de un enum para enumerar las casas del condominio
enum {
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX
} casas_t;

int main() {

    // Imprimir el valor del define BOOK_ID_MAX
    cout << "El valor de Book ID Max es: " << BOOK_ID_MAX << endl;

    cout << "La cantidad de casas en el condominio es: " << CASA_MAX << endl;

    return 0;
}