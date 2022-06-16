#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
#include <iterator>

int main()
{
    std::string input;
    std::vector<std::string> str_source;
    std::cout << "Input a string " << std::endl;
    // std::cin >> input;
    while ((std::cin >> input) && input != (std::string) "9999")
        str_source.push_back(input);

    std::cout << "The numbers in the vector are: " << std::endl;
    std::copy(str_source.begin(), str_source.end(), std::ostream_iterator<std::string>(std::cout, " "));

    return 0;
}
