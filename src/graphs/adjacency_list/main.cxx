#include <iostream>
#include "externals/std_math/test.hpp" //Part of Automation Project-Script <starterpack++> ... ignore = true;
#include <map>
#include <vector>

// Adjacency list example
int main()
{
    // std::unordered_map = O(1) if order of key(s) don't matter
    std::map<char, std::vector<char>> map;
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
} // working off of javascript objects https://github.com/DaveBeCoding/Helper_JS_Files/blob/main/js_trees/dfs_bfs/dfs_and_bfs.js