#include <iostream>

struct Objeto {
    int number;
    std::string string;
    double doublePrecision;
    // construtor default 
    // inicializa todas as variáveis com valores padrão
    Objeto() = default;
};

int main() {
    Objeto* objeto = new Objeto();
    // valores inicializados como default
    std::cout << objeto->number << std::endl;
    std::cout << objeto->string << std::endl;   
    std::cout << objeto->doublePrecision << std::endl;
}