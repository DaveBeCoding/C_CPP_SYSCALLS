#include <iostream>

#define ARRAYSIZEA(x) (sizeof(x) / sizeof(x[0]))

template <typename T, size_t N>
size_t ARRAYSIZEB(T (&y)[N])
{
    return N;
}

int main(int argc, char const *argv[])
{
    int arrayA[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int arrayB[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << ARRAYSIZEA(arrayA) << std::endl;
    std::cout << ARRAYSIZEB(arrayB) << std::endl;
    return 0;
}
