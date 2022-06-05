#include <iostream>

int main(int argc, char const *argv[])
{
    std::string message;
    std::cout << "What is the message" << std::endl;
    getline(std::cin, message);

    std::cout << "Current mesage\n";
    std::cout << message;
    return 0;
}
