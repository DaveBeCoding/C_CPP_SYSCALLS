#include <iostream> 
#include "externals/std_math/test.hpp" //Part of Automation Project-Script <starterpack++> ... ignore = true;
#include <map> 
#include <utility>



/*
 
Pass a comparison object as the third template parameter to <std::map> to override its default order. 

The comparison object takes two pair objects and defines the ordering of the map’s keys by comparing the first and second elements of both pairs. 

If it returns <True>, the first pair appears before the second pair, and vice versa.

*/

typedef std::pair<std::string, std::string> pair;

struct comp {
    template < typename T >
        bool operator()(const T & l,
            const T & r) const {
            if (l.first == r.first) {
                return l.second > r.second;
            }

            return l.first < r.first;
        }
};

int main() {
    std::map <pair, int, comp> map = {
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
