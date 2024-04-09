/**
 * @file PaisPrimerMundo.cpp
 * @brief En este archivo, se definen los metodos de la clase PaisPrimerMundo.
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

// Instancia
PaisPrimerMundo::PaisPrimerMundo(bool _cincoG, bool _centroInvest, int _habitantesTrabajo) :
    cincoG(_cincoG), centroInvest(_centroInvest), habitantesTrabajo(_habitantesTrabajo) {}

void PaisPrimerMundo::calcHabitantesTrabajo() const {
    // Se va a asumir que en un pais de primer mundo el 70% de la poblacion trabaja (fines didacticos)
    habitantesTrabajo = cantHabitantes * 0,7;
}
void PaisPrimerMundo::infoPais() const {

    /* PENDIENTE */

}