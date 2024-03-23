// Ejemplo de sobrecarga de operadores ppt diap 12

#include <iostream>
using namespace std;

class Fraccion {
    int numerador, denominador;

    public:

        // Definicion del constructor
        Fraccion(int n, int d) : numerador(n), denominador (d) {}

        /* Definir sobrecarga de operadores para "+". De esta forma se le indica
        al compilador como se desea que se interprete una suma de dos objetos
        de la clase Fraccion.*/
        Fraccion operator+ (const Fraccion &f) {
            Fraccion resultado(
                numerador * f.denominador + f.numerador * denominador,
                denominador * f.denominador
            );
            return resultado;
        }

        // Metodo para imprimir la fraccion
        void imprimir() {
            cout << numerador << "/" << denominador << endl;
        }

};

int main() {
    
    /* En el main se declaran dos fracciones, se suman y se imprime el
    su resultado mediante el metodo imprimir().*/
    Fraccion f1(1, 2);
    Fraccion f2(3, 4);

    Fraccion f3 = f1 + f2;

    f3.imprimir();

    return 0;
}
