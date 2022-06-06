#include <iostream>
#include <string>
#include <map>

using namespace std;

// std=c++11

int main()
{
    std::map<string, string> Dictionary;
    Dictionary.insert(pair<string, string>("computers", "are awesome"));
    Dictionary.insert(pair<string, string>("c++", "is the best language"));
    Dictionary.insert(pair<string, string>("leanr", "more coding patterns"));

    Dictionary["computers"] = "Best thing ever!";
    cout << Dictionary.size() << endl;
    // Dictionary.clear();

    for (auto pair : Dictionary)
        std::cout << pair.first << " ----> " << pair.second << std::endl;

    return 0;
}
