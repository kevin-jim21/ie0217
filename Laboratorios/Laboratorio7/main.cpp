#include <iostream>
#include "text_proccesor.hpp"

// Se va a utilizar entrada por argumentos
int main(int argc, char* argv[]) {
    if(argc < 5) {
        std::cerr << "Usage: " << argv[0] << "-f <filename> -o <outputfile> -search <search_pattern> -replace <replace_string>\n";
    }

    // Asignacion de argumentos
    std::string filename = argv[2];
    std::string outputfile = argv[4];
    std::string search_pattern = argv[6];
    std::string replace_string = argv[8];

    TextProccesor proccesor(filename, outputfile);
    proccesor.replace(search_pattern, replace_string);

    return 0;
}
