#ifndef STATISTICS_HPP
#define STATISTICS_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

template <typename T>
class Statistics {
    public:
        // Colocar un const a los elementos que yo se que no voy a estar cambiando (optimizacion)
        Statistics(const std::vector<T>& data) : data(data){
            if(data.empty()){
                // Levantar excepcion si el vector de datos esta vacio para evitar errores
                throw std::invalid_argument("La lista de datos debe contener elementos");
            }
        }

        /*Vamos a crear un metodo, pero no vamos a usar "T" en el dato del tipo de retorno,
        nadamas vamos a tomar el dato del tipo T declarado arriba*/ 
        double mean() const {
            // Metodo para calcular la media
            T sum = 0;
            for (const T& value : data) {  // Forma de decirle a un for como iterar sobre un vector
                sum += value;
            }
            return static_cast<double> (sum / data.size());
        }

        // Metodo para calcular la desviacion estandar
        double standardDeviation() const {
            double meanValue = mean();
            double sumSquares = 0;

            for (const T& value : data) {
                sumSquares += (value -meanValue) * (value -meanValue);
            }

            return std::sqrt(sumSquares / data.size());
        }

    private:
        std::vector<T> data;
};

#endif