// Ejemplo de funciones que retornan un objeto ppt diap 9

#include <iostream>
using namespace std;

class Student {
    public:
        double marks1, marks2;
};

/* Se declara la funcion createStudent() de forma que devuelva un objeto
de la clase Student.*/
Student createStudent() {
    
    // Instancia de la clase Student
    Student student;

    // Acceder a los atributos de student
    student.marks1 = 96.5;
    student.marks2 = 75.0;

    // Imprimir las calificaciones
    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;

    return student;
}

int main() {

    // Instancia de la clase Student
    Student student1;

    // Guardar el objeto retornado en student1
    student1 = createStudent();

    return 0;
}