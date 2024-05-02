#include "Statistics.hpp"

int main() {
    try {
        std::vector<int> intData = {1, 2, 3, 4, 5};  // Crear un vector de datos tipo int

        Statistics<int> statsInt(intData);  // Analisis de datos de tipo entero

        std::cout << "Media de intData: " << statsInt.mean() << std::endl;
        std::cout << "Desviacion estandar de intData: " << statsInt.standardDeviation() << std::endl;

        /***********************/
        std::vector<double> doubleData = {1.5, 2.5, 3.5, 4.5, 5.5};  // Crear un vector de datos tipo double

        Statistics<double> statsDouble(doubleData);  // Analiss de datos tipo double

        std::cout << "Media de doubleData: " << statsDouble.mean() << std::endl;
        std::cout << "Desviacion estandar de doubleData: " << statsDouble.standardDeviation() << std::endl;

        /************************/
        std::vector<int> emptyData;  // Crear un vector de datos vacio
        Statistics<int> statsEmpty(emptyData);  // Enviar a analizar una lista de datos vacios

    } catch (const std::invalid_argument& e) {
        std::cerr << "Excepcion encontrada: " << e.what() << std::endl;
    }

    return 0;
}