#include <iostream> 
#include <iostream> 
#include <map> 
#include <utility>
#include "externals/std_math/test.hpp" //Part of Automation C++-Project-Script <starterpack++> ... ignore = true;

/*
        The third template parameter of std::map defaults to std::less, which will delegate to operator< 

        C++ expects operator< to be defined for the type used for map’s key(s)

        Since the operator< is already defined for pairs, we can initialize a std::map with std::pair as the key
*/

typedef std::pair<std::string, std::string> pair;

int main() {
    std::map < pair, int > map = {
        {
            std::make_pair("C++", "C++14"), 2014
        },
        {
            std::make_pair("C++", "C++17"),
            2017
        },
        {
            std::make_pair("Java", "Java 7"),
            2011
        },
        {
            std::make_pair("Java", "Java 8"),
            2014
        },
        {
            std::make_pair("C", "C11"),
            2011
        }
    };

    for (const auto & entry: map) {
        auto key_pair = entry.first;
        std::cout << "{" << key_pair.first << "," << key_pair.second << "}, " <<
            entry.second << std::endl;
    }

    return 0;
}
