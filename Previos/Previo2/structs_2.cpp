// Segundo ejemplo script utilizando una estructura presentacion pag 33

#include <iostream>
#include <cstring>

using namespace std;

// Creacion de una estructura para almacenar datos de personas
struct Person 
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    // Se crea un "objeto" del tipo persona
    Person p1;

    // Se solocita al usuario sus datos
    cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    // Se imprime la informacion del usuario
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: "<< p1.salary;

    return 0;
}
