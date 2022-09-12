#include <iostream>
// #include <string>
#include <map>
#include <vector>

int main()
{
    std::map<char, std::vector<char>> map; // could use std::unordered_map as well for O(1) lookup if order of keys doesn't matter
    map['a'].push_back('b');
    map['a'].push_back('c');
    map['b'].push_back('d');
    map['c'].push_back('e');
    map['d'].push_back('f');
    map['e'];
    map['f'];

    for (auto itr = map.begin(); itr != map.end(); itr++)
    {
        std::cout << itr->first << ":";
        for (auto vitr = itr->second.begin(); vitr != itr->second.end(); vitr++)
        {
            std::cout << *vitr << ",";
        }
        std::cout << std::endl;
    }
}