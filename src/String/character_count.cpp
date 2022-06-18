#include <iostream>

int main(int argc, char const *argv[])
{
    char test[] = "example";
    auto x = 0;

    for (; test[x] != '\0'; x++)
    {
        /* code */
    }

    std::cout << "Lenghth is " << x << std::endl;

    return 0;
}
