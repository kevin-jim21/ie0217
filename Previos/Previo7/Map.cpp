// Otro ejemplo de contenedor asociativo (ppt diap 7)

#include <iostream>
#include <map>
using namespace std;

int main() {

    // Declara el mapa "student"
    map<int, string> student;

    // Anadir elementos mediante []
    student[1] = "Jacqueline";
    student[2] = "Blake";

    // Anadir elementos mediante insert
    student.insert(make_pair(3, "Denise"));
    student.insert(make_pair(4, "Blake"));

    // Sobreescribir elementos
    student[5] = "Timothy";
    student[5] = "Aaron";  // Se sobreescribe "Aaron" en el espacio 5 del map

    for (int i = 1; i <= student.size(); ++i) {
        cout << "Estudiante[" << i << "]: " << student[i] << endl;
    }

    return 0;
}