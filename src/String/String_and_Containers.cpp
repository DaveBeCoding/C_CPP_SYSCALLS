#include <iostream>
#include <vector>
#include <algorithm>

// -std=c++11
int main()
{
    std::vector<int> v{1, 2, 3};
    std::reverse(v.begin(), v.end());
    for (auto e : v)
        std::cout << e;
    std::cout << '\n';

    int a[] = {4, 5, 6, 7};
    std::reverse(std::begin(a), std::end(a));
    for (auto e : a)
        std::cout << e;
    std::cout << std::endl;

    char b[] = {'a', 'b', 'c', 'd'};
    std::reverse(std::begin(b), std::end(b));
    for (auto e : b)
        std::cout << e;
    std::cout << std::endl;

    std::string c[] = {"abcd", "who", "123"};
    std::reverse(std::begin(c), std::end(c));
    for (auto e : c)
        std::cout << e << "\t";

    return 0;
}

// int main()
// {

//     return 0;
// }
