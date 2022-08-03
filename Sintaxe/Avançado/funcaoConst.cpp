#include <iostream>
class Objeto {
private:
    int number;
public:
    Objeto() { std::cout << "Objeto criado" << std::endl; }
    // um método constante não pode alterar qualquer propriedade da classe
    // int incrementar() const { return this->++number; }        // errado, pois está alterando
                                                    // uma propriedade da classe
    int incrementar() const { return this->number + 1; }
};

int main() {
    Objeto* objeto = new Objeto();
    std::cout << objeto->incrementar();    
}