/*En este headerfile se declara la estructura que va a contener la informacion
durante el desarrollo del juego. */

#ifndef AHORCADO_HPP
#define AHORCADO_HPP

#include <iostream>
#include <vector>
#include <string>

/**
 * @brief Esta estructura representa el juego "Ahorcado".
 * 
 * En esta estructura se almacenan todos los datos necesarios para definir
 * el "status" del juego durante su desarrollo y determinar cuando finaliza.
 * Se van a utilizar punteros hacia la estructura para actualizar sus
 * valores durante el juego.
 */
struct Ahorcado {
    std::string word; ///< Palabra que debe adivinar el usuario.
    char wordStatus[25]; ///< Letras adivinadas y que aun no han sido adivinadas.
    int maxAttemps; ///< Cantidad maxima de intentos para adivinar la palabra.
    int usedAttemps; ///< Intentos que ha utilizado el usuario hasta el momento.
};

#endif // AHORCADO_HPP
