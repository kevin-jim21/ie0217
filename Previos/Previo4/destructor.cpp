// Ejemplo funcionamiento de un destructor en una clase ppt diap 6

#include <iostream>
#include <fstream>

class Archivo {
    private:
        std::fstream archivo;

    public:

        // Al instanciar se buscara inmediatamente abrir el archivo
        Archivo(std::string nombre_archivo) {
            archivo.open(nombre_archivo, std::ios::in | std::ios::out | std::ios::app);
            if (!archivo.is_open()) {
                std::cout << "No se pudo abrir el archivo " << nombre_archivo << std::endl;
            }
        }

        /* El destructor en este caso se encargara de revisar si el archivo esta abierto;
        en caso de que este abierto lo cerrara para guardar correctamente las modificaciones
        que se realizaran eventualmente en el main.*/
        ~Archivo() {
            if (archivo.is_open()) {
                archivo.close();
            }
        }
};

int main() {
    // Crear el objeto mi_archivo basado en la clase Archivo
    Archivo mi_archivo("datos.txt");

    // Codigo para modificar el archivo

    return 0;
}