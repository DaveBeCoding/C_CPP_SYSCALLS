#include <iostream>
#include <typeinfo>

#define ARRAYSIZEA(x) (sizeof(x) / sizeof(x[0])) // Macro,
// when used in library only use template version of function

template <typename T, size_t N>
size_t ARRAYSIZEB(T (&y)[N]) // make this a shared library
{
    return N;
}

int main(int argc, char const *argv[])
{
    int arrayA[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int arrayB[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char arrayC[] = {'a', 'b', 'c', 'd', 'e'};
    std::string arrayS[] = {"A", "B", "C", "D"};

    std::cout << ARRAYSIZEA(arrayA)
              << "\t" << typeid(arrayA).name()
              << std::endl;
    std::cout << ARRAYSIZEB(arrayB)
              << "\t" << typeid(arrayB).name()
              << std::endl;
    std::cout << ARRAYSIZEB(arrayC)
              << "\t" << typeid(arrayC).name()
              << std::endl;
    std::cout << ARRAYSIZEB(arrayS)
              << "\t" << typeid(arrayS).name()
              << std::endl;
    return 0;
}
