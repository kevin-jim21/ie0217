// Tercer ejemplo de enums presentacion pag 8

#include <iostream>
using namespace std;

enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main()
{
    /* En este caso se muestra el tamano en bytes del identificador de club,
    el cual al ser un numero entero ocupara un espacio en memoria de 4 bytes.*/
    card = club;
    cout << "Size of enum variable " << sizeof(card) << " bytes.";
    return 0;
}