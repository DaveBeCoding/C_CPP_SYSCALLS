#include <iostream>
#include "externals/std_math/test.hpp" //Part of Automation Project-Script <starterpack++> ... ignore = true;
#include <map>
#include <utility>
 

/*
Override the default order without using the comparison object.

Specialize std::less in the std namespace.       
*/

typedef std::pair<std::string, std::string> pair;
 
namespace std
{
    template<typename T1, typename T2>
    struct less<std::pair<T1, T2>>
    {
        bool operator()(const std::pair<T1, T2> &l,
                        const std::pair<T1, T2> &r) const
        {
            if (l.first == r.first) {
                return l.second > r.second;
            }
 
            return l.first > r.first;
        }
    };
}
 
int main()
{
    std::map<pair, int> map =
    {
        { std::make_pair("C++", "C++14"), 2014 },
        { std::make_pair("C++", "C++17"), 2017 },
        { std::make_pair("Java", "Java 7"), 2011 },
        { std::make_pair("Java", "Java 8"), 2014 },
        { std::make_pair("C", "C11"), 2011 }
    };
 
    for (const auto &entry: map)
    {
        auto key_pair = entry.first;
        std::cout << "{" << key_pair.first << "," << key_pair.second << "}, "
                  << entry.second << std::endl;
    }
 
    return 0;
}
