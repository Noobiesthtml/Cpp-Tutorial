#include <iostream>
#include <regex>

int main() {
    std::regex expressao("isr");
    if (regex_search("israel souza", expressao))
        std::cout << "encontrado" << std::endl;
    else
        std::cout << "nao encontrado" << std::endl;
}