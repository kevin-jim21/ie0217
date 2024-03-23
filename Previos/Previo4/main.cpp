// Primer ejemplo de la creacion e instanciacion de una clase

#include <iostream>
using namespace std;

// Definicion de la clase
class Molde {
    public:

        // Atributos: propiedades o caracteristicas que se le atribuyen a los objetos de esta clase.
        double largo;
        double ancho;
        double alto;

        // Constructor: inicializador de los atributos de la clase.
        Molde (double largo_p, double ancho_p, double alto_p) : largo(largo_p), ancho(ancho_p), alto(alto_p) {
            cout << "Probando si se puede imprimir" << endl;
        }

        // Destructor: se encarga de finalizar de forma segura los objetos al final de su scope
        ~Molde() {
            cout << "Saludos desde el destructor de la clase Molde" << endl;
        }

        // Metodos: funciones que se pueden aplicar a los objetos que pertenecen a esta clase.

        double calcularArea () {
            return largo * ancho;
        }

        double calcularVolumen() {
            return largo * ancho * alto;
        }
};

int main () {
    // Instanciar el objeto pared basado en la clase Molde e inicializar sus atributos
    Molde pared(10.0, 20.0, 35.0);

    // Utilizar los metodos de la clase para el objeto pared
    cout << "El area es: " << pared.calcularArea() << endl;
    cout << "El volumen es: " << pared.calcularVolumen() << endl;

    return 0;
}