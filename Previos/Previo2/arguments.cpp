// Ejemplo de uso arguments

#include <iostream>

// Forma clasica de pasar argumentos por linea de comando a un programa de C++
int main (int argc, char* argv[]) {
    
    /* Se van a imprimir la cantidad de argumentos y cada uno de los argumentos
    accediendo a estos mediante "argv[]"*/
    std::cout << "argc: " << argc << std::endl;
    std::cout << "argv[0]: " << argv[0] << std::endl;
    std::cout << "argv[1]: " << argv[1] << std::endl;
    std::cout << "argv[2]: " << argv[2] << std::endl;
    std::cout << "argv[3]: " << argv[3] << std::endl;

    return 0;
}