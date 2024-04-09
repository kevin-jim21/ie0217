/**
 * @file Pais.hpp
 * @brief En este headerfile, se declara la clase Pais.
 *
 * MIT License
 *
 * Copyright (c) [2024] [Kevin Jiménez Acuña]
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef PAIS_HPP
#define PAIS_HPP

class Pais {
    protected:
        std::string continente;
        std::string aeropuerto;
        int ident;
        int cantHabitantes;
        float pib;

    public:
        // Constructor
        Pais(std::string _continente, std::string _aeropuerto, int _ident, int _cantHabitantes, float _pib);

        // Declarar metodos virtuales
        virtual void obtenerPib() const;
        virtual void infoPais() const = 0;  // Metodo virtual puro ya que es diferente para paises en desarrollo
        virtual bool operator == (const Pais &pais_Comparado) const;  // Metodo para comparar paises

}

#endif // PAIS_HPP