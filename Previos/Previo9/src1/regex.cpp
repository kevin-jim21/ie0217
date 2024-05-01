// Ejemplo ideal del funcionamiento de un regex video

#include <iostream>
#include <regex>

int main() {
    // Crear una expresion regular
    auto const regex = std::regex("(my|your) regex");

    // Crear un string que contiene "my regex" y buscar la expresion regular dentro de este string
    auto const myText= std::string("A piece of the text that contains my regex.");
    bool const myTextContainsRegex = std::regex_search(myText, regex);

    // Crear un string que contiene "your regex" y buscar la expresion regular dentro de este string
    auto const yourText= std::string("A piece of the text that contains your regex.");
    bool const yourTextContainsRegex = std::regex_search(yourText, regex);

    // Crear un string que no contiene la expresion regular y buscar dicha expresion en el string
    auto const theirText= std::string("A piece of the text that contains their regex.");
    bool const theirTextContainsRegex = std::regex_search(theirText, regex);    

    // El metodo regex_search() devuelve un booleano que indica si se encontro o no el regex
    std::cout << std::boolalpha
              << myTextContainsRegex << '\n'
              << yourTextContainsRegex << '\n'
              << theirTextContainsRegex << '\n';

    return 0;
}
