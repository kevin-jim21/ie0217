//Agregar ifndef, define y endif
// Archivo donde se declaran los atributos y metodos e la clase TextProccesor

#include <string>

class TextProccesor {
    private:
        std::string input_filename;
        std::string output_filename;

    public:
        TextProccesor(const std::string& input_filename, const std::string& output_filename);
        void replace(const std::string& search_pattern, const std::string& replace_string);

};