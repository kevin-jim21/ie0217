/* Headerfile utilizado para crear el template class Statistics el cual realiza un analisis
estadistico de un vector de datos numericos de cualquier tipo*/

#ifndef STATISTICS_HPP
#define STATISTICS_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

// Creacion de un template
template <typename T>
class Statistics {
    public:
        // Colocar un const a los elementos que se sabe de antemano que no van a estar cambiando (optimizacion)
        Statistics(const std::vector<T>& data) : data(data){
            if(data.empty()){
                // Levantar excepcion si el vector de datos esta vacio para evitar errores
                throw std::invalid_argument("La lista de datos debe contener elementos");
            }
        }

        /*Se crea un metodo, pero se va a utilizar "T" en el dato del tipo de retorno,
        nadamas se va a tomar el dato del tipo T declarado arriba*/ 
        double mean() const {
            // Metodo para calcular la media
            T sum = 0;
            for (const T& value : data) {  // Forma de decirle a un for como iterar sobre un vector
                sum += value;
            }
            return static_cast<double> (sum / data.size());  // Devolver sumatoria de datos entre el tamano de datos
        }

        // Metodo para calcular la desviacion estandar
        double standardDeviation() const {
            double meanValue = mean();
            double sumSquares = 0;

            for (const T& value : data) {
                sumSquares += (value -meanValue) * (value -meanValue);  // Sumatoria de cuadrados
            }

            return std::sqrt(sumSquares / data.size());  // Devolver sumatoria de cuadrados entre el tamano de datos
        }

    private:
        std::vector<T> data;
};

#endif