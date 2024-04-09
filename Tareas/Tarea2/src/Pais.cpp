/**
 * @file Pais.cpp
 * @brief En este archivo se definen los metodos virtuales de la clase Pais.
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

// Instancia Pais
Pais::Pais(std::string _continente, std::string _aeropuerto, int _ident, int _cantHabitantes, float _pib) :
    continente(_continente), aeropuerto(_aeropuerto), ident(_ident), cantHabitantes(_cantHabitantes), pib(_pib) {}

void Pais::obtenerPib() const {
    // Funcion lineal calcula el PIB de acuerdo a la cantidad de habitantes (fines didacticos)
    pib = (100 * cantHabitantes) + 1000
}

bool Pais::operator == (const Pais &pais_Comparado) const {
    /* Se llama una funcion para detectar si las identificaciones de lo paises
    son primas o no, el retorno de la funcion sera "1" si el numero es primo y
    sera "0" si el numero no es primo.*/


    /*PENDIENTE*/
}