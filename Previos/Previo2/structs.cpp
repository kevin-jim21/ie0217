// Ejemplo script utilizando una estructura presentacion pag 32

#include <iostream>
#include <cstring>

using namespace std;

// Creacion de una estructura para almacenar datos de libros
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

int main() {

    // Creacion de dos "objetos" de tipo libro
    struct Books Book1;
    struct Books Book2;

    // Establecer datos de Book1
    strcpy( Book1.title, "Learn C++ Programming");
    strcpy( Book1.author, "Chand Miyan");
    strcpy( Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;

    // Establecer datos de Book1
    strcpy( Book2.title, "Telecom Billing");
    strcpy( Book2.author, "Yakit Singha");
    strcpy( Book2.subject, "Telecom");
    Book2.book_id = 6495700;

    // Imprimir info de Book1
    cout << "Book 1 title : " << Book1.title <<endl;
    cout << "Book 1 author : " << Book1.author <<endl;
    cout << "Book 1 subject : " << Book1.subject <<endl;
    cout << "Book 1 id : " << Book1.book_id <<endl;

    // Imprimir info de Book1
    cout << "Book 2 title : " << Book2.title <<endl;
    cout << "Book 2 author : " << Book2.author <<endl;
    cout << "Book 2 subject : " << Book2.subject <<endl;
    cout << "Book 2 id : " << Book2.book_id <<endl;

    return 0;
}