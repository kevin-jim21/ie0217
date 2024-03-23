// Ejemplo creacion e instanciacion de una clase ppt diap 4

#include <iostream>
using namespace std;

// Definicion de la clase
class Molde {
    public:

        // Atributos: propiedades o caracteristicas que se le atribuyen a los objetos de esta clase.
        double largo;
        double ancho;
        double altura;

        // Constructor: inicializador de los atributos de la clase.
        Molde() {
            cout << "Esto se ejecuta en cada instanciacion" << endl;
            cout << "Iniciando un objeto de la clase Room" << endl;
        }

        // Metodos: funciones que se pueden aplicar a los objetos que pertenecen a esta clase.

        double calcularArea () {
            return largo * ancho;
        }

        double calcularVolumen() {
            return largo * ancho * altura;
        }
};

int main () {
    // Instanciar el objeto pared basado en la clase Molde
    Molde pared;

    // Inicializar los atributos del objeto pared basado en la clase Molde
    pared.largo = 400.5;
    pared.ancho = 20.8;
    pared.altura = 315.2;

    // Utilizar los metodos de la clase para el objeto pared
    cout << "Area =  " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;

    return 0;
}
