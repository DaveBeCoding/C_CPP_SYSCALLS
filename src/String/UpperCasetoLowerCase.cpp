#include <iostream>

const int CHAR_TOGGLE(32);

int main(int argc, char const *argv[])
{
    char test[] = "EXAMPLE";
    auto x = 0;
    for (; test[x] != '\0'; x++)
    {
        test[x] = test[x] + CHAR_TOGGLE;
    }

    std::cout
        << "Flipped string "
        << test
        << std::endl;
    return 0;
}
