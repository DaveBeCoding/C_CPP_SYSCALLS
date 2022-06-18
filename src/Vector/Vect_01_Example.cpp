#include <vector>
#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    std::string input;
    std::vector<std::string> str_source;
    std::cout << "Input a string " << std::endl;
    // std::cin >> input;
    while ((std::cin >> input) && input != (std::string) "9999")
        str_source.push_back(input);

    std::cout << "The string in the vector is: " << std::endl;
    std::copy(str_source.begin(), str_source.end(), std::ostream_iterator<std::string>(std::cout, " "));

    // std::sort(str_source.begin(), str_source.end());
    if (std::find(str_source.begin(), str_source.end(), "the") != str_source.end())
    {
        std::cout << "Found the string" << std::endl;
    }

    return 0;
}
