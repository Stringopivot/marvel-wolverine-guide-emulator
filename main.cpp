#include <iostream>
#include <string>

int main() {
    std::cout << "Application started!" << std::endl;

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
