// Ejemplo de ingresar argumentos por linea de comandos a un programa de C++ presentacion pag 23

#include <iostream>

int main(int argc, char* argv[]) {

    // argc: numero de argumentos ingresados por linea de comandos
    //argv[i]: vectpr que contiene cada uno de los argumentos ingresados
    std::cout << "Numero de argumentos: " << argc << std::endl;
    std::cout << "Nombre del programa: " << argv[0] << std::endl;

    // Imprimir argumentos adicionales en caso de que hayan sido ingresados
    if (argc > 1) {
        std::cout << "Argumentos adicionales:" << std::endl;

        for (int i = 1; i < argc; ++i) {
            std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
        }
    }

    return 0;
}