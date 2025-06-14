// Source file en donde se define el constructor y el metodo de la clase TextProccesor

#include "text_proccesor.hpp"
#include <fstream>
#include <regex>

// Definicion del constructor
TextProccesor::TextProccesor(const std::string& input_filename, const std::string& output_filename)
    : input_filename(input_filename), output_filename(output_filename){}

// Definicion de metodo que reemplaza la cadena
void TextProccesor::replace(const std::string& search_pattern, const std::string& replace_string){
    std::ifstream input_file(input_filename);
    std::ofstream output_file(output_filename);
    std::string line;

    // Definir como expresion regular el patron que se ingreso para buscar en el metodo
    std::regex pattern(search_pattern);

    if(input_file && output_file) {
        // Buscar patron y reemplazarlo por un salto de linea
        while(getline(input_file, line)){
            std::string replaced = std::regex_replace(line, pattern, replace_string);
            output_file << replaced << "\n";
        }
    }
}
