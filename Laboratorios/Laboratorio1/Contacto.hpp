// Archivo en donde se declara la estructura que almacenara los contactos del usuario

// Si ya se definio CONTACTO_HPP, no se define de nuevo
#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <iostream>
#include <string>

struct Contacto {
    std::string nombre;
    std::string telefono;
};

#endif // CONTACTO_HPP