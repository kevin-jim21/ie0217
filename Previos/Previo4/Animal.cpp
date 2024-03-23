// Ejemplo de tipos de acceso en clases ppt diap 7

#include <iostream>
using namespace std;

// Creacion de la clase padre Animal
class Animal {
    /* Los metodos y atributos publicos van a poder ser accedidos desde clases
    heredadas y afuera de la clase.*/
    public:
        void setEdad(int age) {
            edad = age;
        }
        int getEdad() {
            return edad;
        }

    /* Los metodos y atributos protegidos van a poder ser accedidos desde clases
    heredadas pero no afuera de la clase.*/
    protected:
        string nombre;

    /* Los metodos y atributos privados no van a poder ser accesados ni desde
    clases heredadas ni afuera de la propia clase.*/
    private:
        int edad;
};

// Creacion de la clase hija Perro
class Perro : public Animal {
    public:

        // Metodo para asignar el nombre al perro
        void setNombre(string n) {

            // Se puede acceder a nombre ya que Perro es heredada de Animal
            nombre = n;
        }

        // Metodo para retornar nombre del perro
        string getNombre() {
            return nombre;
        }
};

int main() {

    // Se crea un objeto miPerro basado en la clase Perro
    Perro miPerro;

    /* Se puede acceder a setNombre() ya que es un metodo publico de la
    clase hija. Tambien, se puede acceder a setEdad() ya que es un metodo
    publico de la clase Animal.*/
    miPerro.setNombre("Toby");
    miPerro.setEdad(3);

    // Ahora se pueden utilizar getNombre() y getEdad() ya que son metodos publicos
    cout << "Mi perro se llama " << miPerro.getNombre() << endl;
    cout << "y tiene " << miPerro.getEdad() << " anios." << endl;

    return 0;
}