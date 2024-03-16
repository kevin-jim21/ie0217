// Segundo ejemplo de enums presentacion pag 8

#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thrusday, Friday, Saturday };

int main()
{
    /* En este ejemplo no se anadieron identificadores a los dias de la semana
    por lo que el compilador tomara el enum en orden y a cada elemento le
    asignara un valor de identificador de forma cresciente a partir de 0.*/

    week today;
    today = Wednesday;
    cout << "Day " << today+1;
    return 0;
}