// Ejemplo de pasar objetos como parametros a funciones ppt diap 8

#include <iostream>
using namespace std;

class Student {
    public:

        // Atributo publico
        double marks;

        // Constructor
        Student(double m) {
            marks = m;
    }
};

// Funcion para calcular un promedio de notas
void calculateAverage(Student s1, Student s2) {

    double average = (s1.marks + s2.marks) / 2;

    // Imprimir el promedio
    cout << "Average Marks = " << average << endl;
}

int main () {
    // Creacion de dos objetos de la clase Student
    Student student1(88.0), student2(56.0);

    // Llamar a la funcion ingresando los objetos como parametros
    calculateAverage(student1, student2);

    return 0;
}