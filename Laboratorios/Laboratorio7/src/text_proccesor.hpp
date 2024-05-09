// Archivo donde se declaran los atributos y metodos e la clase TextProccesor

#ifndef TEXT_PROCESSOR_HPP
#define TEXT_PROCESSOR_HPP

#include <string>

class TextProccesor {
    private:
        std::string input_filename;  // Archivo .txt de entrada
        std::string output_filename;  // Archivo .txt de salida

    public:
        // Declaracion del constructor
        TextProccesor(const std::string& input_filename, const std::string& output_filename);

        // Metodo que reemplaza una cadena de texto por otra
        void replace(const std::string& search_pattern, const std::string& replace_string);

};

#endif