/**
 * @file Planeta.cpp
 * @brief En este archivo, se define el metodo infoPlaneta() de la clase Planeta
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


Planeta::Planeta(std::vector<std::string> _continentes, std::vector<std::string> _avionContinentes) : 
    continentes(_continentes), avionContinentes(_avionContinentes) {}  // Instancia de Planeta

void Planeta::infoPlaneta() const {
    std::cout << "Información General: " << std::endl;
    std::cout << "Planeta posee" << avionContinentes.size() << "continentes: ";
    
    // Bucle para imprimir
    for (int i = 0; i < continentes.size(); ++i) {
        std::cout << continentes[i] << " ";
    }

    std::cout << "\nEl avión pasa por los siguientes: ";

    for (int j = 0; j < avionContinentes.size(); ++j) {
        std::cout << avionContinentes[j] << " ";
    }

    std::cout << "Información sobre los países: " << std::endl;

    std::cout << "Información sobre los países de primer mundo: " << std::endl;

    std::cout << "Información sobre países en desarollo: " << std::endl;
    
}
